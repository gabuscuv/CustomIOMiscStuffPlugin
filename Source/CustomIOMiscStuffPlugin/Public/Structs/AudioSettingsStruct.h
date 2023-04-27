#pragma once

#include "CoreMinimal.h"
#include "AudioSettingsStruct.generated.h"
USTRUCT(BlueprintType)
struct FCustomAudioSettings
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float GameVolume;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float MusicVolume;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SFXVolume;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float VoiceVolume;
};