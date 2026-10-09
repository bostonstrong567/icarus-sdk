// /Script/ControlRig.AnimNode_ControlRig_ExternalSource
// size 0x178, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/AnimNode_ControlRig_ExternalSource.h

USTRUCT()
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) TWeakObjectPtr<UControlRig> ControlRig;  // 0x0170, size 0x8
};
