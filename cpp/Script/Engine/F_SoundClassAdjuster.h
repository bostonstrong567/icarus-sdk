// /Script/Engine.SoundClassAdjuster
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundMix.h

USTRUCT()
struct FSoundClassAdjuster
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USoundClass* SoundClassObject;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumeAdjuster;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PitchAdjuster;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LowPassFilterFrequency;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bApplyToChildren : 1;  // 0x0014, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VoiceCenterChannelVolumeAdjuster;  // 0x0018, size 0x4
};
