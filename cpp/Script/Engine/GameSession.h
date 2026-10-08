// /Script/Engine.GameSession
// Derives from: AInfo > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameSession.h

UCLASS(NotPlaceable, Config=Game)
class AGameSession : public AInfo
{
public:
    UPROPERTY(Config) int32 MaxSpectators;  // 0x0220, size 0x4
    UPROPERTY(Config) int32 MaxPlayers;  // 0x0224, size 0x4
    UPROPERTY() int32 MaxPartySize;  // 0x0228, size 0x4
    UPROPERTY(Config) uint8 MaxSplitscreensPerConnection;  // 0x022C, size 0x1
    UPROPERTY(Config) bool bRequiresPushToTalk;  // 0x022D, size 0x1
    UPROPERTY() FName SessionName;  // 0x0230, size 0x8

    // Virtual functions that start here:
    //   AddAdmin, ApproveLogin, AtCapacity, BanPlayer, CanRestartGame, DumpSessionState
    //   GetSessionJoinability, HandleMatchHasEnded, HandleMatchHasStarted, HandleMatchIsWaitingToStart
    //   HandleStartMatchRequest, InitOptions, KickPlayer, NotifyLogout, OnAutoLoginComplete
    //   OnEndSessionComplete, OnStartSessionComplete, PostLogin, PostSeamlessTravel, ProcessAutoLogin
    //   RegisterPlayer, RegisterServer, RegisterServerFailed, RemoveAdmin, RequiresPushToTalk, Restart
    //   ReturnToMainMenuHost, UnregisterPlayer, UnregisterPlayers, UpdateSessionJoinability
};
