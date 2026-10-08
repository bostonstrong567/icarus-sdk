// /Script/Engine.SoundNodeAttenuation
// Derives from: USoundNode > UObject
// size 0x3F8, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeAttenuation.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeAttenuation : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) USoundAttenuation* AttenuationSettings;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) FSoundAttenuationSettings AttenuationOverrides;  // 0x0050, size 0x3A0
    UPROPERTY(EditAnywhere) uint8 bOverrideAttenuation : 1;  // 0x03F0, mask 0x01
};
