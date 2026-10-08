// /Script/Engine.SoundfieldSubmix
// Derives from: USoundSubmixWithParentBase > USoundSubmixBase > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h

UCLASS(EditInlineNew, Config=Engine)
class USoundfieldSubmix : public USoundSubmixWithParentBase
{
public:
    UPROPERTY(EditAnywhere) FName SoundfieldEncodingFormat;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) USoundfieldEncodingSettingsBase* EncodingSettings;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TArray<USoundfieldEffectBase*> SoundfieldEffectChain;  // 0x0050, size 0x10
    UPROPERTY() TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;  // 0x0060, size 0x8
};
