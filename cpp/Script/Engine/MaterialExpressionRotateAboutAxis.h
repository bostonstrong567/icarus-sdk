// /Script/Engine.MaterialExpressionRotateAboutAxis
// Derives from: UMaterialExpression > UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRotateAboutAxis.h

UCLASS(MinimalAPI)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput NormalizedRotationAxis;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput RotationAngle;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput PivotPoint;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput Position;  // 0x007C, size 0x14
    UPROPERTY(EditAnywhere) float Period;  // 0x0090, size 0x4
};
