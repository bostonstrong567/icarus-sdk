// /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
// size 0x50, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RandomPlayer.h

USTRUCT()
struct FRandomPlayerSequenceEntry
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* Sequence;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChanceToPlay;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinLoopCount;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxLoopCount;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinPlayRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayRate;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) FAlphaBlend BlendIn;  // 0x0020, size 0x30
};
