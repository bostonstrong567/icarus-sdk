// /Script/MovieScene.MovieSceneEasingSettings
// size 0x38, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSection.h

USTRUCT()
struct FMovieSceneEasingSettings
{
    UPROPERTY() int32 AutoEaseInDuration;  // 0x0000, size 0x4
    UPROPERTY() int32 AutoEaseOutDuration;  // 0x0004, size 0x4
    UPROPERTY() TScriptInterface<IMovieSceneEasingFunction> EaseIn;  // 0x0008, size 0x10
    UPROPERTY() bool bManualEaseIn;  // 0x0018, size 0x1
    UPROPERTY() int32 ManualEaseInDuration;  // 0x001C, size 0x4
    UPROPERTY() TScriptInterface<IMovieSceneEasingFunction> EaseOut;  // 0x0020, size 0x10
    UPROPERTY() bool bManualEaseOut;  // 0x0030, size 0x1
    UPROPERTY() int32 ManualEaseOutDuration;  // 0x0034, size 0x4
};
