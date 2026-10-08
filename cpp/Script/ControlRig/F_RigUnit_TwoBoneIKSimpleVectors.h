// /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h

USTRUCT()
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
    UPROPERTY() FVector Root;  // 0x0008, size 0xC
    UPROPERTY() FVector PoleVector;  // 0x0014, size 0xC
    UPROPERTY() FVector Effector;  // 0x0020, size 0xC
    UPROPERTY() bool bEnableStretch;  // 0x002C, size 0x1
    UPROPERTY() float StretchStartRatio;  // 0x0030, size 0x4
    UPROPERTY() float StretchMaximumRatio;  // 0x0034, size 0x4
    UPROPERTY() float BoneALength;  // 0x0038, size 0x4
    UPROPERTY() float BoneBLength;  // 0x003C, size 0x4
    UPROPERTY() FVector Elbow;  // 0x0040, size 0xC
};
