// /Script/Engine.SourceEffectChainEntry
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectSource.h

USTRUCT()
struct FSourceEffectChainEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundEffectSourcePreset* Preset;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBypass : 1;  // 0x0008, mask 0x01
};
