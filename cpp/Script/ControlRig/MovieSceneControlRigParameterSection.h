// /Script/ControlRig.MovieSceneControlRigParameterSection
// Derives from: UMovieSceneParameterSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x2E8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigParameterSection.h

UCLASS()
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
    UPROPERTY() UControlRig* ControlRig;  // 0x0148, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UControlRig> ControlRigClass;  // 0x0150, size 0x8
    UPROPERTY() TArray<bool> ControlsMask;  // 0x0158, size 0x10
    UPROPERTY() FMovieSceneTransformMask TransformMask;  // 0x0168, size 0x4
    UPROPERTY() FMovieSceneFloatChannel Weight;  // 0x0170, size 0xA0
    UPROPERTY() TMap<FName, FChannelMapInfo> ControlChannelMap;  // 0x0210, size 0x50
    UPROPERTY() TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;  // 0x0260, size 0x10
    UPROPERTY() TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;  // 0x0270, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<bool,TSizedDefaultAllocator<32> > OldControlsMask;  // 0x0280, private
    bool bDoNotKey;  // 0x0290, protected
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> ControlsToSet;  // 0x0298
};
