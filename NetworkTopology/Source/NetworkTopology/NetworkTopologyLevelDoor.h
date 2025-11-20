// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"
#include "NetworkTopologyLevelDoor.generated.h"

UCLASS()
class NETWORKTOPOLOGY_API ANetworkTopologyLevelDoor : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	TObjectPtr<class USceneComponent> RootSceneComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	TObjectPtr<class UStaticMeshComponent> DoorMeshComponent;
	
public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool bIsOpen;
	
	// Sets default values for this actor's properties
	ANetworkTopologyLevelDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
