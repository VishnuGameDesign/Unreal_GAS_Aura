// Copyright by Vishnu Suresh

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	AAuraEnemy();

public:
	virtual void BeginPlay() override;

	/**	Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/**	end Enemy Interface */
	
	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;
};
