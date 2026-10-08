// /Script/MovieSceneTracks.MovieSceneVectorKeyStructBase
// size 0x28, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h

USTRUCT()
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0008, size 0x4

    // Not reflected:
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0010
};
