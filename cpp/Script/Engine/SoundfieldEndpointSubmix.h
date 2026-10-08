// /Script/Engine.SoundfieldEndpointSubmix
// Derives from: USoundSubmixBase > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h

UCLASS(EditInlineNew, Config=Engine)
class USoundfieldEndpointSubmix : public USoundSubmixBase
{
public:
    UPROPERTY(EditAnywhere) FName SoundfieldEndpointType;  // 0x0038, size 0x8
    UPROPERTY() TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) USoundfieldEndpointSettingsBase* EndpointSettings;  // 0x0048, size 0x8
    UPROPERTY() TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) USoundfieldEncodingSettingsBase* EncodingSettings;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) TArray<USoundfieldEffectBase*> SoundfieldEffectChain;  // 0x0060, size 0x10
};
