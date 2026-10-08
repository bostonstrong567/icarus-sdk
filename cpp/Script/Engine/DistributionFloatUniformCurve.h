// /Script/Engine.DistributionFloatUniformCurve
// Derives from: UDistributionFloat > UDistribution > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatUniformCurve.h

UCLASS(EditInlineNew)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
    UPROPERTY(EditAnywhere) FInterpCurveVector2D ConstantCurve;  // 0x0038, size 0x18

    // Virtual functions that start here:
    //   GetMinMaxValue
};
