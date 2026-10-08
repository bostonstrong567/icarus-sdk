// /Script/Engine.GameStateBase
// Derives from: AInfo > AActor > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameStateBase.h

UCLASS(NotPlaceable, Config=Game)
class AGameStateBase : public AInfo
{
public:
    UPROPERTY(Replicated, ReplicatedUsing, Transient, BlueprintReadOnly) TSubclassOf<AGameModeBase> GameModeClass;  // 0x0220, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) AGameModeBase* AuthorityGameMode;  // 0x0228, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, Transient, BlueprintReadOnly) TSubclassOf<ASpectatorPawn> SpectatorClass;  // 0x0230, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) TArray<APlayerState*> PlayerArray;  // 0x0238, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, Transient) bool bReplicatedHasBegunPlay;  // 0x0248, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, Transient) float ReplicatedWorldTimeSeconds;  // 0x024C, size 0x4
    UPROPERTY(Transient) float ServerWorldTimeSecondsDelta;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere) float ServerWorldTimeSecondsUpdateFrequency;  // 0x0254, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle TimerHandle_UpdateServerTimeSeconds;  // 0x0258, protected
    double SumServerWorldTimeSecondsDelta;  // 0x0260, protected
    uint32 NumServerWorldTimeSecondsDeltas;  // 0x0268, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayerRespawnDelay(AController* Controller) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayerStartTime(AController* Controller) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetServerWorldTimeSeconds() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasBegunPlay() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMatchEnded() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMatchStarted() const;  // parameters 0x1
    UFUNCTION() void OnRep_GameModeClass();
    UFUNCTION() void OnRep_ReplicatedHasBegunPlay();
    UFUNCTION() void OnRep_ReplicatedWorldTimeSeconds();
    UFUNCTION() void OnRep_SpectatorClass();

    // Virtual functions that start here:
    //   AddPlayerState, AsyncPackageLoaded, GetPlayerRespawnDelay, GetPlayerStartTime
    //   GetServerWorldTimeSeconds, HandleBeginPlay, HasBegunPlay, HasMatchEnded, HasMatchStarted
    //   OnRep_GameModeClass, OnRep_ReplicatedHasBegunPlay, OnRep_ReplicatedWorldTimeSeconds
    //   OnRep_SpectatorClass, ReceivedGameModeClass, ReceivedSpectatorClass, RemovePlayerState
    //   SeamlessTravelTransitionCheckpoint, UpdateServerTimeSeconds
};
