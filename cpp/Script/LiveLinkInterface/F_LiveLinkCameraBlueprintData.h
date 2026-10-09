// /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
// size 0x120, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkCameraTypes.h

USTRUCT()
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkCameraStaticData StaticData;  // 0x0008, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkCameraFrameData FrameData;  // 0x0030, size 0xF0
};
