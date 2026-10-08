// /Script/Engine.MaterialExpressionSceneDepthWithoutWater
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h

UCLASS()
class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialSceneAttributeInputMode> InputMode;  // 0x0040, size 0x1
    UPROPERTY() FExpressionInput Input;  // 0x0044, size 0x14
    UPROPERTY(EditAnywhere) FVector2D ConstInput;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) float FallbackDepth;  // 0x0060, size 0x4
};
