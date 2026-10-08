// /Script/Engine.SoundEffectSourcePresetChain
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectSource.h

UCLASS()
class USoundEffectSourcePresetChain : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FSourceEffectChainEntry> Chain;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) uint8 bPlayEffectChainTails : 1;  // 0x0038, mask 0x01
};
