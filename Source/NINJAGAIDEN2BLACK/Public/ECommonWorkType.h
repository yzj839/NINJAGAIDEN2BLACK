#pragma once
#include "CoreMinimal.h"
#include "ECommonWorkType.generated.h"

UENUM(BlueprintType)
enum class ECommonWorkType : uint8 {
    CODE_CHR,
    CODE_OBJ,
    CODE_ITM,
    CODE_INVALID,
};

