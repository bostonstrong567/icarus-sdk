// /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
// size 0x30, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h

USTRUCT()
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    UPROPERTY(EditAnywhere) FVector Location;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0014, size 0x4

    // Not reflected:
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0018
};
