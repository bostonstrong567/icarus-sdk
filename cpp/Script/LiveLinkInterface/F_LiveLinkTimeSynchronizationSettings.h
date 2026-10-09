// /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// size 0xC, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkSourceSettings.h

USTRUCT()
struct FLiveLinkTimeSynchronizationSettings
{
public:
    UPROPERTY(EditAnywhere) FFrameRate FrameRate;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FFrameNumber FrameOffset;  // 0x0008, size 0x4
};
