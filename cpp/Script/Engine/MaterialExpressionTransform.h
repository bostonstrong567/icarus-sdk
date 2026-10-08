// /Script/Engine.MaterialExpressionTransform
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTransform.h

UCLASS(MinimalAPI)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialVectorCoordTransform> TransformType;  // 0x0055, size 0x1
};
