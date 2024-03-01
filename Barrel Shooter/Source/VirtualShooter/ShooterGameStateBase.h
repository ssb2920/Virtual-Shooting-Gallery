// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ShooterGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class VIRTUALSHOOTER_API AShooterGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	

protected:
	virtual void BeginPlay() override;

	void Countdown();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int CountdownMinutes = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int CountdownSeconds = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TargetSpeed = 1.0f;

	UFUNCTION(BlueprintImplementableEvent)
	void CountDownEnded();

	FTimerHandle CountdownTimerHandle;



};
