// /Script/Engine.MaterialExpressionSobol
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSobol.h

UCLASS(MinimalAPI)
class UMaterialExpressionSobol : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Cell;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Index;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Seed;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) uint32 ConstIndex;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) FVector2D ConstSeed;  // 0x0080, size 0x8
};
