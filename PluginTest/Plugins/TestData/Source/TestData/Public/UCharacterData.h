// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UCharacterData.generated.h"

/**
 * 
 */
UCLASS()
class TESTDATA_API UUCharacterData : public UObject
{
	GENERATED_BODY()
	
public:
	FORCEINLINE int32 GetAttack() { return AttackValue; }
	FORCEINLINE int32 GetHP() { return HPValue; }
	FORCEINLINE int32 GetDefend() { return DefendValue; }

	void SetAttack(int32 InAttack);
	void SetHP(int32 InHP);
	void SetDefend(int32 InDefend);

protected:
	int32 AttackValue;
	int32 HPValue;
	int32 DefendValue;
};
