// /Script/MovieScene.MovieSceneBlenderSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x68, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneBlenderSystem.h

UCLASS(Abstract)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TBitArray<FDefaultBitArrayAllocator> AllocatedBlendChannels;  // 0x0040, protected
    FMovieSceneBlenderSystemID SystemID;  // 0x0060, private
};
