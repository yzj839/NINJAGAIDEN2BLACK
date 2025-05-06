#pragma once
#include "CoreMinimal.h"
#include "ERTRigType.generated.h"

UENUM(BlueprintType)
enum class ERTRigType : uint8 {
    NONE,
    BASE_MODEL,
    NECK_SPLINE,
    CHAINSAW,
    NUM,
    VALID_NUM = CHAINSAW,
};

