// /Script/UMG.MovieSceneMarginSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x370, declared in Engine/Source/Runtime/UMG/Public/Animation/MovieSceneMarginSection.h

UCLASS(MinimalAPI)
class UMovieSceneMarginSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneFloatChannel TopCurve;  // 0x00F0, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel LeftCurve;  // 0x0190, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel RightCurve;  // 0x0230, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel BottomCurve;  // 0x02D0, size 0xA0
};
