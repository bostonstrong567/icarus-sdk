// /Script/AnimGraphRuntime.AnimNode_RandomPlayer
// size 0x78, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RandomPlayer.h

USTRUCT()
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRandomPlayerSequenceEntry> Entries;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShuffleMode;  // 0x0070, size 0x1
private:
    TArray<FRandomPlayerSequenceEntry *,TSizedDefaultAllocator<32> > ValidEntries;  // 0x0020, not reflected
    TArray<float,TSizedDefaultAllocator<32> > NormalizedPlayChances;  // 0x0030, not reflected
    TArray<FRandomAnimPlayData,TSizedDefaultAllocator<32> > PlayData;  // 0x0040, not reflected
    int32 CurrentPlayDataIndex;  // 0x0050, not reflected
    TArray<int,TSizedDefaultAllocator<32> > ShuffleList;  // 0x0058, not reflected
    FRandomStream RandomStream;  // 0x0068, not reflected
};
