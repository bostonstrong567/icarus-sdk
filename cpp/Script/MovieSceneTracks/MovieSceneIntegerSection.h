// /Script/MovieSceneTracks.MovieSceneIntegerSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x180, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneIntegerSection.h

UCLASS(MinimalAPI)
class UMovieSceneIntegerSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneIntegerChannel IntegerCurve;  // 0x00F0, size 0x90
};
