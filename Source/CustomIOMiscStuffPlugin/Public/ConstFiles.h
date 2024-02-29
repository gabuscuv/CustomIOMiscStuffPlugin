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

	UFUNCTION(BlueprintCallable)
	static USaveGame_System* GetSystemData();
	
	UFUNCTION(BlueprintCallable)
	static USaveGame_User* GetUserData(uint8 slot);

	template <typename T>
	static T* GetGenericSaveData(FString slotName);
	template <typename T>
	static bool SaveGenericSaveData(T * saveData, FString slotName);

	UFUNCTION(BlueprintCallable)
	static bool SaveSystemData(USaveGame_System * savedata);
	UFUNCTION(BlueprintCallable)
	static bool SaveUserData(USaveGame_User * savedata);

	UFUNCTION(BlueprintCallable)
	static FMovementSettings GetMovementSettings(uint8 UserSlot);
	UFUNCTION(BlueprintCallable)
	static FSubtitlesSettings GetSubtitleSettings(uint8 UserSlot);
	
	UFUNCTION(BlueprintCallable)
	static FCustomAudioSettings GetAudioSettings();

	UFUNCTION(BlueprintCallable)
	static bool SaveMovementSettings(uint8 UserSlot, FMovementSettings settings);
	UFUNCTION(BlueprintCallable)
	static bool SaveSubtitleSettings(uint8 UserSlot, FSubtitlesSettings settings);

	UFUNCTION(BlueprintCallable)
	static bool SaveAudioSettings(FCustomAudioSettings settings);

};
