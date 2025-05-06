#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECreditDispType.h"
#include "SequenceCreditTableStruct.generated.h"

USTRUCT(BlueprintType)
struct FSequenceCreditTableStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECreditDispType DispType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DispText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DispText2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TNLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool KTLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UELogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntervalFrame;
    
    NINJAGAIDEN2BLACK_API FSequenceCreditTableStruct();
};

