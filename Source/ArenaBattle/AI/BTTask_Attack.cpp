// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_Attack.h"
#include "AIController.h"
#include "Interface/ABCharacterAIInterface.h"

UBTTask_Attack::UBTTask_Attack()
{
}

EBTNodeResult::Type UBTTask_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
    AIPawn->AttackByAI();
    FATCharacterAttackFinished OnAttackFinished;
    OnAttackFinished.BindLambda([&](){
        FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
        });
    AIPawn->SetAIAttackDelegate(OnAttackFinished);
	return EBTNodeResult::InProgress;
}
