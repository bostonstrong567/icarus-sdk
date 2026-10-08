// /Script/Engine.DistributionVectorUniformCurve
// Derives from: UDistributionVector > UDistribution > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorUniformCurve.h

UCLASS(EditInlineNew)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
    UPROPERTY(EditAnywhere) FInterpCurveTwoVectors ConstantCurve;  // 0x0038, size 0x18
    UPROPERTY() uint8 bLockAxes1 : 1;  // 0x0050, mask 0x01
    UPROPERTY() uint8 bLockAxes2 : 1;  // 0x0050, mask 0x02
    UPROPERTY(EditAnywhere) TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags;  // 0x0056, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseExtremes : 1;  // 0x005C, mask 0x01

    // Virtual functions that start here:
    //   GetMaxValue, GetMinMaxValue, GetMinValue, LockAndMirror
};
