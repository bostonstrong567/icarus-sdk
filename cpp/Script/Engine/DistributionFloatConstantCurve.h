// /Script/Engine.DistributionFloatConstantCurve
// Derives from: UDistributionFloat > UDistribution > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatConstantCurve.h

UCLASS(EditInlineNew)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
    UPROPERTY(EditAnywhere) FInterpCurveFloat ConstantCurve;  // 0x0038, size 0x18
};
