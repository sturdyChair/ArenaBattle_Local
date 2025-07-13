// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPatrolPos.h"
#include "ABAI.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Interface/ABCharacterAIInterface.h"

UBTTask_FindPatrolPos::UBTTask_FindPatrolPos()
{
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);
    APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
    if (!ControllingPawn)
    {
        return EBTNodeResult::Failed;
    }
    UNavigationSystemV1* NaviSystem = UNavigationSystemV1::GetNavigationSystem(ControllingPawn->GetWorld());
    if (!NaviSystem)
    {
        return EBTNodeResult::Failed;
    }
    FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(BBKEY_HOMEPOS);
    FNavLocation NextPatrolPos;
    IABCharacterAIInterface* AIInterface = Cast<IABCharacterAIInterface>(ControllingPawn);
    if(!AIInterface)
    {
        return EBTNodeResult::Failed;
    }
    if (NaviSystem->GetRandomPointInNavigableRadius(Origin, AIInterface->GetAIPatrolRadius(), NextPatrolPos))
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector(BBKEY_PATROLPOS, NextPatrolPos.Location);
        return EBTNodeResult::Succeeded;
    }
    return EBTNodeResult::Failed;
}
