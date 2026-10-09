// /Script/ControlRig.CRSimPointConstraint
// size 0x24, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimPointConstraint.h

USTRUCT()
struct FCRSimPointConstraint
{
public:
    UPROPERTY() ECRSimConstraintType Type;  // 0x0000, size 0x1
    UPROPERTY() int32 SubjectA;  // 0x0004, size 0x4
    UPROPERTY() int32 SubjectB;  // 0x0008, size 0x4
    UPROPERTY() FVector DataA;  // 0x000C, size 0xC
    UPROPERTY() FVector DataB;  // 0x0018, size 0xC
};
