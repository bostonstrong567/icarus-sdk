// /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// size 0x24, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapSharedWorld/Public/MagicLeapSharedWorldTypes.h

USTRUCT()
struct FMagicLeapSharedWorldPinData
{
    UPROPERTY(BlueprintReadWrite) FGuid PinID;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) FMagicLeapARPinState PinState;  // 0x0010, size 0x14
};
