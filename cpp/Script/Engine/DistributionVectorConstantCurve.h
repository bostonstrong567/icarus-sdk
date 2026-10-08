// /Script/Engine.DistributionVectorConstantCurve
// Derives from: UDistributionVector > UDistribution > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorConstantCurve.h

UCLASS(EditInlineNew)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
    UPROPERTY(EditAnywhere) FInterpCurveVector ConstantCurve;  // 0x0038, size 0x18
    UPROPERTY() uint8 bLockAxes : 1;  // 0x0050, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;  // 0x0054, size 0x1
};
