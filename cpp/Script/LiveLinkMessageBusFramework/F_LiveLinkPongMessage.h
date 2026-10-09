// /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
// size 0x40, declared in Engine/Source/Runtime/LiveLinkMessageBusFramework/Public/LiveLinkMessages.h

USTRUCT()
struct FLiveLinkPongMessage
{
public:
    UPROPERTY() FString ProviderName;  // 0x0000, size 0x10
    UPROPERTY() FString MachineName;  // 0x0010, size 0x10
    UPROPERTY() FGuid PollRequest;  // 0x0020, size 0x10
    UPROPERTY() int32 LiveLinkVersion;  // 0x0030, size 0x4
    UPROPERTY() double CreationPlatformTime;  // 0x0038, size 0x8
};
