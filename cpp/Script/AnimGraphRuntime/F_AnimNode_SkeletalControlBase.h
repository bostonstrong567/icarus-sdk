// /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
// size 0xC8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SkeletalControlBase.h

USTRUCT()
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComponentSpacePoseLink ComponentPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x0020, size 0x4
    UPROPERTY(Transient) float ActualAlpha;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimAlphaInputType AlphaInputType;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlphaBoolEnabled;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAlphaBoolBlend AlphaBoolBlend;  // 0x0038, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AlphaCurveName;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x0088, size 0x30
private:
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > BoneTransforms;  // 0x00B8, not reflected
};
