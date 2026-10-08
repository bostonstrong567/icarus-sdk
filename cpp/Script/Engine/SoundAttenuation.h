// /Script/Engine.SoundAttenuation
// Derives from: UObject
// size 0x3C8, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundAttenuation : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoundAttenuationSettings Attenuation;  // 0x0028, size 0x3A0
};
