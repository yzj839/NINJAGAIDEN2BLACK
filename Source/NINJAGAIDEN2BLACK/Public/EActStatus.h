#pragma once
#include "CoreMinimal.h"
#include "EActStatus.generated.h"

UENUM(BlueprintType)
enum class EActStatus : uint8 {
    MOVE,
    ATTACK,
    BEATEN,
    CONTE,
    BELONG,
    NONE,
};

