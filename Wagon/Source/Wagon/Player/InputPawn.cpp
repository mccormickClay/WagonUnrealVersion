// Fill out your copyright notice in the Description page of Project Settings.


#include "InputPawn.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EngineUtils.h"
#include "Enemy/EnemyAction.h"

// Sets default values
AInputPawn::AInputPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	OurVisableComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Player Mesh"));

	OurVisableComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AInputPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// move this later.
	// a factory/enemymanager can hold the references and give them to the player to attack when available.
	for (TActorIterator<APawn> ActorItr(this->GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		APawn *Pawn = *ActorItr;
		UEnemyAction* enemyAction = Pawn->FindComponentByClass<UEnemyAction>();
		if (enemyAction != nullptr)
		{
			enemy = Pawn;
			UE_LOG(LogTemp, Warning, TEXT("%s"), *enemy->GetName());
		}
	}
}

// Called every frame
void AInputPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInputPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("PressW", IE_Pressed, this, &AInputPawn::Pressed_W);
	InputComponent->BindAction("PressA", IE_Pressed, this, &AInputPawn::Pressed_A);
	InputComponent->BindAction("PressD", IE_Pressed, this, &AInputPawn::Pressed_D);

}

void AInputPawn::Pressed_W()
{
	UE_LOG(LogTemp, Warning, TEXT("W is being clicked!"));
}

void AInputPawn::Pressed_A()
{
	UE_LOG(LogTemp, Warning, TEXT("A is being clicked!"));
}

void AInputPawn::Pressed_D()
{
	UE_LOG(LogTemp, Warning, TEXT("D is being clicked!"));
}