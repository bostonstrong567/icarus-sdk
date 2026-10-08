// /Script/Engine.MaterialExpressionChannelMaskParameter
// Derives from: UMaterialExpressionVectorParameter > UMaterialExpressionParameter > UMaterialExpression > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionChannelMaskParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EChannelMaskParameterColor> MaskChannel;  // 0x0070, size 0x1
};
