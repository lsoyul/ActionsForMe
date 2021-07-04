// Fill out your copyright notice in the Description page of Project Settings.

#include "TestActor.h"
#include "ActionsForMe.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	AFMLOG_S(Warning);
	AFMLOG(Warning, TEXT("Actor Name : %s, ID : %d, Location X L %.3f"), *GetName(), ID, GetActorLocation().X);
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

