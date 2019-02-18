// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSGameModeBase.h"
// #include "Engine.h"

void AFPSGameModeBase::StartPlay()
{
	Super::StartPlay();
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is a debug message."));
	}
}