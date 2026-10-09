// /Script/MovieScene.MovieSceneBoolSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x180, declared in Engine/Source/Runtime/MovieScene/Public/Sections/MovieSceneBoolSection.h

UCLASS(MinimalAPI)
class UMovieSceneBoolSection : public UMovieSceneSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Deprecated) bool DefaultValue;  // 0x00E8, size 0x1
protected:
    UPROPERTY() FMovieSceneBoolChannel BoolCurve;  // 0x00F0, size 0x90
};
