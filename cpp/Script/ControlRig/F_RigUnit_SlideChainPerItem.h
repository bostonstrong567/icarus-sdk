// /Script/ControlRig.RigUnit_SlideChainPerItem
// size 0xC8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h

USTRUCT()
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
    UPROPERTY() FRigElementKeyCollection Items;  // 0x0068, size 0x10
    UPROPERTY() float SlideAmount;  // 0x0078, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x007C, size 0x1
    UPROPERTY(Transient) FRigUnit_SlideChain_WorkData WorkData;  // 0x0080, size 0x48
};
