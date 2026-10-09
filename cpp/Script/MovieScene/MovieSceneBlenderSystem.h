// /Script/MovieScene.MovieSceneBlenderSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x68, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneBlenderSystem.h

UCLASS(Abstract)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
protected:
    TBitArray<FDefaultBitArrayAllocator> AllocatedBlendChannels;  // 0x0040, not reflected
private:
    FMovieSceneBlenderSystemID SystemID;  // 0x0060, not reflected
};
