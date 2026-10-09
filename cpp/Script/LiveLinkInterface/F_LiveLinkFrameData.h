// /Script/LiveLinkInterface.LiveLinkFrameData
// size 0x90, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkFrameData
{
public:
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0000, size 0x10
    UPROPERTY() TArray<FLiveLinkCurveElement> CurveElements;  // 0x0010, size 0x10
    UPROPERTY() FLiveLinkWorldTime WorldTime;  // 0x0020, size 0x10
    UPROPERTY() FLiveLinkMetaData MetaData;  // 0x0030, size 0x60
};
