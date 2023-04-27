#pragma once

#include "CoreMinimal.h"
#include "SaveDataStruct.generated.h"
USTRUCT(BlueprintType)
struct FSaveData
{
    GENERATED_USTRUCT_BODY()

    public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    FName LastLoadedMap;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    FTransform LastLocactionTransform;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    TMap<uint8,bool> LastEventList;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    uint8 LoadingMode;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float Currency = 2400.0f;
};