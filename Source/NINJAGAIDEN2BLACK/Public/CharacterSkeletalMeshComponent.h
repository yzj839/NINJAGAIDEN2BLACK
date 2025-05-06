#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "CharacterSkeletalMeshComponent.generated.h"

class UMaskedMaterialLoadManager;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJAGAIDEN2BLACK_API UCharacterSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMaskedMaterialLoadManager* MaskedMaterialLoadManager;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Opacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEnableChangeEmissive;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float EmissiveScale;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> ClothingAssetNameArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsBrokenParts;
    
    UPROPERTY(VisibleAnywhere)
    FVector4 WtBloodParam;
    
    UPROPERTY(VisibleAnywhere)
    FVector4 WtBloodParamEx;
    
    UPROPERTY(VisibleAnywhere)
    float WtBloodMaskHueShift;
    
    UPROPERTY(VisibleAnywhere)
    float WtBloodMaskHueShiftEx;
    
    UPROPERTY(VisibleAnywhere)
    float WtBloodDark;
    
    UPROPERTY(VisibleAnywhere)
    float WtWetRate;
    
    UPROPERTY(VisibleAnywhere)
    float WtInWaterRate;
    
    UPROPERTY(VisibleAnywhere)
    float WtBurntRate;
    
    UCharacterSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

