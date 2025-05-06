#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_CopyBoneFromSigma2.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct APPANIMNODE_API FAnimNode_CopyBoneFromSigma2 : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SubIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CommonWorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* ConvertBoneIndexTable;
    
    FAnimNode_CopyBoneFromSigma2();
};

