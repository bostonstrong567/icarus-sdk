// /Script/ControlRig.RigUnit_NameTruncate
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Core/RigUnit_Name.h

USTRUCT()
struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
    UPROPERTY() FName Name;  // 0x0008, size 0x8
    UPROPERTY() int32 Count;  // 0x0010, size 0x4
    UPROPERTY() bool FromEnd;  // 0x0014, size 0x1
    UPROPERTY() FName Remainder;  // 0x0018, size 0x8
    UPROPERTY() FName Chopped;  // 0x0020, size 0x8
};
