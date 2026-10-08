// /Script/Engine.DistributionFloat
// Derives from: UDistribution > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h

UCLASS(Abstract, EditInlineNew)
class UDistributionFloat : public UDistribution
{
public:
    UPROPERTY(EditAnywhere) uint8 bCanBeBaked : 1;  // 0x0030, mask 0x01
    UPROPERTY() uint8 bBakedDataSuccesfully : 1;  // 0x0030, mask 0x04

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bIsDirty;  // 0x0030

    // Virtual functions that start here:
    //   CanBeBaked, GetFloatValue, GetLockFlag, GetOperation, GetValue, InitializeRawEntry
};
