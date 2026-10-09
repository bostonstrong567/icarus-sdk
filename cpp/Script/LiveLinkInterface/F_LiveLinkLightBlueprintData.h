// /Script/LiveLinkInterface.LiveLinkLightBlueprintData
// size 0x130, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkLightTypes.h

USTRUCT()
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkLightStaticData StaticData;  // 0x0008, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkLightFrameData FrameData;  // 0x0030, size 0x100
};
