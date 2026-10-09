// /Script/ControlRig.RigUnit_SendEvent
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SendEvent.h

USTRUCT()
struct FRigUnit_SendEvent : public FRigUnitMutable
{
public:
    UPROPERTY() ERigEvent Event;  // 0x0068, size 0x1
    UPROPERTY() FRigElementKey Item;  // 0x006C, size 0xC
    UPROPERTY() float OffsetInSeconds;  // 0x0078, size 0x4
    UPROPERTY() bool bEnable;  // 0x007C, size 0x1
    UPROPERTY() bool bOnlyDuringInteraction;  // 0x007D, size 0x1
};
