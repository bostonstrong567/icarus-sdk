// /Script/MovieScene.MovieSceneEvaluationTemplate
// size 0x160, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h

USTRUCT()
struct FMovieSceneEvaluationTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FGuid SequenceSignature;  // 0x00A0, size 0x10
    UPROPERTY() FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;  // 0x00B0, size 0x4
private:
    UPROPERTY() TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;  // 0x0000, size 0x50
    TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0> > StaleTracks;  // 0x0050, not reflected
    UPROPERTY() FMovieSceneTemplateGenerationLedger TemplateLedger;  // 0x00B8, size 0xA8
};
