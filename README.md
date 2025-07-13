# Arena Battle

[이득우의 언리얼 프로그래밍](https://www.inflearn.com/course/%EC%9D%B4%EB%93%9D%EC%9A%B0-%EC%96%B8%EB%A6%AC%EC%96%BC-%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%B0%8D-part-2) 강의의 실습 프로젝트입니다.
강의를 듣고 학습한 내용을 정리해두었습니다.

---

## 목차
  1. [CDO](#CDO)
  2. [Animation Blueprint](#animation-blueprint)
  3. [Enhanced Input](#enhanced-input)
  4. [Data](#data)
  5. [Behavior Tree](#behavior-tree)
  6. [Delegate](#delegate)
  7. [Widget, HUD](#widget-hud)
  8. [Interface](#interface)
---

## CDO   
(TODO 초기화된 클래스 프로퍼티 패널 이미지 삽입)
```
AABGameMode::AABGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> TPCRef(TEXT("/Game/ArenaBattle/Blueprint/BP_ABPlayerCharacter.BP_ABPlayerCharacter_C"));
	if (TPCRef.Class) DefaultPawnClass = TPCRef.Class;
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if(PlayerControllerRef.Class) PlayerControllerClass = PlayerControllerRef.Class;
}
```
> AABGameMode의 생성자 (ABGameMode.cpp)   

   - UObject 파생 클래스의 디폴트 객체   
   - 생성자에서 초기화된 대로 객체가 생성되며 주로 초기값을 설정하는 대 쓰임   
   - 에디터 실행 시 생성되기 때문에 생성자 함수나 헤더를 수정했다면 에디터를 재시작하는 것이 좋음   


---

## Animation Blueprint   
 (TODO 몽타주, 애니메이션 FSM 이미지 삽입)
```
class ARENABATTLE_API UABAnimInstance : public UAnimInstance
{
	...
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	TObjectPtr<class ACharacter> Owner;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	TObjectPtr<class UCharacterMovementComponent> Movement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character)
	FVector Velocity;
	...
};
```
> ABAnimInstance 헤더의 프로퍼티 선언(UABAnimInstance.h)   

   - C++에서 선언한 변수를 바탕으로 FSM을 통해 캐릭터의 Animation 제어   
   - Animation Montage를 이용해 여러 애니메이션을 한번에 관리   
   - Blend Space를 통해 현제 상태에 따라 여러 애니메이션을 Blend(ex. 현제 속도에 따라 idle->walk->run 애니메이션 관리)   

---

## Enhanced Input
 (TODO Input Context 블루프린트 이미지 삽입)
```
void AABPlayerCharacter::SetCharacterControl(ECharactetControlType NewCharacterControlType)
{
	UABCharacterControlData* NewControlData = CharacterControlManager[NewCharacterControlType];
	check(NewControlData);
	SetCharacterControlData(NewControlData);
	CurrentCharacterControlType = NewCharacterControlType;
	APlayerController* PlayerController = CastChecked<APlayerController>(GetController());
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
	{
		Subsystem->ClearAllMappings();
		Subsystem->AddMappingContext(NewControlData->InputMappingContext, 0);
	}
}
```
> 입력 컨텍스트를 변경하는 함수(AABPlayerCharacter.cpp)   

   - 향상된 입력을 사용하여 사용자 입력과 캐릭터의 멤버 함수를 바인딩   
   - 입력 컨텍스트를 이용하여 여러 입력 모드를 자유롭게 변경 가능   

---

## Data
(적당한 Data Asset 이미지 추가)
   - Data Asset 클래스를 이용해 캐릭터나 아이템을 위한 다양한 정보를 관리   
   - FTable 구조체를 이용해 캐릭터 스탯을 csv 파일로 관리   

---

## Behavior Tree   
(Behavior Tree 이미지 추가)
   - Black Board와 Behavior Tree를 이용해 ai 제어
   - Selector : 컴포짓 노드, 자손 중 하나라도 성공하면 성공(즉, 하나의 자손만 성공적으로 실행)   
   - Sequence : 컴포짓 노드, 자손들이 전부 성공하면 성공(즉, 실패할 때까지 모든 자손 실행)   
   - Task : 실제 작업을 수행하는 노드, 직접 정의하거나 미리 정의된 노드를 사용 가능    
   - Service : 컴포짓, 태스크 노드에 부착되어 정의된 주기마다 실행됨, 주로 블랙보드 확인과 업데이트에 사용   
   - Decorator : 컴포짓, 태스크 노드에 부착되어 노드 실행 여부를 판정함, abort를 통해 트리를 초기상태에서 다시 진행할 수도 있음   

---

## Delegate
```
DECLARE_DELEGATE_OneParam(FOnTakeItemDelegate, class UABItemData* /*InItemData*/);
USTRUCT(BlueprintType)
struct FTakeItemDelegateWrapper
{
	...
	FOnTakeItemDelegate ItemDelegate;
};
```
> OnTakeItem 델리게이트 + wrapper 선언(ABCharacterBase.h)   
```
	TakeItemActions.Add(FTakeItemDelegateWrapper{FOnTakeItemDelegate::CreateUObject(this, &AABCharacterBase::EquipWeapon)});
	TakeItemActions.Add(FTakeItemDelegateWrapper{FOnTakeItemDelegate::CreateUObject(this, &AABCharacterBase::DrinkPotion)});
	TakeItemActions.Add(FTakeItemDelegateWrapper{FOnTakeItemDelegate::CreateUObject(this, &AABCharacterBase::ReadScroll)});
```
> ABCharacterBase 생성자 일부, 델리게이트 등록(ABCharacterBase.cpp)

   - 델리게이트의 broadcast에 따라, 이에 등록된 함수(들)를 실행
   - 직접 참조를 하지 않아 클래스간의 의존성을 낮춤
   - 구독자는 발행자의 신호에 따라 정해진 동작을 수행하므로, 매 프레임 상태를 확인하는 낭비가 필요 없음   

---

## Widget, HUD
(widget 블루프린트 이미지)
   - 언리얼의 widget을 이용해 인게임 UI나 HUD를 구성
   - 시각적 정보를 Blueprint로 구성하고, C++에서 로직을 구현

---

## Interface
```
class ARENABATTLE_API IABCharacterItemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void TakeItem(class UABItemData* InItemData) = 0;
};
```
> Character - Item 간 인터페이스 선언(ABCharacterItemInterface.h)

   - 객체간 직접 참조를 피하고 Interface를 통한 우회적 참조를 통해 유지보수성 향상
   - Character - Notify, Character - UI, Character - Item 등 다양한 객체간 통신을 위해 사용   

