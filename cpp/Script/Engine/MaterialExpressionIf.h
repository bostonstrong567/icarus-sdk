// /Script/Engine.MaterialExpressionIf
// Derives from: UMaterialExpression > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionIf.h

UCLASS(MinimalAPI)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput AGreaterThanB;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput AEqualsB;  // 0x007C, size 0x14
    UPROPERTY() FExpressionInput ALessThanB;  // 0x0090, size 0x14
    UPROPERTY(EditAnywhere) float EqualsThreshold;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere) float ConstB;  // 0x00A8, size 0x4
    UPROPERTY(Deprecated) float ConstAEqualsB;  // 0x00AC, size 0x4
};
