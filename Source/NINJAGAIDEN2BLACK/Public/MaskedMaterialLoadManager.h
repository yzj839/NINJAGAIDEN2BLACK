#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MaterialInfo.h"
#include "MaskedMaterialLoadManager.generated.h"

UCLASS()
class UMaskedMaterialLoadManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<int32, FMaterialInfo> MaskedMaterialInterfaceMap;
    
    UPROPERTY()
    TArray<FSoftObjectPath> MaskedMaterialAssetList;
    
    UPROPERTY()
    TArray<int32> LoadingMaterialId;
    
    UPROPERTY()
    bool IsChangedMaskedMaterial;
    
public:
    UMaskedMaterialLoadManager();

};

