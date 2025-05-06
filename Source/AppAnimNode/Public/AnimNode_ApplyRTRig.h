#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
// #include "ERTRigType.h"
#include "AnimNode_ApplyRTRig.generated.h"

USTRUCT(BlueprintType)
struct APPANIMNODE_API FAnimNode_ApplyRTRig : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere)
    // ERTRigType RTRigType;
};

