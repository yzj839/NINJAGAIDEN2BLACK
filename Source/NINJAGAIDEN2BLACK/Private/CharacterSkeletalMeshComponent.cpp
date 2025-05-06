#include "CharacterSkeletalMeshComponent.h"

UCharacterSkeletalMeshComponent::UCharacterSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaskedMaterialLoadManager = NULL;
    this->Opacity = 1.00f;
    this->bIsEnableChangeEmissive = true;
    this->EmissiveScale = 1.00f;
    this->bIsBrokenParts = false;
    this->WtBloodMaskHueShift = 0.00f;
    this->WtBloodMaskHueShiftEx = 0.00f;
    this->WtBloodDark = 0.00f;
    this->WtWetRate = 0.00f;
    this->WtInWaterRate = 0.00f;
    this->WtBurntRate = 0.00f;
}


