// /Script/Icarus.IcarusGameModeSurvival
// Derives from: AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x718, declared in Icarus/Source/Icarus/IcarusGameModeSurvival.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AIcarusGameModeSurvival : public AIcarusGameModeBase
{
public:
    UPROPERTY() TSet<FString> ApprovedPlayerIDs;  // 0x0338, size 0x50
    UPROPERTY() FDropshipSpawnFound DropshipSpawnFound;  // 0x0388, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPreEndProspectSession OnPreEndProspectSession;  // 0x0398, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo TestProspectInfo;  // 0x03A8, size 0xA0
    UPROPERTY(EditAnywhere) bool bDebugPlayerInitialisationDropships;  // 0x0448, size 0x1
    UPROPERTY(BlueprintReadOnly) EEndProspectSessionContext EndProspectSessionContext;  // 0x0449, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLoadedDeveloperProspect;  // 0x044A, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bForceLastSaveProspectState;  // 0x044B, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bForceUpdateUnrealSession;  // 0x044C, size 0x1
    UPROPERTY(BlueprintReadOnly) float LastProspectSaveStateTime;  // 0x0454, size 0x4
    UPROPERTY(BlueprintReadOnly) float LastProspectHeartbeatTime;  // 0x0458, size 0x4
    UPROPERTY(BlueprintReadOnly) float LastSessionUpdateTime;  // 0x045C, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 UpdateProspectStateFailedCounter;  // 0x0460, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 UpdateUnrealSessionFailedCounter;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere) UIcarusGameStateRecorder* GameStateRecorder;  // 0x0480, size 0x8
    UPROPERTY() UUpdateProspectCallbackProxyGen* UpdateProspectCallbackProxy;  // 0x0488, size 0x8
    UPROPERTY() bool bCurrentUpdateProspectIsSaving;  // 0x0498, size 0x1
    UPROPERTY() UIcarusHostSession* HostSessionCallbackProxy;  // 0x04A0, size 0x8
    UPROPERTY() UIcarusUpdateSession* UpdateSessionCallbackProxy;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UGameModeStateRecorderComponent* GameModeRecorderComponent;  // 0x04B8, size 0x8
    UPROPERTY() UProspectExpiredCallbackProxyGen* ProspectExpiredCallbackProxy;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProspectExpiredShutdownDelayTime;  // 0x04C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ForcedPlayerIndex;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AWeatherController* WeatherController;  // 0x04E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AWeatherController> WeatherControllerClass;  // 0x04F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AWeatherForecastManager* WeatherForecastManager;  // 0x0518, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AWeatherForecastManager> WeatherForecastManagerClass;  // 0x0520, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AMapManagerBase* MapManager;  // 0x0548, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AMapManagerBase> MapManagerClass;  // 0x0550, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AWorldBossManager* WorldBossManager;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AWorldBossManager> WorldBossManagerClass;  // 0x0580, size 0x28
    UPROPERTY() AServerShutdownTimer* ShutdownTimer;  // 0x05B0, size 0x8
    UPROPERTY() APlayerState* DummyPauserPlayerState;  // 0x05C8, size 0x8
    UPROPERTY() TMap<FString, FStoredPlayerItems> StoredPlayerItems;  // 0x05D0, size 0x50
    UPROPERTY() TMap<FString, FPlayerRewardSchedule> PlayerRewards;  // 0x0620, size 0x50
    UPROPERTY() TMap<FMetaCurrencyEnum, int32> TotalSentCurrency;  // 0x0670, size 0x50
    UPROPERTY() TArray<FMissionStatus> MissionHistory;  // 0x06C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMissionHistoryUpdated OnMissionHistoryUpdated;  // 0x06D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSpawnedExoticPlants;  // 0x06E9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NextMeteorShowerTime;  // 0x06EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SecondsBetweenMeteorShowers;  // 0x06F0, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FCharacterLoggedOut OnCharacterLoggedOut;  // 0x0318
    FDelegateHandle OnActorSpawnedHandle;  // 0x0328, protected
    FPlayerInitialisationFailed PlayerInitialisationFailed;  // 0x0330
    float LastSessionProspectGameTime;  // 0x0450, protected
    FTimerHandle UpdateProspectRequestFailedTimout;  // 0x0468, protected
    FTimerHandle UpdateUnrealSessionFailedTimout;  // 0x0478, protected
    FTimerHandle UpdateUnrealSessionTimerHandle;  // 0x0490, protected
    FTimerHandle UpdateNetworkStatusTimer;  // 0x04B0, protected
    FTimerHandle ProspectExpiredShutdownTimer;  // 0x04D0, protected
    int32 ProspectExpiredRetryCount;  // 0x04D8, protected
    float LevelTimeTickAccumulator;  // 0x04DC, protected
    bool bServerIsEmpty;  // 0x05A8, private
    bool bShutdownServerRequested;  // 0x05A9, private
    bool bProspectIsExpired;  // 0x05AA, private
    bool bHasHadAnyPlayers;  // 0x05AB, private
    FTimerHandle EmptyServerStartupTimer;  // 0x05B8, private
    FTimerHandle PlayerPauseTimer;  // 0x05C0, private
    FTimerHandle UpdateLockedMissionsTimer;  // 0x06D0, private
    bool bReturnToLobbyWhenEmpty;  // 0x06E8, private
    bool bHasCurtainRaised;  // 0x06F4, private
    FDeltaTimeBuffer DeltaTimeBuffer;  // 0x06F8, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanLaunchEquipment(const FItemData& Item) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void Cheat_SetLevelTimeElapsedSec(int32 NewTimeElapsed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ClearMissionHistory();
    UFUNCTION(BlueprintCallable) void ClearSpecificMissionHistory(FFactionMissionsRowHandle MissionsRowHandle);  // parameters 0x18
    UFUNCTION() void CompleteRocketSpawnInitialisation(AIcarusRocketSpawnBase* FoundRocketSpawn, AIcarusPlayerControllerSurvival* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CreateAndFillOverflowBag(const FTransform& Transform, const TArray<FItemData>& ItemData, bool bIsGravestone, bool bForceSpawnAtLocation, TSubclassOf<AIcarusActor> ActorOverride);  // parameters 0x50
    UFUNCTION() void DatabaseReloadBegin();
    UFUNCTION(BlueprintNativeEvent) void DatabaseReloadComplete();
    UFUNCTION(BlueprintNativeEvent) bool DoTryReplenishExhaustedExotics();  // parameters 0x1
    UFUNCTION(Exec) void DumpVoxelStates(APawn* Executor);  // parameters 0x8
    UFUNCTION(Exec) void DumpVoxelTarget(APawn* Executor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EndProspectSession(EEndProspectSessionContext Context);  // parameters 0x1
    UFUNCTION() void FinishManagerInit();
    UFUNCTION(BlueprintCallable) void ForceImmediateProspectSave();
    UFUNCTION(BlueprintCallable) void FoundRocketSpawn(AIcarusRocketSpawnBase* FoundRocketSpawn, AIcarusPlayerControllerSurvival* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FMissionReport GenerateMissionReportForPlayer(AIcarusPlayerController* Player) const;  // parameters 0xC8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetBestSpawnGroupIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDropshipSpawnsInGroup(int32 GroupIndex, TArray<AIcarusRocketSpawnBase*>& DropshipSpawns, bool bIncludeAssigned);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) UIcarusGameStateRecorder* GetGameStateRecorder() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLevelTimeElapsedSec() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FMissionStatus> GetMissionHistory() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetProspectGameTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) AIcarusRocketSpawnBase* GetRandomAvailableDropshipSpawnForIndex(int32 GroupIndex, bool bFallbackAnyGroup);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetValidItemsToLaunch(TArray<FItemData> Items, TArray<FLaunchItemReturnInfo>& PerPlayerItemsToReturn, TArray<FItemData>& NonReturnableItems) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasProspectSessionEnded() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsExoticReplenishEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LaunchCurrency(FMetaCurrencyEnum Currency, int32 Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void LaunchEquipment(TArray<FItemData> Items, TArray<FItemData>& RemainingItems);  // parameters 0x20
    UFUNCTION() void NativeRaiseTheCurtain();
    UFUNCTION() void OnActorSpawned(AActor* SpawnedActor) const;  // parameters 0x8
    UFUNCTION() void OnConnectedPlayerInitialisationComplete(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION() void OnHostUnrealSessionFailure(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION() void OnHostUnrealSessionSuccess(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION() void OnMissionAbandoned(FFactionMissionsRowHandle Mission);  // parameters 0x18
    UFUNCTION() void OnMissionComplete(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION() void OnMissionFailed(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION() void OnMissionStarted(FFactionMissionsRowHandle Mission);  // parameters 0x18
    UFUNCTION() void OnPlayerInitialisationFailed(AIcarusPlayerController* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPlayerLeftByDropship(AIcarusPlayerControllerSurvival* Player);  // parameters 0x8
    UFUNCTION() void OnServerStartedEmpty();
    UFUNCTION() void OnUpdateUnrealSessionFailure(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION() void OnUpdateUnrealSessionSuccess(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void RaiseTheCurtain();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ResolveBlockers();
    UFUNCTION(Exec) void ReturnToLobby(APawn* Executor);  // parameters 0x8
    UFUNCTION(Exec) void ReturnToLobbyWhenEmpty(APawn* Executor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SaveBackupProspect();
    UFUNCTION(BlueprintCallable) void SaveDeveloperProspect(FString ProspectFileName);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) bool SetupTestProspectInfo();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldOutpostRestoreFoliageEntity(AActor* FoliageActor, FVector FoliageLocation, float FoliageRadius) const;  // parameters 0x19
    UFUNCTION() void ShutdownAfterProspectExpired();
    UFUNCTION() void ShutdownServer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SpawnOverflowForReturnedItems(const TArray<FItemData>& Items, AActor* AroundActor);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) AActor* SpawnSplineActorFromSavedState(const FTransform& Transform, int32 SplineTypeEnum);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool StartFindingRocketSpawnForPlayer(int32 SelectedGroupIndex, AIcarusPlayerControllerSurvival* Player);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool TryResolveRecorderForOwner(AActor* SpawnedActor, bool bActorSpawned, bool bOnlyUseFastPath) const;  // parameters 0xB
    UFUNCTION() void UpdateAllPlayerRewards();
    UFUNCTION() void UpdateLockedMissions();

    // Virtual functions that start here:
    //   DatabaseReloadComplete_Implementation, IcarusBeginPlay_Implementation
    //   OnPlayerLeftByDropship_Implementation, RaiseTheCurtain_Implementation
    //   SetupTestProspectInfo_Implementation, StartFindingRocketSpawnForPlayer_Implementation
};
