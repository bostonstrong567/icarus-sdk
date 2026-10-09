// /Script/ControlRig.MovieSceneControlRigInstanceData
// size 0xD8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigInstanceData.h

USTRUCT()
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
public:
    UPROPERTY() bool bAdditive;  // 0x0008, size 0x1
    UPROPERTY() bool bApplyBoneFilter;  // 0x0009, size 0x1
    UPROPERTY() FInputBlendPose BoneFilter;  // 0x0010, size 0x10
    UPROPERTY() FMovieSceneFloatChannel Weight;  // 0x0020, size 0xA0
    UPROPERTY() FMovieSceneEvaluationOperand Operand;  // 0x00C0, size 0x14
};
