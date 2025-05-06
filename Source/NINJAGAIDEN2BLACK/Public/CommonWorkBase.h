#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EActStatus.h"
#include "EActType.h"
#include "ECommonWorkType.h"
#include "CommonWorkBase.generated.h"

class UDataTable;

UCLASS()
class NINJAGAIDEN2BLACK_API ACommonWorkBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECommonWorkType CommonWorkType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Type;
    
    UPROPERTY(VisibleAnywhere)
    uint32 Index;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SubIndex;
    
    ACommonWorkBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeActType(EActType CurrentType, EActType PrevType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeActStatus(EActStatus CurrentStatus, EActStatus PrevStatus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeActCode(int32 CurrentCode, int32 PrevCode);
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetConvertBoneIndexTable() const;
    
};

