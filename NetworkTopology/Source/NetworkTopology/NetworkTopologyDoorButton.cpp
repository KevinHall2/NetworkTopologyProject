// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkTopologyDoorButton.h"
#include "Components/SceneCOmponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ANetworkTopologyDoorButton::ANetworkTopologyDoorButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>("RootSceneComponent");
	
	ButtonMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("ButtonMeshComponent");
	ButtonMeshComponent->SetupAttachment(RootSceneComponent);
	
	ButtonBoxTriggerComponent = CreateDefaultSubobject<UBoxComponent>("ButtonBoxTriggerComponent");
	ButtonBoxTriggerComponent->SetupAttachment(ButtonMeshComponent);

}

void ANetworkTopologyDoorButton::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	//Skips the call if not on the server
	if (GetLocalRole() < ROLE_Authority) {return;}
	
	//"Logging/Structured.h" needed to work
	UE_LOGFMT(LogTemp, Log, "Button Entered");
}

void ANetworkTopologyDoorButton::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);
	
	//Skips the call if not on the server
	if (GetLocalRole() < ROLE_Authority) {return;}
	
	//"Logging/Structured.h" needed to work
	UE_LOGFMT(LogTemp, Log, "Button Exited");
}


