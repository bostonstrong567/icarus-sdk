// /Script/HairStrandsCore.MovieSceneGroomCacheSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x108, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/MovieSceneGroomCacheSection.h

UCLASS(MinimalAPI)
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneGroomCacheParams Params;  // 0x00E8, size 0x20

    // Virtual functions that start here:
    //   MapTimeToAnimation
};
