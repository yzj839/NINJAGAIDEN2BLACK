#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "CommonWorkBase.h"
#include "EItemType.h"
#include "ItemObjectBase.generated.h"

class ACharacterBase;
class UDataTable;

UCLASS()
class NINJAGAIDEN2BLACK_API AItemObjectBase : public ACommonWorkBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EItemType item_type_;
    
    UPROPERTY(VisibleAnywhere)
    uint8 owner_cmn_index_;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ACharacterBase* OwnerCharacterBase;
    
    UPROPERTY(EditAnywhere)
    bool bIsTickAfterOwnerCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsDispFromFirstTick;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UDataTable* ConvertBoneIndexTable;
    
    UPROPERTY(EditAnywhere)
    bool bEmissiveZeroForCorpse;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool is_corpse_;
    
    UPROPERTY(VisibleAnywhere)
    float corpse_counter_;
    
    UPROPERTY(EditAnywhere)
    bool ApplyWeatheringBlood;
    
    UPROPERTY(EditAnywhere)
    bool bEditBloodRate;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBloodParam;
    
    UPROPERTY(EditAnywhere)
    FVector4 WtBloodParam;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBloodMaskHueShift;
    
    UPROPERTY(EditAnywhere)
    float WtBloodMaskHueShift;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBloodDark;
    
    UPROPERTY(EditAnywhere)
    float WtBloodDark;
    
    UPROPERTY(EditAnywhere)
    float BloodRate;
    
    UPROPERTY(EditAnywhere)
    bool ApplyWeatheringOther;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtWetRate;
    
    UPROPERTY(EditAnywhere)
    float WtWetRate;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtInWaterRate;
    
    UPROPERTY(EditAnywhere)
    float WtInWaterRate;
    
    UPROPERTY(EditAnywhere)
    bool bEditWtBurntRate;
    
    UPROPERTY(EditAnywhere)
    float WtBurntRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHiddenByRTM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHiddenBySigma2RenderFlag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentActCode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsOverrideNMLBone;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RefNMLBoneId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScaleOverrideNMLBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, int32> RelativeOwnerSigma2BoneMap;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 TickCountUntilResetCloth;
    
    AItemObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsNMLBoneActive() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRelativeOwnerSigma2Bone(int32 SelfSigma2Bone) const;
    
    UFUNCTION(BlueprintPure)
    ACharacterBase* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOwnerBoneTransform(FName BoneName, FTransform& Transform, TEnumAsByte<ERelativeTransformSpace> Space) const;
    
    UFUNCTION(BlueprintPure)
    static FName GetCorpseSnapshotName();
    
    UFUNCTION(BlueprintPure)
    bool CheckActCode(const TArray<int32>& ActCode) const;
    
};

