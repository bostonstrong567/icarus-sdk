// /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate
// size 0x8, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneFieldEntry_ChildTemplate
{
public:
    UPROPERTY() uint16 ChildIndex;  // 0x0000, size 0x2
    UPROPERTY() ESectionEvaluationFlags Flags;  // 0x0002, size 0x1
    UPROPERTY() FFrameNumber ForcedTime;  // 0x0004, size 0x4
};
