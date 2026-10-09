// /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
// size 0x30, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h

USTRUCT()
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
    UPROPERTY(EditAnywhere) FVector Scale;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) FFrameNumber Time;  // 0x0014, size 0x4
    FMovieSceneKeyStructHelper KeyStructInterop;  // 0x0018, not reflected
};
