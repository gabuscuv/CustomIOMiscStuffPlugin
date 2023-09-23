#pragma once

#include "CoreMinimal.h"
#include "AudioSettingsStruct.generated.h"
USTRUCT(BlueprintType)
struct FCustomAudioSettings
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float GameVolume = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float MusicVolume = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SFXVolume = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float VoiceVolume = 1.0f;
};