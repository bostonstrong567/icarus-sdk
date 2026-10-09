// /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// size 0x10, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkTypes.h

USTRUCT()
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
    UPROPERTY() int32 Seconds;  // 0x0000, size 0x4
    UPROPERTY() int32 Frames;  // 0x0004, size 0x4
    UPROPERTY() FLiveLinkFrameRate FrameRate;  // 0x0008, size 0x8
};
