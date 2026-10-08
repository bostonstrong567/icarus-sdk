// /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Derives from: UMovieSceneBlenderSystem > UMovieSceneEntitySystem > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseByteBlenderSystem.h

UCLASS()
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::TSimpleBlenderSystemImpl<unsigned char> Impl;  // 0x0068, private
};
