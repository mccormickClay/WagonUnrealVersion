// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
/*class WAGON_API CombatStates
{
public:
	CombatStates();
	~CombatStates();
};*/

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum CombatStates
{
	Attack		UMETA(DisplayName = "Attack"),
	Block		UMETA(DisplayName = "Block"),
	Parry		UMETA(DisplayName = "Parry")
};
