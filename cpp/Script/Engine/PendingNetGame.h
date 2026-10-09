// /Script/Engine.PendingNetGame
// Derives from: UObject
// size 0xC0, declared in Engine/Source/Runtime/Engine/Classes/Engine/PendingNetGame.h

UCLASS(Transient)
class UPendingNetGame : public UObject
{
public:
    UPROPERTY() UNetDriver* NetDriver;  // 0x0030, size 0x8
    UPROPERTY() UDemoNetDriver* DemoNetDriver;  // 0x0038, size 0x8
    FURL URL;  // 0x0040, not reflected
    bool bSuccessfullyConnected;  // 0x00A8, not reflected
    bool bSentJoinRequest;  // 0x00A9, not reflected
    FString ConnectionError;  // 0x00B0, not reflected

    // Virtual functions that start here:
    //   GetNetDriver, LoadMapCompleted, SendJoin, Tick
};
