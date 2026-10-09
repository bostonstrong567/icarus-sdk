// /Script/ControlRig.RigUnit_StartsWith
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Core/RigUnit_Name.h

USTRUCT()
struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
public:
    UPROPERTY() FName Name;  // 0x0008, size 0x8
    UPROPERTY() FName Start;  // 0x0010, size 0x8
    UPROPERTY() bool Result;  // 0x0018, size 0x1
};
