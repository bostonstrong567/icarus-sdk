// /Script/Engine.PassiveSoundMixModifier
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundClass.h

USTRUCT()
struct FPassiveSoundMixModifier
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USoundMix* SoundMix;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinVolumeThreshold;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxVolumeThreshold;  // 0x000C, size 0x4
};
