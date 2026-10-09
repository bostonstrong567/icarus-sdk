// /Script/MovieScene.MovieScenePropertyBinding
// size 0x14, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieScenePropertyBinding.h

USTRUCT()
struct FMovieScenePropertyBinding
{
public:
    UPROPERTY() FName PropertyName;  // 0x0000, size 0x8
    UPROPERTY() FName PropertyPath;  // 0x0008, size 0x8
    UPROPERTY() bool bCanUseClassLookup;  // 0x0010, size 0x1
};
