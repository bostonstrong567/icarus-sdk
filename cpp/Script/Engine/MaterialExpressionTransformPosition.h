// /Script/Engine.MaterialExpressionTransformPosition
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTransformPosition.h

UCLASS(MinimalAPI)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialPositionTransformSource> TransformSourceType;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialPositionTransformSource> TransformType;  // 0x0055, size 0x1
};
