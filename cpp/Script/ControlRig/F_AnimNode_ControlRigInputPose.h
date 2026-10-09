// /Script/ControlRig.AnimNode_ControlRigInputPose
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Sequencer/ControlRigLayerInstanceProxy.h

USTRUCT()
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
public:
    UPROPERTY() FPoseLink InputPose;  // 0x0010, size 0x10
private:
    FAnimInstanceProxy * InputProxy;  // 0x0020, not reflected
    UAnimInstance * InputAnimInstance;  // 0x0028, not reflected
};
