// /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x58, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneDeferredComponentMovementSystem.h

UCLASS(MinimalAPI)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
private:
    TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192> ScopedUpdates;  // 0x0040, not reflected
};
