// /Script/MovieSceneTracks.MovieSceneColorKeyStruct
// size 0x38, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h

USTRUCT()
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    UPROPERTY(EditAnywhere) FLinearColor Color;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0018, size 0x4

    // Not reflected:
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0020
};
