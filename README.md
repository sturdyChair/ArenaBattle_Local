# Arena Battle

[이득우의 언리얼 프로그래밍](https://www.inflearn.com/course/%EC%9D%B4%EB%93%9D%EC%9A%B0-%EC%96%B8%EB%A6%AC%EC%96%BC-%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%B0%8D-part-2) 강의의 실습 프로젝트입니다.
강의를 듣고 학습한 내용을 정리해두었습니다.

---

## 목차
  1. [CDO](#CDO)
  2. [Animation Blueprint](#animation-blueprint)
  3. [Enhanced Input](#enhanced-input)
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
> AABGameMode::AABGameMode (ABGameMode.cpp)   
> AABGameMode의 생성자   

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
> UABAnimInstance.h
> ABAnimInstance 헤더의 프로퍼티 선언   

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
> AABPlayerCharacter::SetCharacterControl (AABPlayerCharacter.cpp)
> 입력 컨텍스트를 변경하는 함수

   - 향상된 입력을 사용하여 사용자 입력과 캐릭터의 멤버 함수를 바인딩   
   - 입력 컨텍스트를 이용하여 여러 입력 모드를 자유롭게 변경 가능

---

