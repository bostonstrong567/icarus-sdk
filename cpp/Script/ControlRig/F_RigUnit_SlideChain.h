// /Script/ControlRig.RigUnit_SlideChain
// size 0xC8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h

USTRUCT()
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
public:
    UPROPERTY() FName StartBone;  // 0x0068, size 0x8
    UPROPERTY() FName EndBone;  // 0x0070, size 0x8
    UPROPERTY() float SlideAmount;  // 0x0078, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x007C, size 0x1
    UPROPERTY(Transient) FRigUnit_SlideChain_WorkData WorkData;  // 0x0080, size 0x48
};
