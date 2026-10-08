// /Script/Icarus.OneShotAudio
// Derives from: AActor > UObject
// size 0x258, declared in Icarus/Source/Icarus/Audio/OneShotAudio.h

UCLASS(Config=Engine)
class AOneShotAudio : public AActor
{
public:
    UPROPERTY(Replicated) FSoftObjectPath EventPath;  // 0x0220, size 0x18
    UPROPERTY(Replicated) bool bUseListenerRotation;  // 0x0238, size 0x1
    UPROPERTY(Replicated) bool bUseOcclusion;  // 0x0239, size 0x1
    UPROPERTY(Instanced) UAudioContextComponent* AudioContext;  // 0x0248, size 0x8
    UPROPERTY(Instanced) UAudioOcclusionComponent* OcclusionComponent;  // 0x0250, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FMOD::Studio::EventInstance * PlayingInstance;  // 0x0240, private
};
