// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Aircraft.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class PROJECTUNREAL_API AAircraft : public APawn
{
	GENERATED_BODY()

public:
	AAircraft();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* BodyMesh = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArm = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* ThirdPersonCamera = nullptr;
};
