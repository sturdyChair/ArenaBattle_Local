// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_TurnToTarget.h"
#include "AIController.h"
#include "Interface/ABCharacterAIInterface.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ABAI.h"

UBTTask_TurnToTarget::UBTTask_TurnToTarget()
{
}

EBTNodeResult::Type UBTTask_TurnToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

    APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
    if (!ControllingPawn)
    {
        return EBTNodeResult::Failed;
    }
    IABCharacterAIInterface* AIPawn = Cast<IABCharacterAIInterface>(ControllingPawn);
    if (!AIPawn)
        return EBTNodeResult::Failed;
    APawn* Target = Cast<APawn>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(BBKEY_TARGET));
    if(!Target)
        return EBTNodeResult::Failed;
    float TurnSpeed = AIPawn->GetAITurnSpeed();
    FVector LookVector = Target->GetActorLocation() - ControllingPawn->GetActorLocation();
    LookVector.Z = 0.f;
    FRotator TargetRotator = FRotationMatrix::MakeFromX(LookVector).Rotator();
    ControllingPawn->SetActorRotation(FMath::RInterpTo(ControllingPawn->GetActorRotation(), TargetRotator, GetWorld()->GetDeltaSeconds(), TurnSpeed));


	return EBTNodeResult::Succeeded;
}
