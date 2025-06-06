// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Sandman_Player_Basic.generated.h"

UCLASS()
class DAYDREAMS_SANDMAN_API ASandman_Player_Basic : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASandman_Player_Basic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
