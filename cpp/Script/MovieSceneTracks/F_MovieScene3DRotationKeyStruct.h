// /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
// size 0x30, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h

USTRUCT()
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0014, size 0x4
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0018, not reflected
};
