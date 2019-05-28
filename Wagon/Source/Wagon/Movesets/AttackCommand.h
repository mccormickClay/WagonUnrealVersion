// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
class UEnemyAction;

/**
 * 
 */
class WAGON_API AttackCommand
{
public:
	AttackCommand();
	~AttackCommand();

	void Attack(UEnemyAction* enemy);
};
