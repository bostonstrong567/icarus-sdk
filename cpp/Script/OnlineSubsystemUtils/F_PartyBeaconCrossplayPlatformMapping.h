// /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
// size 0x20, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/PartyBeaconState.h

USTRUCT()
struct FPartyBeaconCrossplayPlatformMapping
{
public:
    UPROPERTY() FString PlatformName;  // 0x0000, size 0x10
    UPROPERTY() FString PlatformType;  // 0x0010, size 0x10
};
