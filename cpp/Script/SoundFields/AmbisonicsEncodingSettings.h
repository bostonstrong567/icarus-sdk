// /Script/SoundFields.AmbisonicsEncodingSettings
// Derives from: USoundfieldEncodingSettingsBase > UObject
// size 0x30, declared in Engine/Plugins/Runtime/SoundFields/Source/SoundFields/Public/SoundFields.h

UCLASS(EditInlineNew, Config=Engine)
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) int32 AmbisonicsOrder;  // 0x0028, size 0x4
};
