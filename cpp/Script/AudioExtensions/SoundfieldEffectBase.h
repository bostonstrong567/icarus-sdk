// /Script/AudioExtensions.SoundfieldEffectBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/AudioExtensions/Public/ISoundfieldFormat.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USoundfieldEffectBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) USoundfieldEffectSettingsBase* Settings;  // 0x0028, size 0x8

    // Virtual functions that start here:
    //   GetDefaultSettings, GetNewProcessor, GetSettingsClass, SupportsFormat
};
