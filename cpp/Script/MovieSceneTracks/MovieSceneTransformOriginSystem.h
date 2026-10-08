// /Script/MovieSceneTracks.MovieSceneTransformOriginSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x78, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneTransformOriginSystem.h

UCLASS(MinimalAPI)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSparseArray<FTransform,FDefaultSparseArrayAllocator> TransformOriginsByInstanceID;  // 0x0040, private
};
