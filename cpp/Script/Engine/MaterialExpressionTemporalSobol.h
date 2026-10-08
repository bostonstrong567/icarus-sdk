// /Script/Engine.MaterialExpressionTemporalSobol
// Derives from: UMaterialExpression > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTemporalSobol.h

UCLASS(MinimalAPI)
class UMaterialExpressionTemporalSobol : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Index;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Seed;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) uint32 ConstIndex;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) FVector2D ConstSeed;  // 0x006C, size 0x8
};
