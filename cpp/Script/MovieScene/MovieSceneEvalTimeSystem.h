// /Script/MovieScene.MovieSceneEvalTimeSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x50, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEvalTimeSystem.h

UCLASS()
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
private:
    TArray<FFrameTime,TSizedDefaultAllocator<32> > FrameTimes;  // 0x0040, not reflected
};
