// Fill out your copyright notice in the Description page of Project Settings.


#include "Aircraft.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AAircraft::AAircraft()
{
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	SetRootComponent(BodyMesh);
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BodyMesh);
	SpringArm->SetRelativeLocation(FVector(0.f, 0.f, 40.f));
	SpringArm->TargetArmLength = 130.f;
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraLagSpeed = 0.f;
	SpringArm->CameraRotationLagSpeed = 3.f;
	SpringArm->CameraLagMaxDistance = 0.f;

	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	ThirdPersonCamera->SetupAttachment(SpringArm);
}

void AAircraft::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAircraft::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAircraft::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}

