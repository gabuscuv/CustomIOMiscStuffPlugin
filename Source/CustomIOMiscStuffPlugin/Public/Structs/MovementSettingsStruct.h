#pragma once

#include "CoreMinimal.h"
#include "MovementSettingsStruct.generated.h"

enum class ETurningMode : uint8;


USTRUCT(BlueprintType)
struct FMovementSettings
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    uint8 MovementMode = 0; // MovementMode (VRE Enum)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    ETurningMode TurningMode = (ETurningMode)1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SmoothTurnSpeed = 45.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float TurningSpeed = 45.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    bool leftMode = false;
};