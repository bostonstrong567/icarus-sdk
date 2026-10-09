// /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h

USTRUCT()
struct FRigUnit_FitChainToCurve_WorkData
{
public:
    UPROPERTY() float ChainLength;  // 0x0000, size 0x4
    UPROPERTY() TArray<FVector> ItemPositions;  // 0x0008, size 0x10
    UPROPERTY() TArray<float> ItemSegments;  // 0x0018, size 0x10
    UPROPERTY() TArray<FVector> CurvePositions;  // 0x0028, size 0x10
    UPROPERTY() TArray<float> CurveSegments;  // 0x0038, size 0x10
    UPROPERTY() TArray<FCachedRigElement> CachedItems;  // 0x0048, size 0x10
    UPROPERTY() TArray<int32> ItemRotationA;  // 0x0058, size 0x10
    UPROPERTY() TArray<int32> ItemRotationB;  // 0x0068, size 0x10
    UPROPERTY() TArray<float> ItemRotationT;  // 0x0078, size 0x10
    UPROPERTY() TArray<FTransform> ItemLocalTransforms;  // 0x0088, size 0x10
};
