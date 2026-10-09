// /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
// size 0x78, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ScaleChainLength.h

USTRUCT()
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere) FPoseLink InputPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultChainLength;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference ChainStartBone;  // 0x0024, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference ChainEndBone;  // 0x0034, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0044, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0050, size 0x4
    float ActualAlpha;  // 0x0054, not reflected
    UPROPERTY(EditAnywhere) FInputScaleBias AlphaScaleBias;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) EScaleChainInitialLength ChainInitialLength;  // 0x0060, size 0x1
    bool bBoneIndicesCached;  // 0x0061, not reflected
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > ChainBoneIndices;  // 0x0068, not reflected
};
