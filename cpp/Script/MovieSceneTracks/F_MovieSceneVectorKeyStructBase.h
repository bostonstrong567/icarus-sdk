// /Script/MovieSceneTracks.MovieSceneVectorKeyStructBase
// size 0x28, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h

USTRUCT()
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0008, size 0x4
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0010, not reflected
};
