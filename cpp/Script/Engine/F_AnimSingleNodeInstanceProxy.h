// /Script/Engine.AnimSingleNodeInstanceProxy
// size 0x8C0, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimSingleNodeInstanceProxy.h

USTRUCT()
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{

    // Not reflected:
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > PreviewCurveOverride;  // 0x0770
    UAnimationAsset * CurrentAsset;  // 0x07C0
    FAnimNode_SingleNode SingleNode;  // 0x07C8
    FVector BlendSpaceInput;  // 0x07F8
    TArray<FBlendSampleData,TSizedDefaultAllocator<32> > BlendSampleData;  // 0x0808
    FBlendFilter BlendFilter;  // 0x0818
    FSlotNodeWeightInfo WeightInfo;  // 0x0890
    float CurrentTime;  // 0x089C
    FMarkerTickRecord MarkerTickRecord;  // 0x08A0
    float PlayRate;  // 0x08B0
    bool bLooping;  // 0x08B4
    bool bPlaying;  // 0x08B5
    bool bReverse;  // 0x08B6
};
