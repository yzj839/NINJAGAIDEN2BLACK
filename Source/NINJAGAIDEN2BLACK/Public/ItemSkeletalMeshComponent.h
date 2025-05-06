#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "ItemSkeletalMeshComponent.generated.h"

// TODO: Reimplement Masked Material Manager Stuff

// class UMaskedMaterialLoadManager;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJAGAIDEN2BLACK_API UItemSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()

private:

    /**
    UPROPERTY()
    UMaskedMaterialLoadManager* MaskedMaterialLoadManager;
    */
    
public:

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Opacity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float EmissiveScale;
    
    UPROPERTY(VisibleAnywhere)
    FVector4 WtBloodParam;
    
    UPROPERTY(VisibleAnywhere)
    float WtBloodMaskHueShift;
    
    UPROPERTY(VisibleAnywhere)
    float WtBloodDark;
    
    UPROPERTY(VisibleAnywhere)
    float WtWetRate;
    
    UPROPERTY(VisibleAnywhere)
    float WtInWaterRate;
    
    UPROPERTY(VisibleAnywhere)
    float WtBurntRate;
    
    UItemSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

