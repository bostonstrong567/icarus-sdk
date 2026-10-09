// /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
// size 0x30, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneObjectPathChannel.h

USTRUCT()
struct FMovieSceneObjectPathChannelKeyValue
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TSoftObjectPtr<UObject> SoftPtr;  // 0x0000, size 0x28
    UPROPERTY() UObject* HardPtr;  // 0x0028, size 0x8
};
