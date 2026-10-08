// /Script/UdpMessaging.EUdpMessageFormat
UENUM()
enum class EUdpMessageFormat : uint8
{
    None = 0,
    Json = 1,
    TaggedProperty = 2,
    CborPlatformEndianness = 3,
    CborStandardEndianness = 4,
};
