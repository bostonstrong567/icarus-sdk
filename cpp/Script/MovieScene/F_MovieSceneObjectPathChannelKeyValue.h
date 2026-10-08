// /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
// size 0x30, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneObjectPathChannel.h

USTRUCT()
struct FMovieSceneObjectPathChannelKeyValue
{
    UPROPERTY() TSoftObjectPtr<UObject> SoftPtr;  // 0x0000, size 0x28
    UPROPERTY() UObject* HardPtr;  // 0x0028, size 0x8
};
