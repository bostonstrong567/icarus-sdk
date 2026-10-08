// /Script/OnlineSubsystemEOS.EOSNetConnection
// Derives from: UIpConnection > UNetConnection > UPlayer > UObject
// size 0x1C50, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Classes/EOSNetConnection.h

UCLASS(Transient, Config=Engine)
class UEOSNetConnection : public UIpConnection
{
public:
    UPROPERTY() bool bIsPassthrough;  // 0x1C48, size 0x1
};
