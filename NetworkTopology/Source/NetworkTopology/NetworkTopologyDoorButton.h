// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Logging/StructuredLog.h"
#include "NetworkTopologyDoorButton.generated.h"

UCLASS()
class NETWORKTOPOLOGY_API ANetworkTopologyDoorButton : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	TObjectPtr<class USceneComponent> RootSceneComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	TObjectPtr<class UStaticMeshComponent> ButtonMeshComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	TObjectPtr<class UBoxComponent> ButtonBoxTriggerComponent;
	
public:	
	// Sets default values for this actor's properties
	ANetworkTopologyDoorButton();

protected:

public:	
	//AActor members
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;
};
