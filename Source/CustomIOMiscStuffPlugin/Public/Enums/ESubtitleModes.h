#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ESubtitleModes : uint8
{
    Off UMETA(DisplayName="Off"),
    On UMETA(DisplayName="On"),
    ClosedCaptions UMETA(DisplayName="Closed Captions"),
};