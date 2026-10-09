// /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
// size 0xC0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h

USTRUCT()
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink BasePose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPoseLink> BlendPoses;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) TArray<FInputBlendPose> LayerSetup;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> BlendWeights;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMeshSpaceRotationBlend;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMeshSpaceScaleBlend;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECurveBlendOption> CurveBlendOption;  // 0x0052, size 0x1
    UPROPERTY(EditAnywhere) bool bBlendRootMotionBasedOnRootBone;  // 0x0053, size 0x1
    bool bHasRelevantPoses;  // 0x0054, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x0058, size 0x4
protected:
    UPROPERTY() TArray<FPerBoneBlendWeight> PerBoneBlendWeights;  // 0x0060, size 0x10
    UPROPERTY() FGuid SkeletonGuid;  // 0x0070, size 0x10
    UPROPERTY() FGuid VirtualBoneGuid;  // 0x0080, size 0x10
    TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32> > DesiredBoneBlendWeights;  // 0x0090, not reflected
    TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32> > CurrentBoneBlendWeights;  // 0x00A0, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > CurvePoseSourceIndices;  // 0x00B0, not reflected
};
