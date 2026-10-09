// /Script/ControlRig.MovieSceneControlRigParameterTemplate
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigParameterTemplate.h

USTRUCT()
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<FEnumParameterNameAndCurve> Enums;  // 0x0080, size 0x10
    UPROPERTY() TArray<FIntegerParameterNameAndCurve> Integers;  // 0x0090, size 0x10
};
