// Copyright Peemard Software 2021, feel free to redistribute, modify, and reupload alongside proper attribution (: 

#pragma once

#include "EasyDiscordCore.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RichPresence.generated.h"

UENUM(BlueprintType)
enum class ERichPresenceType: uint8
{
	STATE = 0				UMETA(DisplayName = "State"),
	DETAILS	= 1				UMETA(DisplayName = "Details") ,	
	START_TIMESTAMP	= 2		UMETA(DisplayName = "Start Timestamp"),
	END_TIMESTAMP = 3		UMETA(DisplayName = "End Timestamp"),
	LARGE_IMAGE_KEY	= 4		UMETA(DisplayName = "Large Image Key"),
	LARGE_IMAGE_TEXT = 5	UMETA(DisplayName = "Large Image Text"),
	SMALL_IMAGE_KEY	= 6		UMETA(DisplayName = "Small Image Key"),
	SMALL_IMAGE_TEXT = 7	UMETA(DisplayName = "Small Image Text"),
	PARTY_ID = 8			UMETA(DisplayName = "Party ID"),
	PARTY_SIZE = 9			UMETA(DisplayName = "Party Size"),
	PARTY_MAX = 10			UMETA(DisplayName = "Party Max"),
	JOIN_SECRET	= 11		UMETA(DisplayName = "Join Secret")
};

UCLASS(NotBlueprintable, BlueprintType)
class EASYDISCORD_API URichPresence : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "EasyDiscord|RichPresence")
	static void SetState(UEasyDiscordCore* DiscordCore, FString NewState);

	UFUNCTION(BlueprintCallable, Category = "EasyDiscord|RichPresence")
	static void SetDetails(UEasyDiscordCore* DiscordCore, FString NewDetails);

	UFUNCTION(BlueprintCallable, Category = "EasyDiscord|RichPresence")
	static void SetLargeImageKey(UEasyDiscordCore* DiscordCore, FString NewLargeImageKey);


	UFUNCTION(BlueprintCallable, Category = "EasyDiscord|RichPresence")
	static void SetSmallImageKey(UEasyDiscordCore* DiscordCore, FString NewSmallImageKey);


};
