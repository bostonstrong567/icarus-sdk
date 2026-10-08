// /Script/AudioMixer.SynthSound
// Derives from: USoundWaveProcedural > USoundWave > USoundBase > UObject
// size 0x3E0, declared in Engine/Source/Runtime/AudioMixer/Public/Components/SynthComponent.h

UCLASS(EditInlineNew)
class USynthSound : public USoundWaveProcedural
{
public:
    UPROPERTY(Instanced) USynthComponent* OwningSynthComponent;  // 0x03C0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<float,TSizedDefaultAllocator<32> > FloatBuffer;  // 0x03C8, protected
    bool bAudioMixer;  // 0x03D8, protected
};
