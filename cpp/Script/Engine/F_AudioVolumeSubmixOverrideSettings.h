// /Script/Engine.AudioVolumeSubmixOverrideSettings
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioVolume.h

USTRUCT()
struct FAudioVolumeSubmixOverrideSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundSubmix* Submix;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USoundEffectSubmixPreset*> SubmixEffectChain;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CrossfadeTime;  // 0x0018, size 0x4
};
