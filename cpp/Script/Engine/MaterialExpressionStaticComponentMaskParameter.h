// /Script/Engine.MaterialExpressionStaticComponentMaskParameter
// Derives from: UMaterialExpressionParameter > UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
    UPROPERTY(EditAnywhere) uint8 DefaultR : 1;  // 0x0058, mask 0x01
    UPROPERTY(EditAnywhere) uint8 DefaultG : 1;  // 0x0058, mask 0x02
    UPROPERTY(EditAnywhere) uint8 DefaultB : 1;  // 0x0058, mask 0x04
    UPROPERTY(EditAnywhere) uint8 DefaultA : 1;  // 0x0058, mask 0x08
};
