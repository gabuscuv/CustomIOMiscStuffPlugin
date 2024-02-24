#pragma once

#include "CoreMinimal.h"
#include "HMDOffset.generated.h"
USTRUCT(BlueprintType)
struct FHMDOffset
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    bool HMDEnabled;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    FVector HMDOffset;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    FRotator HMDRotation;
};