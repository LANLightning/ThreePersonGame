// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BTTask_ClearFocus.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API UBTTask_ClearFocus : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UBTTask_ClearFocus();
	
};
