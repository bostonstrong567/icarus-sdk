// /Script/Engine.MaterialExpressionBumpOffset
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionBumpOffset.h

UCLASS(MinimalAPI)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Coordinate;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Height;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput HeightRatioInput;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) float HeightRatio;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float ReferencePlane;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) uint32 ConstCoordinate;  // 0x0084, size 0x4
};
