// /Script/ControlRig.EnumParameterNameAndCurve
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigParameterSection.h

USTRUCT()
struct FEnumParameterNameAndCurve
{
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneByteChannel ParameterCurve;  // 0x0008, size 0x98
};
