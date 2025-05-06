#pragma once
#include "CoreMinimal.h"
#include "CommonWorkBase.h"
#include "ECharacterType.h"
// #include "BloodRateInfo.h"
// #include "BrokenPartsMeshSet.h"
#include "CharacterBase.generated.h"

// TODO: Fix Smash related and physics related actor parts and after images.

UCLASS()
class NINJAGAIDEN2BLACK_API ACharacterBase : public ACommonWorkBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* MainMeshAssetForInit;
    
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* OldMeshAssetForInit;

    /**
    UPROPERTY(EditDefaultsOnly)
    UCharacterPhysicsData* PhysicsDataForInit;
    */
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECharacterType character_type_;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsTypeBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsTypePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsNeedResetClothTeleportation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector PrevHipsPos;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UDataTable* ConvertBoneIndexTable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UObject* IKRetargeter;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bCanApplyRTRig;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentActCode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EActType CurrentActType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EActStatus CurrentActStatus;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentActGroup;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentRawColType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool is_enable_broken_parts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool is_enable_physics;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 BrokenPartsTypes;
    /**
    
    UPROPERTY(VisibleAnywhere)
    TMap<EBrokenPartsType, FBrokenPartsMeshSet> BrokenPartsMeshSetArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EBrokenPartsType, int32> BrokenPartsFrame;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UCharacterSkeletalMeshComponent*> BrokenPartsMeshes;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASmashPartsActor> SmashPartsActorBP;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ASmashPartsActor* SmashPartsActorInstance; 
    
    UPROPERTY(EditDefaultsOnly)
    EBrokenPartsType DeadlySmashPartsType;

    */
    
    UPROPERTY(EditAnywhere)
    bool create_ragdoll;
    
    UPROPERTY(EditAnywhere)
    bool bEmissiveZeroForCorpse;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool is_corpse;
    
    UPROPERTY(VisibleAnywhere)
    float corpse_counter;
    
    UPROPERTY(VisibleAnywhere)
    float fadeout_brokenparts_counter;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsCaptureLastPose;
    
    UPROPERTY(EditAnywhere)
    bool ApplyWeatheringBlood;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBloodParam;
    
    UPROPERTY(EditAnywhere)
    FVector4 WtBloodParam;
    
    UPROPERTY(EditAnywhere)
    FVector4 WtBloodParamEx;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBloodMaskHueShift;
    
    UPROPERTY(EditAnywhere)
    float WtBloodMaskHueShift;
    
    UPROPERTY(EditAnywhere)
    float WtBloodMaskHueShiftEx;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBloodDark;
    
    UPROPERTY(EditAnywhere)
    float WtBloodDark;
    /**
    
    UPROPERTY(EditAnywhere)
    TArray<FBloodRateInfo> BloodRateList;

    */
    
    UPROPERTY(EditAnywhere)
    bool ApplyWeatheringOther;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtWetRate;
    
    UPROPERTY(EditAnywhere)
    float WtWetRate;
    
    UPROPERTY(EditAnywhere)
    bool bEditWetRate;
    
    UPROPERTY(EditAnywhere)
    float WetRate;
    
    UPROPERTY(VisibleAnywhere)
    float TimeAfterAddedLastWet;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtInWaterRate;
    
    UPROPERTY(EditAnywhere)
    float WtInWaterRate;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBurntRate;
    
    UPROPERTY(EditAnywhere)
    float WtBurntRate;
    
    UPROPERTY(VisibleAnywhere)
    float BurntElapsedTime;
    
    UPROPERTY(VisibleAnywhere)
    bool bHaveAllMeshesLoadCompletedMasks;
    
    UPROPERTY(EditAnywhere)
    bool is_disp_hp;
    
    UPROPERTY(EditAnywhere)
    bool is_disp_debug_skeleton;
    
    UPROPERTY(EditAnywhere)
    int32 target_sigma2_bone_id;
    
    UPROPERTY(EditAnywhere)
    FColor skeleton_color;
    
    UPROPERTY(EditAnywhere)
    bool is_disp_physics_body_awake;
    
    UPROPERTY(EditAnywhere)
    bool bEditOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Opacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PartsOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* after_image_mesh_;
    /**
    
    UPROPERTY(EditDefaultsOnly)
    UAfterImageData* AfterImageData;

    */
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isStepDecalON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHiddenByRTM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHiddenBySigma2RenderFlag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 TickCountUntilResetCloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEquipItemSub;
    
    ACharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestAddBloodRate(float AddValue, int32 BloodType);
    
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeRawColType(int32 CurrentColType, int32 PrevColType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeActGroup(int32 CurrentGroup, int32 PrevGroup);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerCharacter(uint8 PlayerId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHpZero() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipAndUsingWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    void GetSigma2BoneTransform(FTransform& Output, int32 Sigma2BoneId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRawColType() const;
    
    UFUNCTION(BlueprintPure)
    static FName GetCorpseSnapshotName();
    
    UFUNCTION(BlueprintPure)
    static FName GetBrokenPoseSnapshotName();
    
    UFUNCTION(BlueprintPure)
    void GetBoneTransformBySigma2BoneId(FTransform& Output, int32 Sigma2BoneId, TEnumAsByte<ERelativeTransformSpace> Space, EBrokenPartsType PartsType) const;
    
    UFUNCTION(BlueprintPure)
    void GetBoneTransform(FTransform& Output, FName BoneName, TEnumAsByte<ERelativeTransformSpace> Space, EBrokenPartsType PartsType) const;
    
    UFUNCTION(BlueprintPure)
    bool CheckSameActCode(int32 SACCode, int32 ActCode) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckActGroupAndResetCloth(USkeletalMeshComponent* SkeletalMesh, int32 CurrentGroup, int32 PrevGroup);
    
};

