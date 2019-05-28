// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAction.h"

// Sets default values for this component's properties
UEnemyAction::UEnemyAction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Health = 100;
	// ...
}


// Called when the game starts
void UEnemyAction::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


// Called every frame
void UEnemyAction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEnemyAction::Damage()
{
	int _damage = 1;
	Health -= _damage;
	UE_LOG(LogTemp, Warning, TEXT("Enemy's Health is %d"), Health);
}

void UEnemyAction::Attack()
{

}
