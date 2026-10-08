// /Script/MovieScene.MovieSceneBinding
// size 0x30, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneBinding.h

USTRUCT()
struct FMovieSceneBinding
{
    UPROPERTY() FGuid ObjectGuid;  // 0x0000, size 0x10
    UPROPERTY() FString BindingName;  // 0x0010, size 0x10
    UPROPERTY() TArray<UMovieSceneTrack*> Tracks;  // 0x0020, size 0x10
};
