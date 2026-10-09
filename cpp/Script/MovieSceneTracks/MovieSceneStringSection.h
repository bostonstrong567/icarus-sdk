// /Script/MovieSceneTracks.MovieSceneStringSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x188, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneStringSection.h

UCLASS(MinimalAPI)
class UMovieSceneStringSection : public UMovieSceneSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneStringChannel StringCurve;  // 0x00E8, size 0xA0
};
