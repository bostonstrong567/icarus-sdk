// /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h

USTRUCT()
struct FMovieSceneTrackEvaluationFieldEntry
{
public:
    UPROPERTY(Instanced) UMovieSceneSection* Section;  // 0x0000, size 0x8
    UPROPERTY() FFrameNumberRange Range;  // 0x0008, size 0x10
    UPROPERTY() FFrameNumber ForcedTime;  // 0x0018, size 0x4
    UPROPERTY() ESectionEvaluationFlags Flags;  // 0x001C, size 0x1
    UPROPERTY() int16 LegacySortOrder;  // 0x001E, size 0x2
};
