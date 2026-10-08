// /Script/ControlRig.RigUnit_EndsWith
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Core/RigUnit_Name.h

USTRUCT()
struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
    UPROPERTY() FName Name;  // 0x0008, size 0x8
    UPROPERTY() FName Ending;  // 0x0010, size 0x8
    UPROPERTY() bool Result;  // 0x0018, size 0x1
};
