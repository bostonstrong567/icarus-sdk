// /Script/OnlineSubsystemSteam.SteamNetDriver
// Derives from: UIpNetDriver > UNetDriver > UObject
// size 0x7D8, declared in Engine/Plugins/Online/OnlineSubsystemSteam/Source/Classes/SteamNetDriver.h

UCLASS(Transient, Config=Engine)
class USteamNetDriver : public UIpNetDriver
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bIsPassthrough;  // 0x07D0
};
