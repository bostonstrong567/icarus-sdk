// /Script/MovieScene.MovieSceneEvaluationTrack
// size 0x78, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h

USTRUCT()
struct FMovieSceneEvaluationTrack
{
    UPROPERTY() FGuid ObjectBindingID;  // 0x0000, size 0x10
    UPROPERTY() uint16 EvaluationPriority;  // 0x0010, size 0x2
    UPROPERTY() EEvaluationMethod EvaluationMethod;  // 0x0012, size 0x1
    UPROPERTY(Instanced) TWeakObjectPtr<UMovieSceneTrack> SourceTrack;  // 0x0014, size 0x8
    UPROPERTY() TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;  // 0x0020, size 0x10
    UPROPERTY() FMovieSceneTrackImplementationPtr TrackTemplate;  // 0x0030, size 0x38
    UPROPERTY() FName EvaluationGroup;  // 0x0068, size 0x8
    UPROPERTY() uint8 bEvaluateInPreroll : 1;  // 0x0070, mask 0x01
    UPROPERTY() uint8 bEvaluateInPostroll : 1;  // 0x0070, mask 0x02
    UPROPERTY() uint8 bTearDownPriority : 1;  // 0x0070, mask 0x04
};
