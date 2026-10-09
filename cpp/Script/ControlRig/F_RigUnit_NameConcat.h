// /Script/ControlRig.RigUnit_NameConcat
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Core/RigUnit_Name.h

USTRUCT()
struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
public:
    UPROPERTY() FName A;  // 0x0008, size 0x8
    UPROPERTY() FName B;  // 0x0010, size 0x8
    UPROPERTY() FName Result;  // 0x0018, size 0x8
};
