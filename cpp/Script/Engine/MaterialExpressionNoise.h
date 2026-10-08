// /Script/Engine.MaterialExpressionNoise
// Derives from: UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionNoise.h

UCLASS(MinimalAPI)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Position;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput FilterWidth;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) float Scale;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) int32 Quality;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ENoiseFunction> NoiseFunction;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) uint8 bTurbulence : 1;  // 0x0074, mask 0x01
    UPROPERTY(EditAnywhere) int32 Levels;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere) float OutputMin;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float OutputMax;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float LevelScale;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) uint8 bTiling : 1;  // 0x0088, mask 0x01
    UPROPERTY(EditAnywhere) uint32 RepeatSize;  // 0x008C, size 0x4
};
