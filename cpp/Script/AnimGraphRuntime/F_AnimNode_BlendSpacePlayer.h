// /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
// size 0xE8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h

USTRUCT()
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float X;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Y;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Z;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayRate;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLoop;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bResetPlayTimeWhenBlendSpaceChanges;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartPosition;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBlendSpaceBase* BlendSpace;  // 0x0050, size 0x8
    UPROPERTY(Transient) UBlendSpaceBase* PreviousBlendSpace;  // 0x00E0, size 0x8

    // Not reflected:
    FBlendFilter BlendFilter;  // 0x0058
    TArray<FBlendSampleData,TSizedDefaultAllocator<32> > BlendSampleDataCache;  // 0x00D0
};
