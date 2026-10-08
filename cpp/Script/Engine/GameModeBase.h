// /Script/Engine.GameModeBase
// Derives from: AInfo > AActor > UObject
// size 0x2C0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameModeBase.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AGameModeBase : public AInfo
{
public:
    UPROPERTY(BlueprintReadOnly) FString OptionsString;  // 0x0220, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AGameSession> GameSessionClass;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AGameStateBase> GameStateClass;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<APlayerController> PlayerControllerClass;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<APlayerState> PlayerStateClass;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AHUD> HUDClass;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<APawn> DefaultPawnClass;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<ASpectatorPawn> SpectatorClass;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<APlayerController> ReplaySpectatorPlayerControllerClass;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AServerStatReplicator> ServerStatReplicatorClass;  // 0x0270, size 0x8
    UPROPERTY(Transient) AGameSession* GameSession;  // 0x0278, size 0x8
    UPROPERTY(Transient) AGameStateBase* GameState;  // 0x0280, size 0x8
    UPROPERTY(Transient) AServerStatReplicator* ServerStatReplicator;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere) FText DefaultPlayerName;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseSeamlessTravel : 1;  // 0x02A8, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bStartPlayersAsSpectators : 1;  // 0x02A8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPauseable : 1;  // 0x02A8, mask 0x04

    // Not reflected: the engine's scripting cannot see these.
    TArray<TDelegate<bool __cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > Pausers;  // 0x02B0, protected

    UFUNCTION(BlueprintNativeEvent) bool CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ChangeName(AController* Controller, FString NewName, bool bNameChange);  // parameters 0x19
    UFUNCTION(BlueprintNativeEvent) AActor* ChoosePlayerStart(AController* Player);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) AActor* FindPlayerStart(AController* Player, FString IncomingName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) TSubclassOf<UObject> GetDefaultPawnClassForController(AController* InController);  // parameters 0x10
    UFUNCTION(BlueprintCallable) int32 GetNumPlayers();  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetNumSpectators();  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void HandleStartingNewPlayer(APlayerController* NewPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMatchEnded() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMatchStarted() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void InitStartSpot(AActor* StartSpot, AController* NewPlayer);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void InitializeHUDForPlayer(APlayerController* NewPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* K2_FindPlayerStart(AController* Player, FString IncomingName);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void K2_OnChangeName(AController* Other, FString NewName, bool bNameChange);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void K2_OnLogout(AController* ExitingController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnRestartPlayer(AController* NewPlayer);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void K2_PostLogin(APlayerController* NewPlayer);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) bool MustSpectate(APlayerController* NewPlayerController) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool PlayerCanRestart(APlayerController* Player);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ResetLevel();
    UFUNCTION(BlueprintCallable) void RestartPlayer(AController* NewPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RestartPlayerAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void ReturnToMainMenuHost();
    UFUNCTION(BlueprintNativeEvent) bool ShouldReset(AActor* ActorToReset);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);  // parameters 0x48
    UFUNCTION(BlueprintNativeEvent) APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void StartPlay();

    // Virtual functions that start here:
    //   AllowCheats, AllowPausing, CanServerTravel, CanSpectate_Implementation, ChangeName
    //   ChoosePlayerStart_Implementation, ClearPause, FindPlayerStart_Implementation, FinishRestartPlayer
    //   GameWelcomePlayer, GenericPlayerInitialization, GetDefaultPawnClassForController_Implementation
    //   GetGameSessionClass, GetNumPlayers, GetNumSpectators
    //   GetPlayerControllerClassToSpawnForSeamlessTravel, GetSeamlessTravelActorList
    //   HandleSeamlessTravelPlayer, HandleStartingNewPlayer_Implementation, HasMatchEnded, HasMatchStarted
    //   InitGame, InitGameState, InitNewPlayer, InitSeamlessTravelPlayer, InitStartSpot_Implementation
    //   InitializeHUDForPlayer_Implementation, IsHandlingReplays, IsPaused, Login, Logout
    //   MustSpectate_Implementation, PlayerCanRestart_Implementation, PostLogin, PostSeamlessTravel
    //   PreLogin, ProcessClientTravel, ProcessServerTravel, ReplicateStreamingStatus, ResetLevel
    //   RestartPlayer, RestartPlayerAtPlayerStart, RestartPlayerAtTransform, ReturnToMainMenuHost, SetPause
    //   SetPlayerDefaults, ShouldReset_Implementation, ShouldSpawnAtStartSpot, ShouldStartInCinematicMode
    //   SpawnDefaultPawnAtTransform_Implementation, SpawnDefaultPawnFor_Implementation
    //   SpawnPlayerController, SpawnPlayerControllerCommon, SpawnPlayerFromSimulate
    //   SpawnReplayPlayerController, StartPlay, StartToLeaveMap, SwapPlayerControllers
    //   UpdateGameplayMuteList
};
