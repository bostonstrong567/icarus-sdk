// /Script/MovieScene.MovieSceneBindingOverrideData
// size 0x24, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneBindingOverrides.h

USTRUCT()
struct FMovieSceneBindingOverrideData
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneObjectBindingID ObjectBindingId;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere) TWeakObjectPtr<UObject> Object;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) bool bOverridesDefault;  // 0x0020, size 0x1
};
