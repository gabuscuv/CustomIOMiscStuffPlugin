// Copyright 2023 Gabriel Bustillo del Cuvillo

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Structs/AudioSettingsStruct.h"
#include "Structs/SubtitleSettingsStruct.h"

#include "SaveGame_System.generated.h"
/**
 * 
 */
UCLASS()
class CUSTOMIOMISCSTUFFPLUGIN_API USaveGame_System : public USaveGame
{
	GENERATED_BODY()
	public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=MyCategory)
	FCustomAudioSettings AudioSettings = FCustomAudioSettings();
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=MyCategory)
	FSubtitlesSettings SubtitlesSettings = FCustomAudioSettings();
	
};
