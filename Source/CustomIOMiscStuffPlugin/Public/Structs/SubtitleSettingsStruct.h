#pragma once

enum class ESubtitleModes : uint8;

#include "CoreMinimal.h"
#include "SubtitleSettingsStruct.generated.h"

USTRUCT(BlueprintType)
struct FSubtitlesSettings
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    ESubtitleModes SubtitleMode;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SubtitleSize;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SubtitleWidth;

};