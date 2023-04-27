// Copyright 2023 Gabriel Bustillo del Cuvillo

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"


class USaveGame_User;
class USaveGame_System;

struct FMovementSettings;
struct FCustomAudioSettings;
struct FSubtitlesSettings;

#include "ConstFiles.generated.h"


/**
 * 
 */
UCLASS()
class CUSTOMIOMISCSTUFFPLUGIN_API UConstFiles : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	static FORCEINLINE FString GetConstSystemData() { return "SystemData";} 
	static FORCEINLINE FString GetConstCurrentUserData(uint8 userid) { return TEXT("UserData_") + FString::FromInt(userid);}

	static USaveGame_System* GetSystemData();
	static USaveGame_User* GetUserData(uint16 slot);

	template <typename T>
	static T* GetGenericSaveData(FString slotName);
	template <typename T>
	static bool SaveGenericSaveData(T * saveData, FString slotName);

	static bool SaveSystemData(USaveGame_System * savedata);
	static bool SaveUserData(USaveGame_User * savedata);

	static FMovementSettings GetMovementSettings(uint16 UserSlot);
	static FSubtitlesSettings GetSubtitleSettings(uint16 UserSlot);

	static FCustomAudioSettings GetAudioSettings();

	static bool SaveMovementSettings(uint16 UserSlot, FMovementSettings settings);
	static bool SaveSubtitleSettings(uint16 UserSlot, FSubtitlesSettings settings);

	static bool SaveAudioSettings(FCustomAudioSettings settings);

};
