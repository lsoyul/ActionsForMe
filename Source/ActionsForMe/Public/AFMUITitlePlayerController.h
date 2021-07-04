// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ActionsForMe.h"
#include "GameFramework/PlayerController.h"
#include "AFMUITitlePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONSFORME_API AAFMUITitlePlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadwrite, Category = UI)
		TSubclassOf<class UUserWidget> UIWidgetClass;
	
	UPROPERTY()
		class UUserWidget* UIWidgetInstance;

};
