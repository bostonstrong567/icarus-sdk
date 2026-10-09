// /Script/ControlRig.RigUnit_TwoBoneIKSimple
// size 0x190, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h

USTRUCT()
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
public:
    UPROPERTY() FName BoneA;  // 0x0068, size 0x8
    UPROPERTY() FName BoneB;  // 0x0070, size 0x8
    UPROPERTY() FName EffectorBone;  // 0x0078, size 0x8
    UPROPERTY() FTransform Effector;  // 0x0080, size 0x30
    UPROPERTY() FVector PrimaryAxis;  // 0x00B0, size 0xC
    UPROPERTY() FVector SecondaryAxis;  // 0x00BC, size 0xC
    UPROPERTY() float SecondaryAxisWeight;  // 0x00C8, size 0x4
    UPROPERTY() FVector PoleVector;  // 0x00CC, size 0xC
    UPROPERTY() EControlRigVectorKind PoleVectorKind;  // 0x00D8, size 0x1
    UPROPERTY() FName PoleVectorSpace;  // 0x00DC, size 0x8
    UPROPERTY() bool bEnableStretch;  // 0x00E4, size 0x1
    UPROPERTY() float StretchStartRatio;  // 0x00E8, size 0x4
    UPROPERTY() float StretchMaximumRatio;  // 0x00EC, size 0x4
    UPROPERTY() float Weight;  // 0x00F0, size 0x4
    UPROPERTY() float BoneALength;  // 0x00F4, size 0x4
    UPROPERTY() float BoneBLength;  // 0x00F8, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x00FC, size 0x1
    UPROPERTY() FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;  // 0x0100, size 0x40
    UPROPERTY() FCachedRigElement CachedBoneAIndex;  // 0x0140, size 0x14
    UPROPERTY() FCachedRigElement CachedBoneBIndex;  // 0x0154, size 0x14
    UPROPERTY() FCachedRigElement CachedEffectorBoneIndex;  // 0x0168, size 0x14
    UPROPERTY() FCachedRigElement CachedPoleVectorSpaceIndex;  // 0x017C, size 0x14
};
