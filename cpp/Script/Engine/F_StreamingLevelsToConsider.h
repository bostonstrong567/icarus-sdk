// /Script/Engine.StreamingLevelsToConsider
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

USTRUCT()
struct FStreamingLevelsToConsider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<ULevelStreaming*> StreamingLevels;  // 0x0000, size 0x10
    TSortedMap<ULevelStreaming *,enum FStreamingLevelsToConsider::EProcessReason,TSizedDefaultAllocator<32>,TLess<ULevelStreaming const *> > LevelsToProcess;  // 0x0010, not reflected
    int32 StreamingLevelsBeingConsidered;  // 0x0020, not reflected
};
