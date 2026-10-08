// /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage
// size 0x14, declared in Engine/Source/Runtime/LiveLinkMessageBusFramework/Public/LiveLinkMessages.h

USTRUCT()
struct FLiveLinkPingMessage
{
    UPROPERTY() FGuid PollRequest;  // 0x0000, size 0x10
    UPROPERTY() int32 LiveLinkVersion;  // 0x0010, size 0x4
};
