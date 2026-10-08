// /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
// size 0x48, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h

USTRUCT()
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    UPROPERTY(EditAnywhere) FVector Location;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere) FVector Scale;  // 0x0020, size 0xC
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x002C, size 0x4

    // Not reflected:
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0030
};
