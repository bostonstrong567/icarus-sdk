// /Script/AudioMixer.AudioGenerator
// Derives from: UObject
// size 0xA8, declared in Engine/Source/Runtime/AudioMixer/Classes/Generators/AudioGenerator.h

UCLASS()
class UAudioGenerator : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection CritSect;  // 0x0028, protected
    int32 SampleRate;  // 0x0050, protected
    int32 NumChannels;  // 0x0054, protected
    TMap<unsigned int,TFunction<void __cdecl(float const *,int)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,TFunction<void __cdecl(float const *,int)>,0> > OnGeneratedMap;  // 0x0058, protected
};
