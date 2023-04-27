#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ETurningMode : uint8
{
    Off UMETA(DisplayName="Off"),
    SnapTurn UMETA(DisplayName="Snap Turn"),
    ContinuousTurn UMETA(DisplayName="Continuous Turn"),
};