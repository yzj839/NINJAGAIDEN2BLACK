#include "CommonWorkBase.h"

ACommonWorkBase::ACommonWorkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonWorkType = ECommonWorkType::CODE_CHR;
    this->Type = 0;
    this->Index = 0;
    this->SubIndex = 0;
}




UDataTable* ACommonWorkBase::GetConvertBoneIndexTable() const {
    return NULL;
}


