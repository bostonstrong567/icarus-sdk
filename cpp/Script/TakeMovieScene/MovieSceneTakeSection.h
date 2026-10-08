// /Script/TakeMovieScene.MovieSceneTakeSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x468, declared in Engine/Plugins/VirtualProduction/Takes/Source/TakeMovieScene/Public/MovieSceneTakeSection.h

UCLASS(MinimalAPI)
class UMovieSceneTakeSection : public UMovieSceneSection
{
public:
    UPROPERTY() FMovieSceneIntegerChannel HoursCurve;  // 0x00E8, size 0x90
    UPROPERTY() FMovieSceneIntegerChannel MinutesCurve;  // 0x0178, size 0x90
    UPROPERTY() FMovieSceneIntegerChannel SecondsCurve;  // 0x0208, size 0x90
    UPROPERTY() FMovieSceneIntegerChannel FramesCurve;  // 0x0298, size 0x90
    UPROPERTY() FMovieSceneFloatChannel SubFramesCurve;  // 0x0328, size 0xA0
    UPROPERTY() FMovieSceneStringChannel Slate;  // 0x03C8, size 0xA0
};
