// /Script/Engine.MaterialExpressionSphereMask
// Derives from: UMaterialExpression > UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSphereMask.h

UCLASS(MinimalAPI)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Radius;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput Hardness;  // 0x007C, size 0x14
    UPROPERTY(EditAnywhere) float AttenuationRadius;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) float HardnessPercent;  // 0x0094, size 0x4
};
