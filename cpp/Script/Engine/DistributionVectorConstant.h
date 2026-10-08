// /Script/Engine.DistributionVectorConstant
// Derives from: UDistributionVector > UDistribution > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorConstant.h

UCLASS(EditInlineNew)
class UDistributionVectorConstant : public UDistributionVector
{
public:
    UPROPERTY(EditAnywhere) FVector Constant;  // 0x0038, size 0xC
    UPROPERTY() uint8 bLockAxes : 1;  // 0x0044, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;  // 0x0048, size 0x1
};
