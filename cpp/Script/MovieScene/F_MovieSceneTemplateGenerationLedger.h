// /Script/MovieScene.MovieSceneTemplateGenerationLedger
// size 0xA8, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h

USTRUCT()
struct FMovieSceneTemplateGenerationLedger
{
public:
    UPROPERTY() FMovieSceneTrackIdentifier LastTrackIdentifier;  // 0x0000, size 0x4
    UPROPERTY() TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;  // 0x0008, size 0x50
    UPROPERTY() TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges;  // 0x0058, size 0x50
};
