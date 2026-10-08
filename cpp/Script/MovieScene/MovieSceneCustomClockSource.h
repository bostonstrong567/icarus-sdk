// /Script/MovieScene.MovieSceneCustomClockSource
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/IMovieSceneCustomClockSource.h

UCLASS(Abstract)
class UMovieSceneCustomClockSource : public UInterface
{
public:

    UFUNCTION() FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate);  // parameters 0x1C
    UFUNCTION() void OnStartPlaying(const FQualifiedFrameTime& InStartTime);  // parameters 0x10
    UFUNCTION() void OnStopPlaying(const FQualifiedFrameTime& InStopTime);  // parameters 0x10
    UFUNCTION() void OnTick(float DeltaSeconds, float InPlayRate);  // parameters 0x8
};
