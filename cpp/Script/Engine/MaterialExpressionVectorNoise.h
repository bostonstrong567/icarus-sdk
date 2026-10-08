// /Script/Engine.MaterialExpressionVectorNoise
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionVectorNoise.h

UCLASS(MinimalAPI)
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Position;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EVectorNoiseFunction> NoiseFunction;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere) int32 Quality;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) uint8 bTiling : 1;  // 0x005C, mask 0x01
    UPROPERTY(EditAnywhere) uint32 TileSize;  // 0x0060, size 0x4
};
