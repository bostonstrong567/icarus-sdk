// /Script/Engine.GameMode
// Derives from: AGameModeBase > AInfo > AActor > UObject
// size 0x308, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameMode.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AGameMode : public AGameModeBase
{
public:
    UPROPERTY(Transient) FName MatchState;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bDelayedStart : 1;  // 0x02C8, mask 0x01
    UPROPERTY(BlueprintReadOnly) int32 NumSpectators;  // 0x02CC, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 NumPlayers;  // 0x02D0, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 NumBots;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinRespawnDelay;  // 0x02D8, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 NumTravellingPlayers;  // 0x02DC, size 0x4
    UPROPERTY() TSubclassOf<ULocalMessage> EngineMessageClass;  // 0x02E0, size 0x8
    UPROPERTY() TArray<APlayerState*> InactivePlayerArray;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere) float InactivePlayerStateLifeSpan;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxInactivePlayers;  // 0x02FC, size 0x4
    UPROPERTY(Config) bool bHandleDedicatedServerReplays;  // 0x0300, size 0x1

    UFUNCTION(BlueprintCallable) void AbortMatch();
    UFUNCTION(BlueprintCallable) void EndMatch();
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetMatchState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMatchInProgress() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void K2_OnSetMatchState(FName NewState);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) bool ReadyToEndMatch();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool ReadyToStartMatch();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RestartGame();
    UFUNCTION(Exec, BlueprintCallable) void Say(FString Msg);  // parameters 0x10
    UFUNCTION(Exec) void SetBandwidthLimit(float AsyncIOBandwidthLimit);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StartMatch();

    // Virtual functions that start here:
    //   AbortMatch, AddInactivePlayer, Broadcast, BroadcastLocalized, EndMatch, FindInactivePlayer
    //   GetDefaultGameClassPath, GetGameModeClass, GetNetworkNumber, GetTravelType, HandleDisconnect
    //   HandleLeavingMap, HandleMatchAborted, HandleMatchHasEnded, HandleMatchHasStarted
    //   HandleMatchIsWaitingToStart, IsMatchInProgress, MatineeCancelled, NotifyPendingConnectionLost
    //   OnMatchStateSet, OverridePlayerState, PostCommitMapChange, PreCommitMapChange
    //   ReadyToEndMatch_Implementation, ReadyToStartMatch_Implementation, RestartGame, Say, SendPlayer
    //   SetBandwidthLimit, SetMatchState, SetSeamlessTravelViewTarget, StartMatch, StartNewPlayer
};
