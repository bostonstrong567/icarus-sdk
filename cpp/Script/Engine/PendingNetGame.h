// /Script/Engine.PendingNetGame
// Derives from: UObject
// size 0xC0, declared in Engine/Source/Runtime/Engine/Classes/Engine/PendingNetGame.h

UCLASS(Transient)
class UPendingNetGame : public UObject
{
public:
    UPROPERTY() UNetDriver* NetDriver;  // 0x0030, size 0x8
    UPROPERTY() UDemoNetDriver* DemoNetDriver;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FURL URL;  // 0x0040
    bool bSuccessfullyConnected;  // 0x00A8
    bool bSentJoinRequest;  // 0x00A9
    FString ConnectionError;  // 0x00B0

    // Virtual functions that start here:
    //   GetNetDriver, LoadMapCompleted, SendJoin, Tick
};
