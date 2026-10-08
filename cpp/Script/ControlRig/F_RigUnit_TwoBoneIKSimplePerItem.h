// /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
// size 0x1B0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h

USTRUCT()
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FRigElementKey ItemA;  // 0x0068, size 0xC
    UPROPERTY() FRigElementKey ItemB;  // 0x0074, size 0xC
    UPROPERTY() FRigElementKey EffectorItem;  // 0x0080, size 0xC
    UPROPERTY() FTransform Effector;  // 0x0090, size 0x30
    UPROPERTY() FVector PrimaryAxis;  // 0x00C0, size 0xC
    UPROPERTY() FVector SecondaryAxis;  // 0x00CC, size 0xC
    UPROPERTY() float SecondaryAxisWeight;  // 0x00D8, size 0x4
    UPROPERTY() FVector PoleVector;  // 0x00DC, size 0xC
    UPROPERTY() EControlRigVectorKind PoleVectorKind;  // 0x00E8, size 0x1
    UPROPERTY() FRigElementKey PoleVectorSpace;  // 0x00EC, size 0xC
    UPROPERTY() bool bEnableStretch;  // 0x00F8, size 0x1
    UPROPERTY() float StretchStartRatio;  // 0x00FC, size 0x4
    UPROPERTY() float StretchMaximumRatio;  // 0x0100, size 0x4
    UPROPERTY() float Weight;  // 0x0104, size 0x4
    UPROPERTY() float ItemALength;  // 0x0108, size 0x4
    UPROPERTY() float ItemBLength;  // 0x010C, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0110, size 0x1
    UPROPERTY() FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;  // 0x0120, size 0x40
    UPROPERTY() FCachedRigElement CachedItemAIndex;  // 0x0160, size 0x14
    UPROPERTY() FCachedRigElement CachedItemBIndex;  // 0x0174, size 0x14
    UPROPERTY() FCachedRigElement CachedEffectorItemIndex;  // 0x0188, size 0x14
    UPROPERTY() FCachedRigElement CachedPoleVectorSpaceIndex;  // 0x019C, size 0x14
};
