// /Script/MovieScene.MovieSceneEvaluationTemplate
// size 0x160, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h

USTRUCT()
struct FMovieSceneEvaluationTemplate
{
    UPROPERTY() TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;  // 0x0000, size 0x50
    UPROPERTY() FGuid SequenceSignature;  // 0x00A0, size 0x10
    UPROPERTY() FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;  // 0x00B0, size 0x4
    UPROPERTY() FMovieSceneTemplateGenerationLedger TemplateLedger;  // 0x00B8, size 0xA8

    // Not reflected:
    TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0> > StaleTracks;  // 0x0050
};
