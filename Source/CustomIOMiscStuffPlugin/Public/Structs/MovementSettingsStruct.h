#pragma once

#include "CoreMinimal.h"
#include "MovementSettingsStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovementSettings
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    uint8 MovementMode = 0; // MovementMode (VRE Enum)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SmoothTurnSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float TurningSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    bool leftMode;
};