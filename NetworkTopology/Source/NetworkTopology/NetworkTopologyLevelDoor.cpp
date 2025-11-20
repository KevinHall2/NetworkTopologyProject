// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkTopologyLevelDoor.h"

// Sets default values
ANetworkTopologyLevelDoor::ANetworkTopologyLevelDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;
	
	RootComponent = RootSceneComponent = CreateDefaultSubobject<USceneComponent>("RootSceneComponent");
	
	DoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("DoorMeshComponent");
	DoorMeshComponent->SetupAttachment(RootSceneComponent);

}

// Called when the game starts or when spawned
void ANetworkTopologyLevelDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANetworkTopologyLevelDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	DoorMeshComponent->SetVisibility(!bIsOpen);
	SetActorEnableCollision(!bIsOpen);
}

void ANetworkTopologyLevelDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	//"Net/UnrealNetwork.h" required to work
	DOREPLIFETIME(ThisClass, bIsOpen);
}

