// /Script/ControlRig.AnimNode_ControlRig_ExternalSource
// size 0x178, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/AnimNode_ControlRig_ExternalSource.h

USTRUCT()
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
    UPROPERTY(Transient) TWeakObjectPtr<UControlRig> ControlRig;  // 0x0170, size 0x8
};
