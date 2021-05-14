// Copyright Peemard Software 2021, feel free to redistribute, modify, and reupload alongside proper credit (: 


#include "EasyDiscordCore.h"
#include "../GameSDK/discord.h"
#include "UObject/Class.h"
#include "EasyDiscord.h"

discord::Core* core{};

UEasyDiscordCore* UEasyDiscordCore::EDC = nullptr;

UEasyDiscordCore::UEasyDiscordCore()
{
    bCanTick = false;
}

void UEasyDiscordCore::Tick(float DeltaTime)
{
    if(bCanTick)
    {
    ::core->RunCallbacks();
    }
}

discord::Core* UEasyDiscordCore::GetCore()
{
    return core;
}

void UEasyDiscordCore::BindToDiscord(FString ClientID, bool bForceBind, EBindOutputs& Branch, UEasyDiscordCore*& DiscordCore, FString& OutputDetails)
{
    if(EDC == nullptr)
    {

        EDC = NewObject<UEasyDiscordCore>();
        EDC->AddToRoot();

        bool bBindSuccess;
        EDC->ConnectToDiscord(ClientID, bForceBind, bBindSuccess);
        if(bBindSuccess)
        {
            OutputDetails = "Binding to Discord succeeded!";
            DiscordCore = EDC;
            Branch = EBindOutputs::Then;
        }
        else
        {
            OutputDetails = "Binding to Discord failed due to an unknown error.";
            Branch = EBindOutputs::Failed;            
        }
    } 
    else 
    {
        OutputDetails = "Binding to Discord failed. Easy Discord is already connected to Discord.";
        Branch = EBindOutputs::Failed;
    }
}

void UEasyDiscordCore::ConnectToDiscord(FString ClientID, bool bForceBind, bool& bSuccess)
{
    discord::Result result = discord::Core::Create(FCString::Atoi64(*ClientID), bForceBind ? DiscordCreateFlags_Default : DiscordCreateFlags_NoRequireDiscord, &core);

    if(result == discord::Result::Ok){
        EDC->bCanTick = true;
        bSuccess=true;
    }
    else
    {
        bSuccess=false;
    }
}

void UEasyDiscordCore::UnBindFromDiscord()
{

}

UEasyDiscordCore* UEasyDiscordCore::GetDiscord()
{
    return EDC;
}