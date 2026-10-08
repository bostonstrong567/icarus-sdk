// /Script/Engine.EndpointSubmix
// Derives from: USoundSubmixBase > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h

UCLASS(EditInlineNew, Config=Engine)
class UEndpointSubmix : public USoundSubmixBase
{
public:
    UPROPERTY(EditAnywhere) FName EndpointType;  // 0x0038, size 0x8
    UPROPERTY() TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) UAudioEndpointSettingsBase* EndpointSettings;  // 0x0048, size 0x8
};
