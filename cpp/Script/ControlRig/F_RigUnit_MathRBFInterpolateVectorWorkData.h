// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorWorkData
{

    // Not reflected:
    TRBFInterpolator<FVector> Interpolator;  // 0x0000
    TArray<FVector,TSizedDefaultAllocator<32> > Targets;  // 0x0070
    uint64 Hash;  // 0x0080
    bool bAreTargetsConstant;  // 0x0088
};
