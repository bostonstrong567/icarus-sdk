// /Script/HairStrandsCore.MovieSceneGroomCacheTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/MovieSceneGroomCacheTrack.h

UCLASS(MinimalAPI)
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UMovieSceneSection*> AnimationSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewAnimation
};
