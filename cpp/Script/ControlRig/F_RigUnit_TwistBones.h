// /Script/ControlRig.RigUnit_TwistBones
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h

USTRUCT()
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FName StartBone;  // 0x0068, size 0x8
    UPROPERTY() FName EndBone;  // 0x0070, size 0x8
    UPROPERTY() FVector TwistAxis;  // 0x0078, size 0xC
    UPROPERTY() FVector PoleAxis;  // 0x0084, size 0xC
    UPROPERTY() EControlRigAnimEasingType TwistEaseType;  // 0x0090, size 0x1
    UPROPERTY() float Weight;  // 0x0094, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0098, size 0x1
    UPROPERTY(Transient) FRigUnit_TwistBones_WorkData WorkData;  // 0x00A0, size 0x30
};
