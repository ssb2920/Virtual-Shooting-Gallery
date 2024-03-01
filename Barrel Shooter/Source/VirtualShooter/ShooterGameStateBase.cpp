// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterGameStateBase.h"

void AShooterGameStateBase::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ThisClass::Countdown, 1.0f, true, 1.0f);
}

void AShooterGameStateBase::Countdown()
{
	if (CountdownSeconds == 0)
	{
		if(CountdownMinutes == 0)
		{ 
			GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
			CountDownEnded();
		}
		else
		{
			CountdownSeconds = 59;
			CountdownMinutes--;
		}

	}
	else
	{
		CountdownSeconds--;
	}
}
