#include "ItemObjectBase.h"
#include "Components/SceneComponent.h"
#include "ECommonWorkType.h"

AItemObjectBase::AItemObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CommonWorkType = ECommonWorkType::CODE_ITM;
    this->item_type_ = EItemType::ITEM_SYURI;
    this->owner_cmn_index_ = 255;
    this->OwnerCharacterBase = NULL;
    this->bIsTickAfterOwnerCharacter = false;
    this->bIsDispFromFirstTick = false;
    this->ConvertBoneIndexTable = NULL;
    this->bEmissiveZeroForCorpse = true;
    this->is_corpse_ = false;
    this->corpse_counter_ = 0.00f;
    this->ApplyWeatheringBlood = false;
    this->bEditBloodRate = false;
    this->bEditWtBloodParam = false;
    this->bEditWtBloodMaskHueShift = false;
    this->WtBloodMaskHueShift = 0.00f;
    this->bEditWtBloodDark = false;
    this->WtBloodDark = 0.00f;
    this->BloodRate = 0.00f;
    this->ApplyWeatheringOther = true;
    this->bEditWtWetRate = false;
    this->WtWetRate = 0.00f;
    this->bEditWtInWaterRate = false;
    this->WtInWaterRate = 0.00f;
    this->bEditWtBurntRate = false;
    this->WtBurntRate = 0.00f;
    this->bIsHiddenByRTM = false;
    this->bIsHiddenBySigma2RenderFlag = false;
    this->CurrentActCode = -1;
    this->bIsOverrideNMLBone = false;
    this->RefNMLBoneId = -1;
    this->ScaleOverrideNMLBone = 1.00f;
    this->TickCountUntilResetCloth = 0;
}

bool AItemObjectBase::IsNMLBoneActive() const {
    return false;
}

int32 AItemObjectBase::GetRelativeOwnerSigma2Bone(int32 SelfSigma2Bone) const {
    return 0;
}

ACharacterBase* AItemObjectBase::GetOwnerCharacter() const {
    return NULL;
}

bool AItemObjectBase::GetOwnerBoneTransform(FName BoneName, FTransform& Transform, TEnumAsByte<ERelativeTransformSpace> Space) const {
    return false;
}

FName AItemObjectBase::GetCorpseSnapshotName() {
    return NAME_None;
}

bool AItemObjectBase::CheckActCode(const TArray<int32>& ActCode) const {
    return false;
}


