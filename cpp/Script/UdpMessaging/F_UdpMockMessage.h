// /Script/UdpMessaging.UdpMockMessage
// size 0x10, declared in Engine/Plugins/Messaging/UdpMessaging/Source/UdpMessaging/Private/Tests/UdpMessagingTestTypes.h

USTRUCT()
struct FUdpMockMessage
{
public:
    UPROPERTY() TArray<uint8> Data;  // 0x0000, size 0x10
};
