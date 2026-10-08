// /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h

USTRUCT()
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
    UPROPERTY() FTransform Root;  // 0x0010, size 0x30
    UPROPERTY() FVector PoleVector;  // 0x0040, size 0xC
    UPROPERTY() FTransform Effector;  // 0x0050, size 0x30
    UPROPERTY() FVector PrimaryAxis;  // 0x0080, size 0xC
    UPROPERTY() FVector SecondaryAxis;  // 0x008C, size 0xC
    UPROPERTY() float SecondaryAxisWeight;  // 0x0098, size 0x4
    UPROPERTY() bool bEnableStretch;  // 0x009C, size 0x1
    UPROPERTY() float StretchStartRatio;  // 0x00A0, size 0x4
    UPROPERTY() float StretchMaximumRatio;  // 0x00A4, size 0x4
    UPROPERTY() float BoneALength;  // 0x00A8, size 0x4
    UPROPERTY() float BoneBLength;  // 0x00AC, size 0x4
    UPROPERTY() FTransform Elbow;  // 0x00B0, size 0x30
};
