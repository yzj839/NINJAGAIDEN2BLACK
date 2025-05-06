#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_EvtBlendForPartsMesh.generated.h"

USTRUCT(BlueprintType)
struct APPANIMNODE_API FAnimNode_EvtBlendForPartsMesh : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BoneName;
    
    FAnimNode_EvtBlendForPartsMesh();
};

