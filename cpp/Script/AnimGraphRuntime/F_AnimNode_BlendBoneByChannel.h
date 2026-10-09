// /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
// size 0x68, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendBoneByChannel.h

USTRUCT()
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink A;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink B;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBlendBoneByChannelEntry> BoneDefinitions;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> TransformsSpace;  // 0x0060, size 0x1
private:
    TArray<FBlendBoneByChannelEntry,TSizedDefaultAllocator<32> > ValidBoneEntries;  // 0x0040, not reflected
    float InternalBlendAlpha;  // 0x0054, not reflected
    bool bBIsRelevant;  // 0x0061, not reflected
};
