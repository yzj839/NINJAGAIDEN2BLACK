#pragma once
#include "CoreMinimal.h"
#include "EBrokenPartsType.generated.h"

UENUM(BlueprintType)
enum class EBrokenPartsType : uint8 {
    None,
    Neck,
    RightHand,
    LeftHand = 4,
    RightFoot = 8,
    LeftFoot = 16,
    Waist = 32,
};

