// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputPawn.generated.h"

UCLASS()
class WAGON_API AInputPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AInputPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Pressed_W();
	void Pressed_A();
	void Pressed_D();

	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisableComponent;

private:
	APawn* enemy;
};
