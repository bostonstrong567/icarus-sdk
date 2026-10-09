// /Script/MovieScene.MovieSceneTimecodeSource
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/MovieScene.h

USTRUCT()
struct FMovieSceneTimecodeSource
{
public:
    UPROPERTY(EditAnywhere) FTimecode Timecode;  // 0x0000, size 0x14
    UPROPERTY(EditAnywhere) FFrameNumber DeltaFrame;  // 0x0014, size 0x4
};
