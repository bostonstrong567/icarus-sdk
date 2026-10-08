// /Script/Engine.MaterialExpressionVectorParameter
// Derives from: UMaterialExpressionParameter > UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionVectorParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
    UPROPERTY(EditAnywhere) FLinearColor DefaultValue;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) bool bUseCustomPrimitiveData;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere) uint8 PrimitiveDataIndex;  // 0x0069, size 0x1

    // Virtual functions that start here:
    //   IsUsedAsChannelMask
};
