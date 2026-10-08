// /Script/Engine.MaterialExpressionInverseLinearInterpolate
// Derives from: UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionInverseLinearInterpolate.h

UCLASS(MinimalAPI)
class UMaterialExpressionInverseLinearInterpolate : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Value;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) float ConstA;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float ConstB;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float ConstValue;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) bool bClampResult;  // 0x0088, size 0x1
};
