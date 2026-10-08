// /Script/Synthesis.SubmixEffectFlexiverbSettings
// size 0x10, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectFlexiverb.h

USTRUCT()
struct FSubmixEffectFlexiverbSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PreDelay;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DecayTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RoomDampening;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Complexity;  // 0x000C, size 0x4
};
