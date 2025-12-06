// Fill out your copyright notice in the Description page of Project Settings.


#include "UCharacterData.h"

void UUCharacterData::SetAttack(int32 InAttack)
{
	if (InAttack < 0)
		return;

	AttackValue = InAttack;
}

void UUCharacterData::SetHP(int32 InHP)
{
	if (InHP < 0)
		return;

	HPValue = InHP;
}

void UUCharacterData::SetDefend(int32 InDefend)
{
	if (InDefend < 0)
		return;

	DefendValue = InDefend;
}
