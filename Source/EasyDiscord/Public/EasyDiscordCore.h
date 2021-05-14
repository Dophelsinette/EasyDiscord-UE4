// Copyright Peemard Software 2021, feel free to redistribute, modify, and reupload alongside proper credit (: 

#pragma once


#include "CoreMinimal.h"
#include "Tickable.h"
#include "../GameSDK/discord.h"
#include "EasyDiscordCore.generated.h"

UENUM(BlueprintType)
enum class EBindOutputs : uint8
{
	Then,
	Failed,
};

UCLASS(NotBlueprintable, BlueprintType)
class EASYDISCORD_API UEasyDiscordCore : public UObject, public FTickableGameObject 
{

	GENERATED_BODY()

private:

	static UEasyDiscordCore* EDC;

	void ConnectToDiscord(FString ClientID, bool bForceBind, bool& bSuccess);

	bool bCanTick = true;

public:

	UEasyDiscordCore();

	void Tick(float DeltaTime) override;

	discord::Core* GetCore();

	UFUNCTION(BlueprintCallable, Category = "EasyDiscord|Setup", Meta = (ExpandEnumAsExecs = "Branch"))
	static void BindToDiscord(FString ClientID, bool bForceBind, EBindOutputs& Branch, UEasyDiscordCore*& DiscordCore, FString& OutputDetails);

	UFUNCTION(BlueprintCallable, Category = "EasyDiscord|Setup")
	static void UnBindFromDiscord();

	UFUNCTION(BlueprintPure, Category = "EasyDiscord")
	static UEasyDiscordCore* GetDiscord();

public:

	bool IsTickable() const override { return bCanTick; }
	bool IsTickableInEditor() const override { return true; }
	bool IsTickableWhenPaused() const override { return true; }
	TStatId GetStatId() const override { return TStatId(); }

};
