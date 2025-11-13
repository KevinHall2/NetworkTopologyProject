// Fill out your copyright notice in the Description page of Project Settings.


#include "NT_HUD.h"
#include "Blueprint/UserWidget.h"


void ANT_HUD::BeginPlay()
{
	Super::BeginPlay();
	
	//include of "Blueprint/UserWidget.h" required
	WidgetInstance = CreateWidget(GetOwningPlayerController(), WidgetClass);
	
	if (WidgetInstance)
	{
		WidgetInstance->AddToPlayerScreen();
	}
}
