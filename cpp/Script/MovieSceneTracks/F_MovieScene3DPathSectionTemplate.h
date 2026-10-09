// /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
// size 0xE0, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieScene3DPathTemplate.h

USTRUCT()
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
    UPROPERTY() FMovieSceneObjectBindingID PathBindingID;  // 0x0020, size 0x18
    UPROPERTY() FMovieSceneFloatChannel TimingCurve;  // 0x0038, size 0xA0
    UPROPERTY() MovieScene3DPathSection_Axis FrontAxisEnum;  // 0x00D8, size 0x1
    UPROPERTY() MovieScene3DPathSection_Axis UpAxisEnum;  // 0x00D9, size 0x1
    UPROPERTY() uint8 bFollow : 1;  // 0x00DC, mask 0x01
    UPROPERTY() uint8 bReverse : 1;  // 0x00DC, mask 0x02
    UPROPERTY() uint8 bForceUpright : 1;  // 0x00DC, mask 0x04
};
