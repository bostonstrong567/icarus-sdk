// /Script/Engine.StreamingLevelsToConsider
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

USTRUCT()
struct FStreamingLevelsToConsider
{
    UPROPERTY() TArray<ULevelStreaming*> StreamingLevels;  // 0x0000, size 0x10

    // Not reflected:
    TSortedMap<ULevelStreaming *,enum FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<ULevelStreaming const *> > LevelsToProcess;  // 0x0010
    int32 StreamingLevelsBeingConsidered;  // 0x0020
};
