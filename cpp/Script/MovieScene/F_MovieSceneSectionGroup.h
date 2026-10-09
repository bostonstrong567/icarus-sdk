// /Script/MovieScene.MovieSceneSectionGroup
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/MovieScene.h

USTRUCT()
struct FMovieSceneSectionGroup
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;  // 0x0000, size 0x10
};
