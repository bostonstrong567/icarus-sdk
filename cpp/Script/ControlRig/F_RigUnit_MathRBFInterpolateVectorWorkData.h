// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
public:
    TRBFInterpolator<FVector> Interpolator;  // 0x0000, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > Targets;  // 0x0070, not reflected
    uint64 Hash;  // 0x0080, not reflected
    bool bAreTargetsConstant;  // 0x0088, not reflected
};
