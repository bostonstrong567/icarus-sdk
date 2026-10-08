// /Script/Engine.BlendSampleData
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FBlendSampleData
{
    UPROPERTY() int32 SampleDataIndex;  // 0x0000, size 0x4
    UPROPERTY() UAnimSequence* Animation;  // 0x0008, size 0x8
    UPROPERTY() float TotalWeight;  // 0x0010, size 0x4
    UPROPERTY() float Time;  // 0x0014, size 0x4
    UPROPERTY() float PreviousTime;  // 0x0018, size 0x4
    UPROPERTY() float SamplePlayRate;  // 0x001C, size 0x4

    // Not reflected:
    FMarkerTickRecord MarkerTickRecord;  // 0x0020
    TArray<float,TSizedDefaultAllocator<32> > PerBoneBlendData;  // 0x0030
};
