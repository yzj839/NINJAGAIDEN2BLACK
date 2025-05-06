#pragma once
#include "CoreMinimal.h"
#include "ECreditDispType.generated.h"

UENUM()
enum class ECreditDispType : uint32 {
    ONE_LINE,
    TWO_LINE,
    CAST,
    CATEGORY_L,
    CATEGORY_S,
    COPYRIGHT,
    LOGO,
};

