// /Script/ControlRig.AnimNode_ControlRigInputPose
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Sequencer/ControlRigLayerInstanceProxy.h

USTRUCT()
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
    UPROPERTY() FPoseLink InputPose;  // 0x0010, size 0x10

    // Not reflected:
    FAnimInstanceProxy * InputProxy;  // 0x0020
    UAnimInstance * InputAnimInstance;  // 0x0028
};
