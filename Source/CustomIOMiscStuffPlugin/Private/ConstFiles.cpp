// Copyright 2023 Gabriel Bustillo del Cuvillo
#include "ConstFiles.h"

#include "Kismet/GameplayStatics.h" 

#include "Structs/SubtitleSettingsStruct.h"
#include "Structs/AudioSettingsStruct.h"
#include "Structs/MovementSettingsStruct.h"
//#include "Enums/ETurningMode.h"
//#include "Enums/ESubtitleModes.h"

#include "SaveGame_System.h"
#include "SaveGame_User.h"


template <typename T>
T* UConstFiles::GetGenericSaveData(FString slotName)
{
    UObject* savegameSystem = UGameplayStatics::LoadGameFromSlot(slotName,0);
    if(!savegameSystem){savegameSystem = T::StaticClass()->GetDefaultObject(true);}

    return (Cast<T>(savegameSystem));    
}

template <typename T>
bool UConstFiles::SaveGenericSaveData(T * saveData, FString slotName)
{
    if(!saveData){ UE_LOG(LogTemp, Error, TEXT("Attempt to Save a Null SaveData") ); return false;}

    return UGameplayStatics::SaveGameToSlot(saveData,slotName,0);

}

USaveGame_System* UConstFiles::GetSystemData()
{
    return GetGenericSaveData<USaveGame_System>(GetConstSystemData());
}


FSubtitlesSettings UConstFiles::GetSubtitleSettings(uint8 UserSlot)
{
    return GetUserData(UserSlot)->SubtitlesSettings;
}


bool UConstFiles::SaveSubtitleSettings(uint8 UserSlot, FSubtitlesSettings settings)
{
    auto userdata = GetUserData(UserSlot);
    userdata->SubtitlesSettings = settings;
    return SaveUserData(userdata);
}

USaveGame_User* UConstFiles::GetUserData(uint8 slot)
{
    return GetGenericSaveData<USaveGame_User>(GetConstCurrentUserData(slot));
}

bool UConstFiles::SaveSystemData(USaveGame_System * savedata)
{
    return SaveGenericSaveData<USaveGame_System>(savedata, GetConstSystemData());
}

FMovementSettings UConstFiles::GetMovementSettings(uint8 UserSlot)
{
    return GetUserData(UserSlot)->MovementSettings;
}

FCustomAudioSettings UConstFiles::GetAudioSettings()
{
    return GetSystemData()->AudioSettings;
}

bool UConstFiles::SaveMovementSettings(uint8 UserSlot, FMovementSettings settings)
{
    auto userdata = GetUserData(UserSlot);
    userdata->MovementSettings = settings;
    return SaveUserData(userdata);
}
	
	
bool UConstFiles::SaveAudioSettings(FCustomAudioSettings settings)
{
	auto userdata = GetSystemData();
    userdata->AudioSettings = settings;
    return SaveSystemData(userdata);
}


bool UConstFiles::SaveUserData(USaveGame_User *savedata)
{
    return SaveGenericSaveData<USaveGame_User>(savedata, GetConstCurrentUserData(savedata->SlotId));
}
