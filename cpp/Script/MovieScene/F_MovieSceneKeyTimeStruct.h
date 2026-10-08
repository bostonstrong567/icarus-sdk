// /Script/MovieScene.MovieSceneKeyTimeStruct
// size 0x28, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneKeyStruct.h

USTRUCT()
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0008, size 0x4

    // Not reflected:
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0010
};
