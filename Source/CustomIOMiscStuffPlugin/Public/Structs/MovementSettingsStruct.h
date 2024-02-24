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
    ETurningMode TurningMode;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SmoothTurnSpeed = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float TurningSpeed = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    bool leftMode = false;
};