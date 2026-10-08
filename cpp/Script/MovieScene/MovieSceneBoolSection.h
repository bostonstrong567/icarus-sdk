// /Script/MovieScene.MovieSceneBoolSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x180, declared in Engine/Source/Runtime/MovieScene/Public/Sections/MovieSceneBoolSection.h

UCLASS(MinimalAPI)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
    UPROPERTY(Deprecated) bool DefaultValue;  // 0x00E8, size 0x1
    UPROPERTY() FMovieSceneBoolChannel BoolCurve;  // 0x00F0, size 0x90
};
