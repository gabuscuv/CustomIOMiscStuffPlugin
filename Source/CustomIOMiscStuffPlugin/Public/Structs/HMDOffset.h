#pragma once

#include "CoreMinimal.h"
#include "HMDOffset.generated.h"
USTRUCT(BlueprintType)
struct FHMDOffset
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    bool HMDEnabled = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    FVector HMDOffset = FVector();
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    FRotator HMDRotation = FRotator();
};