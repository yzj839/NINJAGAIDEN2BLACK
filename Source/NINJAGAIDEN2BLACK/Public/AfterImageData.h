// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <NiagaraSystem.h>
#include "AfterImageData.generated.h"


/**
 * 
 */
UCLASS()
class NINJAGAIDEN2BLACK_API UAfterImageData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor RGBParam;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HueShift;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor RGBScale;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* NiagaraSystem;

    UAfterImageData();
};
