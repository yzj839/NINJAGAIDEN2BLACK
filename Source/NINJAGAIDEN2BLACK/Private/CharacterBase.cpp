#include "CharacterBase.h"

ACharacterBase::ACharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    character_type_ = ECharacterType::CHAR_RYU;
    bCanApplyRTRig = true;
    CurrentActCode = -1;
    CurrentActGroup = -1;
    CurrentRawColType = -1;
    ApplyWeatheringOther = true;
    target_sigma2_bone_id = -1;
    Opacity = 1.00f;
    PartsOpacity = 1.00f;
}

void ACharacterBase::RequestAddBloodRate(float AddValue, int32 BloodType) {
}

void ACharacterBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



void ACharacterBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ACharacterBase::IsPlayerCharacter(uint8 PlayerId) const {
    return false;
}

bool ACharacterBase::IsHpZero() const {
    return false;
}

bool ACharacterBase::IsEquipAndUsingWeapon() const {
    return false;
}

bool ACharacterBase::IsAnyPlayerCharacter() const {
    return false;
}

void ACharacterBase::GetSigma2BoneTransform(FTransform& Output, int32 Sigma2BoneId) const {
}

int32 ACharacterBase::GetRawColType() const {
    return 0;
}

FName ACharacterBase::GetCorpseSnapshotName() {
    return NAME_None;
}

FName ACharacterBase::GetBrokenPoseSnapshotName() {
    return NAME_None;
}

void ACharacterBase::GetBoneTransformBySigma2BoneId(FTransform& Output, int32 Sigma2BoneId, TEnumAsByte<ERelativeTransformSpace> Space, EBrokenPartsType PartsType) const {
}

void ACharacterBase::GetBoneTransform(FTransform& Output, FName BoneName, TEnumAsByte<ERelativeTransformSpace> Space, EBrokenPartsType PartsType) const {
}

bool ACharacterBase::CheckSameActCode(int32 SACCode, int32 ActCode) const {
    return false;
}

void ACharacterBase::CheckActGroupAndResetCloth(USkeletalMeshComponent* SkeletalMesh, int32 CurrentGroup, int32 PrevGroup) {
}


