#pragma once
#include "CoreMinimal.h"
#include "ECmnObjLoadRequestType.generated.h"

UENUM(BlueprintType)
enum class ECmnObjLoadRequestType : uint8 {
    CMN_OBJ_LOAD_REQ_STAY,
    CMN_OBJ_LOAD_REQ_STG,
    CMN_OBJ_LOAD_REQ_RTM,
    CMN_OBJ_LOAD_REQ_BANK,
    CMN_OBJ_LOAD_REQ_ALONE,
    CMN_OBJ_LOAD_REQ_RYU,
};

