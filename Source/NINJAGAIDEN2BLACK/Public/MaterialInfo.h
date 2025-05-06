#pragma once
#include "CoreMinimal.h"
#include "MaterialInfo.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* Original;
    
    UPROPERTY()
    UMaterialInterface* Masked;
    
    UPROPERTY()
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY()
    bool InstanceFlag;
    
    NINJAGAIDEN2BLACK_API FMaterialInfo();
};

