#pragma once

enum class ESubtitleModes : uint8;

#include "CoreMinimal.h"
#include "SubtitleSettingsStruct.generated.h"

USTRUCT(BlueprintType)
struct FSubtitlesSettings
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    ESubtitleModes SubtitleMode = (ESubtitleModes)0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SubtitleSize = 24.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MyCategory)
    float SubtitleWidth = 24.0f;

};