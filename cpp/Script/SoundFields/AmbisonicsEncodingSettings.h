// /Script/SoundFields.AmbisonicsEncodingSettings
// Derives from: USoundfieldEncodingSettingsBase > UObject
// size 0x30, declared in Engine/Plugins/Runtime/SoundFields/Source/SoundFields/Public/SoundFields.h

UCLASS(EditInlineNew, Config=Engine)
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{
public:
    UPROPERTY(EditAnywhere) int32 AmbisonicsOrder;  // 0x0028, size 0x4
};
