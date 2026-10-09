// /Script/ControlRig.RigUnit_AnimEasing
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Animation/RigUnit_AnimEasing.h

USTRUCT()
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() EControlRigAnimEasingType Type;  // 0x000C, size 0x1
    UPROPERTY() float SourceMinimum;  // 0x0010, size 0x4
    UPROPERTY() float SourceMaximum;  // 0x0014, size 0x4
    UPROPERTY() float TargetMinimum;  // 0x0018, size 0x4
    UPROPERTY() float TargetMaximum;  // 0x001C, size 0x4
    UPROPERTY() float Result;  // 0x0020, size 0x4
};
