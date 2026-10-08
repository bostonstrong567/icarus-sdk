// /Script/Engine.MaterialExpressionStaticBoolParameter
// Derives from: UMaterialExpressionParameter > UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticBoolParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
    UPROPERTY(EditAnywhere) uint8 DefaultValue : 1;  // 0x0058, mask 0x01
};
