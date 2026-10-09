// /Script/LiveLinkInterface.LiveLinkBaseFrameData
// size 0xA0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkBaseFrameData
{
public:
    UPROPERTY(EditAnywhere) FLiveLinkWorldTime WorldTime;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkMetaData MetaData;  // 0x0010, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> PropertyValues;  // 0x0070, size 0x10
    FLiveLinkTime ArrivalTime;  // 0x0080, not reflected
    int32 FrameId;  // 0x0098, not reflected
};
