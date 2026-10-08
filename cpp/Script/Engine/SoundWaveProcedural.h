// /Script/Engine.SoundWaveProcedural
// Derives from: USoundWave > USoundBase > UObject
// size 0x3C0, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWaveProcedural.h

UCLASS(EditInlineNew)
class USoundWaveProcedural : public USoundWave
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TQueue<TArray<unsigned char,TSizedDefaultAllocator<32> >,1> QueuedAudio;  // 0x0370, private
    FThreadSafeCounter AvailableByteCount;  // 0x0380, private
    TArray<unsigned char,TSizedDefaultAllocator<32> > AudioBuffer;  // 0x0388, private
    FThreadSafeBool bReset;  // 0x0398, private
    int32 NumBufferUnderrunSamples;  // 0x039C, protected
    int32 NumSamplesToGeneratePerCallback;  // 0x03A0, protected
    TDelegate<void __cdecl(USoundWaveProcedural *,int),FDefaultDelegateUserPolicy> OnSoundWaveProceduralUnderflow;  // 0x03A8
    int32 SampleByteSize;  // 0x03B8

    // Virtual functions that start here:
    //   OnGeneratePCMAudio
};
