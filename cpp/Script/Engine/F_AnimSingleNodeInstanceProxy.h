// /Script/Engine.AnimSingleNodeInstanceProxy
// size 0x8C0, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimSingleNodeInstanceProxy.h

USTRUCT()
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
protected:
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > PreviewCurveOverride;  // 0x0770, not reflected
    UAnimationAsset * CurrentAsset;  // 0x07C0, not reflected
    FAnimNode_SingleNode SingleNode;  // 0x07C8, not reflected
private:
    FVector BlendSpaceInput;  // 0x07F8, not reflected
    TArray<FBlendSampleData,TSizedDefaultAllocator<32> > BlendSampleData;  // 0x0808, not reflected
    FBlendFilter BlendFilter;  // 0x0818, not reflected
    FSlotNodeWeightInfo WeightInfo;  // 0x0890, not reflected
    float CurrentTime;  // 0x089C, not reflected
    FMarkerTickRecord MarkerTickRecord;  // 0x08A0, not reflected
    float PlayRate;  // 0x08B0, not reflected
    bool bLooping;  // 0x08B4, not reflected
    bool bPlaying;  // 0x08B5, not reflected
    bool bReverse;  // 0x08B6, not reflected
};
