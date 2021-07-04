// Fill out your copyright notice in the Description page of Project Settings.

#include "AFMUITitlePlayerController.h"
#include "Blueprint/UserWidget.h"

void AAFMUITitlePlayerController::BeginPlay()
{
	Super::BeginPlay();

	AFMCHECK(nullptr != UIWidgetClass);

	UIWidgetInstance = CreateWidget<UUserWidget>(this, UIWidgetClass);
	AFMCHECK(nullptr != UIWidgetInstance);

	UIWidgetInstance->AddToViewport();

	FInputModeUIOnly Mode;

	Mode.SetWidgetToFocus(UIWidgetInstance->GetCachedWidget());
	SetInputMode(Mode);
	bShowMouseCursor = true;
}