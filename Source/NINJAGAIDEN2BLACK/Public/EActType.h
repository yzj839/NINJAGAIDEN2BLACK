#pragma once
#include "CoreMinimal.h"
#include "EActType.generated.h"

UENUM(BlueprintType)
enum class EActType : uint8 {
    FOOT,
    AIR,
    HANG,
    DOWN,
    SWIM,
    DIVE,
    NONE,
};

