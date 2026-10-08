// /Script/Engine.MaterialExpressionDepthFade
// Derives from: UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDepthFade.h

UCLASS()
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput InOpacity;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput FadeDistance;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) float OpacityDefault;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float FadeDistanceDefault;  // 0x006C, size 0x4
};
