// Copyright 2023 Gabriel Bustillo del Cuvillo

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Structs/AudioSettingsStruct.h"
#include "Structs/SubtitleSettingsStruct.h"
#include "Structs/MovementSettingsStruct.h"

#include "SaveGame_User.generated.h"
/**
 * 
 */
UCLASS()
class CUSTOMIOMISCSTUFFPLUGIN_API USaveGame_User : public USaveGame
{
	GENERATED_BODY()
	public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=MyCategory)
	uint8 SlotId = 0;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=MyCategory)
	FCustomAudioSettings AudioSettings;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=MyCategory)
	FSubtitlesSettings SubtitlesSettings;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=MyCategory)
	FMovementSettings MovementSettings;
	
};
