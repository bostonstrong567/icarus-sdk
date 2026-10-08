// /Script/Engine.MaterialExpressionSmoothStep
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSmoothStep.h

UCLASS(MinimalAPI)
class UMaterialExpressionSmoothStep : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Min;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Max;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Value;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) float ConstMin;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float ConstMax;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float ConstValue;  // 0x0084, size 0x4
};
