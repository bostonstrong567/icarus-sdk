// /Script/Engine.MaterialExpressionSceneDepth
// Derives from: UMaterialExpression > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSceneDepth.h

UCLASS()
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialSceneAttributeInputMode> InputMode;  // 0x0040, size 0x1
    UPROPERTY() FExpressionInput Input;  // 0x0044, size 0x14
    UPROPERTY(Deprecated) FExpressionInput Coordinates;  // 0x0058, size 0x14
    UPROPERTY(EditAnywhere) FVector2D ConstInput;  // 0x006C, size 0x8
};
