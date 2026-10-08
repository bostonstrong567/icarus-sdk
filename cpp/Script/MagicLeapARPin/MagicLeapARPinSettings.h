// /Script/MagicLeapARPin.MagicLeapARPinSettings
// Derives from: UObject
// size 0x40, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/MagicLeapARPinSettings.h

UCLASS(Config=Engine)
class UMagicLeapARPinSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) float UpdateCheckFrequency;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config) FMagicLeapARPinState OnUpdatedEventTriggerDelta;  // 0x002C, size 0x14
};
