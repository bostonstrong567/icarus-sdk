// /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
// size 0xB8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/LiveLink/LiveLinkBlueprintLibrary.generated.h

USTRUCT()
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkBaseStaticData StaticData;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkBaseFrameData FrameData;  // 0x0018, size 0xA0
};
