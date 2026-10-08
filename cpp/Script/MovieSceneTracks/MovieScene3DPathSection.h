// /Script/MovieSceneTracks.MovieScene3DPathSection
// Derives from: UMovieScene3DConstraintSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x1B8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DPathSection.h

UCLASS(MinimalAPI)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
    UPROPERTY() FMovieSceneFloatChannel TimingCurve;  // 0x0110, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) MovieScene3DPathSection_Axis FrontAxisEnum;  // 0x01B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) MovieScene3DPathSection_Axis UpAxisEnum;  // 0x01B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bFollow : 1;  // 0x01B4, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReverse : 1;  // 0x01B4, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bForceUpright : 1;  // 0x01B4, mask 0x04
};
