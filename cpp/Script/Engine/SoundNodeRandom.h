// /Script/Engine.SoundNodeRandom
// Derives from: USoundNode > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeRandom.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeRandom : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) TArray<float> Weights;  // 0x0048, size 0x10
    UPROPERTY(Transient) TArray<bool> HasBeenUsed;  // 0x0058, size 0x10
    UPROPERTY(Transient) int32 NumRandomUsed;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) int32 PreselectAtLevelLoad;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bShouldExcludeFromBranchCulling : 1;  // 0x0070, mask 0x01
    UPROPERTY() uint8 bSoundCueExcludedFromBranchCulling : 1;  // 0x0070, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bRandomizeWithoutReplacement : 1;  // 0x0070, mask 0x04
};
