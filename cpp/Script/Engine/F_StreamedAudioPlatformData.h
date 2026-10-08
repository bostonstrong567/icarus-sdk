// /Script/Engine.StreamedAudioPlatformData
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

USTRUCT()
struct FStreamedAudioPlatformData
{

    // Not reflected:
    int32 NumChunks;  // 0x0000
    FName AudioFormat;  // 0x0004
    TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32> > Chunks;  // 0x0010
};
