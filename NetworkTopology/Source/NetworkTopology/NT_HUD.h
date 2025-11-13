// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NT_HUD.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKTOPOLOGY_API ANT_HUD : public AHUD
{
	GENERATED_BODY()
	
	UPROPERTY(EditDEfaultsOnly)
	TSubclassOf<class UUserWidget> WidgetClass;
	
	UPROPERTY()
	TObjectPtr<UUserWidget> WidgetInstance;
	
public:
	//Returns the UMG widget instance spawned by this class
	UFUNCTION(BlueprintCallable)
	UUserWidget* GetWidgetInstance() {return WidgetInstance;}
	
protected:
	virtual void BeginPlay() override;
};
