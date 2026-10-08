// /Script/ControlRig.RigUnit_NameReplace
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Core/RigUnit_Name.h

USTRUCT()
struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
    UPROPERTY() FName Name;  // 0x0008, size 0x8
    UPROPERTY() FName Old;  // 0x0010, size 0x8
    UPROPERTY() FName New;  // 0x0018, size 0x8
    UPROPERTY() FName Result;  // 0x0020, size 0x8
};
