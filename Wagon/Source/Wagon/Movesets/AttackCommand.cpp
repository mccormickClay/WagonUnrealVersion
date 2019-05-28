// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackCommand.h"
#include "Enemy/EnemyAction.h"

AttackCommand::AttackCommand()
{
}

AttackCommand::~AttackCommand()
{
}

void AttackCommand::Attack(UEnemyAction* _enemy)
{
	UE_LOG(LogTemp, Warning, TEXT("Attack Function Occuring now"));
	_enemy->Damage();
}