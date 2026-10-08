// /Script/OnlineSubsystemEOS.EOSNetDriver
// Derives from: UIpNetDriver > UNetDriver > UObject
// size 0x7D8, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Classes/EOSNetDriver.h

UCLASS(Transient, Config=Engine)
class UEOSNetDriver : public UIpNetDriver
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bIsPassthrough;  // 0x07D0
};
