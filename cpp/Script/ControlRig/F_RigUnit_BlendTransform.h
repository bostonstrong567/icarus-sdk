// /Script/ControlRig.RigUnit_BlendTransform
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/RigUnit_BlendTransform.h

USTRUCT()
struct FRigUnit_BlendTransform : public FRigUnit
{
public:
    UPROPERTY() FTransform Source;  // 0x0010, size 0x30
    UPROPERTY() TArray<FBlendTarget> Targets;  // 0x0040, size 0x10
    UPROPERTY() FTransform Result;  // 0x0050, size 0x30
};
