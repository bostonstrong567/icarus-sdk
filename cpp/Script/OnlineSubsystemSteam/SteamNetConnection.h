// /Script/OnlineSubsystemSteam.SteamNetConnection
// Derives from: UIpConnection > UNetConnection > UPlayer > UObject
// size 0x1C50, declared in Engine/Plugins/Online/OnlineSubsystemSteam/Source/Classes/SteamNetConnection.h

UCLASS(Transient, Config=Engine)
class USteamNetConnection : public UIpConnection
{
public:
    UPROPERTY() bool bIsPassthrough;  // 0x1C48, size 0x1
};
