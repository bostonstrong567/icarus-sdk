// /Script/MovieSceneTracks.MovieSceneFloatSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x190, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneFloatSection.h

UCLASS(MinimalAPI)
class UMovieSceneFloatSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FMovieSceneFloatChannel FloatCurve;  // 0x00F0, size 0xA0
};
