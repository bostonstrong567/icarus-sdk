// /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
// Derives from: UObject
// size 0x428, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/SequenceCameraShake.h

UCLASS()
class USequenceCameraShakeSequencePlayer : public UObject
{
public:
    UPROPERTY(Transient) UObject* BoundObjectOverride;  // 0x02D0, size 0x8
    UPROPERTY(Transient) UMovieSceneSequence* Sequence;  // 0x02D8, size 0x8
    UPROPERTY(Transient) FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x02E0, size 0xE8

    // Not reflected: the engine's scripting cannot see these.
    FSequenceCameraShakeSpawnRegister SpawnRegister;  // 0x0260, private
    FMovieScenePlaybackPosition PlayPosition;  // 0x03C8, private
    FFrameNumber StartFrame;  // 0x041C, private
    FFrameNumber DurationFrames;  // 0x0420, private
    bool bIsLooping;  // 0x0424, private
    TEnumAsByte<enum EMovieScenePlayerStatus::Type> Status;  // 0x0425, private
};
