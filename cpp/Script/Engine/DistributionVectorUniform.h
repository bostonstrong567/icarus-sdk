// /Script/Engine.DistributionVectorUniform
// Derives from: UDistributionVector > UDistribution > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorUniform.h

UCLASS(EditInlineNew)
class UDistributionVectorUniform : public UDistributionVector
{
public:
    UPROPERTY(EditAnywhere) FVector Max;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere) FVector Min;  // 0x0044, size 0xC
    UPROPERTY() uint8 bLockAxes : 1;  // 0x0050, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags;  // 0x0055, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseExtremes : 1;  // 0x0058, mask 0x01

    // Virtual functions that start here:
    //   GetMaxValue, GetMinValue
};
