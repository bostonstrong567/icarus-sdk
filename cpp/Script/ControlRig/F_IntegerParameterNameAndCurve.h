// /Script/ControlRig.IntegerParameterNameAndCurve
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigParameterSection.h

USTRUCT()
struct FIntegerParameterNameAndCurve
{
public:
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneIntegerChannel ParameterCurve;  // 0x0008, size 0x90
};
