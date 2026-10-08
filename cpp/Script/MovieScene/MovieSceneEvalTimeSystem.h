// /Script/MovieScene.MovieSceneEvalTimeSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x50, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEvalTimeSystem.h

UCLASS()
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FFrameTime,TSizedDefaultAllocator<32> > FrameTimes;  // 0x0040, private
};
