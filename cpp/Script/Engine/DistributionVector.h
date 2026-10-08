// /Script/Engine.DistributionVector
// Derives from: UDistribution > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVector.h

UCLASS(Abstract, EditInlineNew)
class UDistributionVector : public UDistribution
{
public:
    UPROPERTY(EditAnywhere) uint8 bCanBeBaked : 1;  // 0x0030, mask 0x01
    UPROPERTY() uint8 bIsDirty : 1;  // 0x0030, mask 0x02
    UPROPERTY() uint8 bBakedDataSuccesfully : 1;  // 0x0030, mask 0x04

    // Virtual functions that start here:
    //   CanBeBaked, GetLockFlag, GetOperation, GetRange, GetValue, GetVectorValue, InitializeRawEntry
};
