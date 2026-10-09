// /Script/ControlRig.AnimNode_ControlRigBase
// size 0x170, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/AnimNode_ControlRigBase.h

USTRUCT()
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FPoseLink Source;  // 0x0058, size 0x10
    UPROPERTY(Transient) TMap<FName, uint16> ControlRigBoneMapping;  // 0x0068, size 0x50
    UPROPERTY(Transient) TMap<FName, uint16> ControlRigCurveMapping;  // 0x00B8, size 0x50
    UPROPERTY(Transient) TMap<FName, uint16> InputToCurveMappingUIDs;  // 0x0108, size 0x50
    UPROPERTY(Transient) TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer;  // 0x0158, size 0x8
    UPROPERTY(Transient) FControlRigIOSettings InputSettings;  // 0x0160, size 0x2
    UPROPERTY(Transient) FControlRigIOSettings OutputSettings;  // 0x0162, size 0x2
    UPROPERTY(Transient) bool bExecute;  // 0x0164, size 0x1
    float InternalBlendAlpha;  // 0x0168, not reflected
};
