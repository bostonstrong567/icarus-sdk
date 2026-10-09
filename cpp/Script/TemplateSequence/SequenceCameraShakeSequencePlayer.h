// /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
// Derives from: UObject
// size 0x428, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/SequenceCameraShake.h

UCLASS()
class USequenceCameraShakeSequencePlayer : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    FSequenceCameraShakeSpawnRegister SpawnRegister;  // 0x0260, not reflected
    UPROPERTY(Transient) UObject* BoundObjectOverride;  // 0x02D0, size 0x8
    UPROPERTY(Transient) UMovieSceneSequence* Sequence;  // 0x02D8, size 0x8
    UPROPERTY(Transient) FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x02E0, size 0xE8
    FMovieScenePlaybackPosition PlayPosition;  // 0x03C8, not reflected
    FFrameNumber StartFrame;  // 0x041C, not reflected
    FFrameNumber DurationFrames;  // 0x0420, not reflected
    bool bIsLooping;  // 0x0424, not reflected
    TEnumAsByte<enum EMovieScenePlayerStatus::Type> Status;  // 0x0425, not reflected
};
