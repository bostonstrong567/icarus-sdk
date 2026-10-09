// /Script/AnimGraphRuntime.AnimNode_SplineIK
// size 0x270, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SplineIK.h

USTRUCT()
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference StartBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference EndBone;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere) ESplineBoneAxis BoneAxis;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere) bool bAutoCalculateSpline;  // 0x00E9, size 0x1
    UPROPERTY(EditAnywhere) int32 PointCount;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> ControlPoints;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Roll;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TwistStart;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TwistEnd;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere) FAlphaBlend TwistBlend;  // 0x0110, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Stretch;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Offset;  // 0x0144, size 0x4
private:
    FSplineCurves TransformedSpline;  // 0x0148, not reflected
    TArray<FSplinePositionLinearApproximation,TSizedDefaultAllocator<32> > LinearApproximation;  // 0x01B8, not reflected
    FSplineCurves BoneSpline;  // 0x01C8, not reflected
    float OriginalSplineLength;  // 0x0238, not reflected
    TArray<FSplineIKCachedBoneData,TSizedDefaultAllocator<32> > CachedBoneReferences;  // 0x0240, not reflected
    TArray<float,TSizedDefaultAllocator<32> > CachedBoneLengths;  // 0x0250, not reflected
    TArray<FQuat,TSizedDefaultAllocator<32> > CachedOffsetRotations;  // 0x0260, not reflected
};
