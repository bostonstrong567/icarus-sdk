// /Script/MovieScene.MovieSceneFloatChannel
// size 0xA0, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h

USTRUCT()
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;  // 0x0008, size 0x1
    UPROPERTY() TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;  // 0x0009, size 0x1
private:
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0010, size 0x10
    UPROPERTY() TArray<FMovieSceneFloatValue> Values;  // 0x0020, size 0x10
    UPROPERTY() float DefaultValue;  // 0x0030, size 0x4
    UPROPERTY() bool bHasDefaultValue;  // 0x0034, size 0x1
    UPROPERTY(Transient) FMovieSceneKeyHandleMap KeyHandles;  // 0x0038, size 0x60
    UPROPERTY() FFrameRate TickResolution;  // 0x0098, size 0x8
};
