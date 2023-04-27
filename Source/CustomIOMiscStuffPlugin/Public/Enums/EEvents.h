// Gabriel Bustillo del Cuvillo


// Probably this should be self-generated
#pragma once

#include "CoreMinimal.h"
#include "EEvents.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EEvents : uint8
{
  None        UMETA(DisplayName = "None"),
  Any         UMETA(DisplayName = "Any"),
  Event1      UMETA(DisplayName = "Event01", ToolTip="1. OnlyEvent/Beginning"),
  Event2      UMETA(DisplayName = "Event02", ToolTip="2. Disable Teleport"),
  Event3      UMETA(DisplayName = "Event03", ToolTip="3. Stop Car"),
  Event4      UMETA(DisplayName = "Event04", ToolTip="4. Near By House"),
  Event5      UMETA(DisplayName = "Event05", ToolTip="5. On House"),
  Event6      UMETA(DisplayName = "Event06", ToolTip="6. Enable DomoticSystem"),
  Event7      UMETA(DisplayName = "Event07", ToolTip="7. Unlock Toilet"),
  Event8      UMETA(DisplayName = "Event08", ToolTip="8. Activate Hidden Stairs"),
  Event9      UMETA(DisplayName = "Event09", ToolTip="9. ??? Profit"),
  Event10      UMETA(DisplayName = "Event10", ToolTip="9. ??? Profit"),
  Event11      UMETA(DisplayName = "Event11", ToolTip="9. ??? Profit"),
  Event12      UMETA(DisplayName = "Event12", ToolTip="9. ??? Profit"),
};