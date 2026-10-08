// /Script/HairStrandsCore.MovieSceneGroomCacheTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/MovieSceneGroomCacheTrack.h

UCLASS(MinimalAPI)
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> AnimationSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewAnimation
};
