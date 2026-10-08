// /Script/Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// Derives from: UMaterialExpressionCustomOutput > UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h

UCLASS(MinimalAPI)
class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
    UPROPERTY() FExpressionInput ScatteringCoefficients;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput AbsorptionCoefficients;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput PhaseG;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput ColorScaleBehindWater;  // 0x007C, size 0x14
};
