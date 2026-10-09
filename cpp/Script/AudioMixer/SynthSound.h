// /Script/AudioMixer.SynthSound
// Derives from: USoundWaveProcedural > USoundWave > USoundBase > UObject
// size 0x3E0, declared in Engine/Source/Runtime/AudioMixer/Public/Components/SynthComponent.h

UCLASS(EditInlineNew)
class USynthSound : public USoundWaveProcedural
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Instanced) USynthComponent* OwningSynthComponent;  // 0x03C0, size 0x8
    TArray<float,TSizedDefaultAllocator<32> > FloatBuffer;  // 0x03C8, not reflected
    bool bAudioMixer;  // 0x03D8, not reflected
};
