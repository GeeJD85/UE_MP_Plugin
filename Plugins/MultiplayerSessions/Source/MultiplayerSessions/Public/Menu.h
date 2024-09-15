// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup();

protected:
	virtual bool Initialize() override;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UButton> Button_Host;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Join;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	// The subsystem designed to handle all online session functionality
	TObjectPtr<class UMultiplayerSessionsSubsystem> MultiplayerSessionsSubsystem;
};
