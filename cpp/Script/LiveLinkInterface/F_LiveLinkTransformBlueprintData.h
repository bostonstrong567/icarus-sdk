// /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
// size 0xF0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkTransformTypes.h

USTRUCT()
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkTransformStaticData StaticData;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkTransformFrameData FrameData;  // 0x0020, size 0xD0
};
