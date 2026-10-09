// /Script/Icarus.ConnectedPlayers
// Derives from: UActorComponent > UObject
// size 0xF8, declared in Icarus/Source/Icarus/Subsystems/World/ConnectedPlayers.h

UCLASS(Config=Engine)
class UConnectedPlayers : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FConnectedPlayerInitialised OnConnectedPlayerInitialised;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FConnectedPlayerRemoved OnConnectedPlayerRemoved;  // 0x00C0, size 0x10
private:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) TArray<UReplicatedConnectedPlayer*> ReplicatedConnectedPlayers;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere) TArray<FConnectedPlayer> CachedInitialisedConnectedPlayers;  // 0x00E0, size 0x10
    FTimerHandle CheckUninitialisedConnectedPlayersHandle;  // 0x00F0, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetConnectedPlayerById(FString PlayerId, int32 ChrSlot, FConnectedPlayer& Player) const;  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FConnectedPlayer> GetInitialisedConnectedPlayers() const;  // parameters 0x10
    UFUNCTION() void OnRep_ConnectedPlayers();
    UFUNCTION() bool ServerTryCompletePlayerInitialisation(AIcarusPlayerController* Player);  // parameters 0x9
};
