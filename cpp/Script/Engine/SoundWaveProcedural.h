// /Script/Engine.SoundWaveProcedural
// Derives from: USoundWave > USoundBase > UObject
// size 0x3C0, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWaveProcedural.h

UCLASS(EditInlineNew)
class USoundWaveProcedural : public USoundWave
{
public:
    TDelegate<void __cdecl(USoundWaveProcedural *,int),FDefaultDelegateUserPolicy> OnSoundWaveProceduralUnderflow;  // 0x03A8, not reflected
    int32 SampleByteSize;  // 0x03B8, not reflected
protected:
    int32 NumBufferUnderrunSamples;  // 0x039C, not reflected
    int32 NumSamplesToGeneratePerCallback;  // 0x03A0, not reflected
private:
    TQueue<TArray<unsigned char,TSizedDefaultAllocator<32> >,1> QueuedAudio;  // 0x0370, not reflected
    FThreadSafeCounter AvailableByteCount;  // 0x0380, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > AudioBuffer;  // 0x0388, not reflected
    FThreadSafeBool bReset;  // 0x0398, not reflected

    // Virtual functions that start here:
    //   OnGeneratePCMAudio
};
