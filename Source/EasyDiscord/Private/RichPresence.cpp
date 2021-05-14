// Copyright Peemard Software 2021, feel free to redistribute, modify, and reupload alongside proper attribution (: 

#include "RichPresence.h"
#include "EasyDiscordCore.h"
#include "../GameSDK/discord.h"
#include "EasyDiscord.h"

discord::Activity activity{};

void URichPresence::SetState(UEasyDiscordCore* DiscordCore, FString NewState)
{
    activity.SetState(TCHAR_TO_ANSI(*NewState));
    DiscordCore->GetCore()->ActivityManager().UpdateActivity(activity, [](discord::Result result){});
}

void URichPresence::SetDetails(UEasyDiscordCore* DiscordCore, FString NewDetails)
{
    activity.SetDetails(TCHAR_TO_ANSI(*NewDetails));
    DiscordCore->GetCore()->ActivityManager().UpdateActivity(activity, [](discord::Result result){});
    
}

void URichPresence::SetLargeImageKey(UEasyDiscordCore* DiscordCore, FString NewLargeImageKey)
{
    activity.GetAssets().SetLargeImage(TCHAR_TO_ANSI(*NewLargeImageKey));
    DiscordCore->GetCore()->ActivityManager().UpdateActivity(activity, [](discord::Result result){});
    
}

void URichPresence::SetSmallImageKey(UEasyDiscordCore* DiscordCore, FString NewSmallImageKey)
{
    activity.GetAssets().SetSmallImage(TCHAR_TO_ANSI(*NewSmallImageKey));
    DiscordCore->GetCore()->ActivityManager().UpdateActivity(activity, [](discord::Result result){});
    
}


