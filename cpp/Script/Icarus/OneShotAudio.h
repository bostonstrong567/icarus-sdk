// /Script/Icarus.OneShotAudio
// Derives from: AActor > UObject
// size 0x258, declared in Icarus/Source/Icarus/Audio/OneShotAudio.h

UCLASS(Config=Engine)
class AOneShotAudio : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Replicated) FSoftObjectPath EventPath;  // 0x0220, size 0x18
    UPROPERTY(Replicated) bool bUseListenerRotation;  // 0x0238, size 0x1
    UPROPERTY(Replicated) bool bUseOcclusion;  // 0x0239, size 0x1
    FMOD::Studio::EventInstance * PlayingInstance;  // 0x0240, not reflected
    UPROPERTY(Instanced) UAudioContextComponent* AudioContext;  // 0x0248, size 0x8
    UPROPERTY(Instanced) UAudioOcclusionComponent* OcclusionComponent;  // 0x0250, size 0x8
};
