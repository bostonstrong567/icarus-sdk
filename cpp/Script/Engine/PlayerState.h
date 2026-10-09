// /Script/Engine.PlayerState
// Derives from: AInfo > AActor > UObject
// size 0x320, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerState.h

UCLASS(NotPlaceable, Config=Engine)
class APlayerState : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) float Score;  // 0x0220, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) int32 PlayerId;  // 0x0224, size 0x4
    UPROPERTY(Replicated, BlueprintReadOnly) uint8 Ping;  // 0x0228, size 0x1
    uint8 : 1 bHasBeenWelcomed;  // 0x022A, not reflected
    uint8 : 1 bUseCustomPlayerNames;  // 0x022A, not reflected
    UPROPERTY(Replicated, BlueprintReadOnly) uint8 bIsSpectator : 1;  // 0x022A, mask 0x02
    UPROPERTY(Replicated) uint8 bOnlySpectator : 1;  // 0x022A, mask 0x04
    UPROPERTY(Replicated, BlueprintReadOnly) uint8 bIsABot : 1;  // 0x022A, mask 0x08
    UPROPERTY(Replicated, ReplicatedUsing) uint8 bIsInactive : 1;  // 0x022A, mask 0x20
    UPROPERTY(Replicated) uint8 bFromPreviousLevel : 1;  // 0x022A, mask 0x40
    UPROPERTY(Replicated) int32 StartTime;  // 0x022C, size 0x4
    UPROPERTY() TSubclassOf<ULocalMessage> EngineMessageClass;  // 0x0230, size 0x8
    float ExactPing;  // 0x0238, not reflected
    float ExactPingV2;  // 0x023C, not reflected
    UPROPERTY() FString SavedNetworkAddress;  // 0x0240, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) FUniqueNetIdRepl UniqueId;  // 0x0250, size 0x28
    FName SessionName;  // 0x0278, not reflected
private:
    uint8 CurPingBucket;  // 0x0229, not reflected
    UPROPERTY(EditAnywhere) uint8 bShouldUpdateReplicatedPing : 1;  // 0x022A, mask 0x01
    UPROPERTY(BlueprintReadOnly) APawn* PawnPrivate;  // 0x0280, size 0x8
    PingAvgData[4] PingBucket;  // 0x0288, not reflected
    PingAvgDataV2[4] PingBucketV2;  // 0x0298, not reflected
    float CurPingBucketTimestamp;  // 0x02F8, not reflected
    UPROPERTY(Replicated, ReplicatedUsing) FString PlayerNamePrivate;  // 0x0300, size 0x10
    FString OldNamePrivate;  // 0x0310, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetPlayerName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOnlyASpectator() const;  // parameters 0x1
    UFUNCTION() void OnRep_PlayerId();
    UFUNCTION() void OnRep_PlayerName();
    UFUNCTION() void OnRep_Score();
    UFUNCTION() void OnRep_UniqueId();
    UFUNCTION() void OnRep_bIsInactive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveCopyProperties(APlayerState* NewPlayerState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveOverrideWith(APlayerState* OldPlayerState);  // parameters 0x8

    // Virtual functions that start here:
    //   ClientInitialize, CopyProperties, Duplicate, GetOldPlayerName, GetPlayerNameCustom
    //   HandleWelcomeMessage, IsPrimaryPlayer, OnDeactivated, OnReactivated, OnRep_PlayerId
    //   OnRep_PlayerName, OnRep_Score, OnRep_UniqueId, OnRep_bIsInactive, OverrideWith, RecalculateAvgPing
    //   RegisterPlayerWithSession, SeamlessTravelTo, SetOldPlayerName, SetPlayerName, SetPlayerNameInternal
    //   SetUniqueId, ShouldBroadCastWelcomeMessage, UnregisterPlayerWithSession, UpdatePing
};
