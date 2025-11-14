// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkTopologyHUD.h"
#include "Blueprint/UserWidget.h"


void ANetworkTopologyHUD::BeginPlay()
{
	Super::BeginPlay();
	
	//include of "Blueprint/UserWidget.h" required
	WidgetInstance = CreateWidget(GetOwningPlayerController(), WidgetClass);
	
	if (WidgetInstance)
	{
		WidgetInstance->AddToPlayerScreen();
	}
}
