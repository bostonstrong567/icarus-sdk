// /Script/Engine.MaterialExpressionScalarParameter
// Derives from: UMaterialExpressionParameter > UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionScalarParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
    UPROPERTY(EditAnywhere) float DefaultValue;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) bool bUseCustomPrimitiveData;  // 0x005C, size 0x1
    UPROPERTY(EditAnywhere) uint8 PrimitiveDataIndex;  // 0x005D, size 0x1

    // Virtual functions that start here:
    //   IsUsedAsAtlasPosition
};
