// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "PlayerInputController.generated.h"


UCLASS(Blueprintable)
class WAGON_API APlayerInputController : public APlayerController
{
	GENERATED_BODY()
	

public:
	void SetupInput();
	void Pressed_A();
};
