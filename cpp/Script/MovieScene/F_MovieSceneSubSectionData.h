// /Script/MovieScene.MovieSceneSubSectionData
// size 0x1C, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h

USTRUCT()
struct FMovieSceneSubSectionData
{
    UPROPERTY(Instanced) TWeakObjectPtr<UMovieSceneSubSection> Section;  // 0x0000, size 0x8
    UPROPERTY() FGuid ObjectBindingId;  // 0x0008, size 0x10
    UPROPERTY() ESectionEvaluationFlags Flags;  // 0x0018, size 0x1
};
