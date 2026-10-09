// /Script/ControlRig.RigUnit_MathVectorRemap
// size 0x58, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathVector.h

USTRUCT()
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() FVector SourceMinimum;  // 0x0014, size 0xC
    UPROPERTY() FVector SourceMaximum;  // 0x0020, size 0xC
    UPROPERTY() FVector TargetMinimum;  // 0x002C, size 0xC
    UPROPERTY() FVector TargetMaximum;  // 0x0038, size 0xC
    UPROPERTY() bool bClamp;  // 0x0044, size 0x1
    UPROPERTY() FVector Result;  // 0x0048, size 0xC
};
