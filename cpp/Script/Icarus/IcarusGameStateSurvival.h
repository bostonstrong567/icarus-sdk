// /Script/Icarus.IcarusGameStateSurvival
// Derives from: AIcarusGameStateBase > AGameState > AGameStateBase > AInfo > AActor > UObject
// size 0x5D0, declared in Icarus/Source/Icarus/Systems/IcarusGameStateSurvival.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusGameStateSurvival : public AIcarusGameStateBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UWeatherManagerComponent* WeatherManager;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UAuraManagerComponent* AuraManager;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<AQuestManager> QuestManagerClass;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AQuestManager* QuestManager;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TSubclassOf<AWorldTalentManager> WorldTalentManagerClass;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AWorldTalentManager* WorldTalentManager;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ARadiationManager* RadiationManager;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AInventoryContainerManager* InventoryContainerManager;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) APlayerHistoryTracker* PlayerHistoryTracker;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* TimeOfDayEnumCurve;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable) FOnQuestManagerSet OnQuestManagerSet;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable) FOnWorldTalentManagerSet OnWorldTalentManagerSet;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DebugLogging;  // 0x0339, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool GOAPDebugging;  // 0x033A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bThermalComponentDebugging;  // 0x033B, size 0x1
    UPROPERTY(Replicated, BlueprintReadWrite) int32 GlobalEnvTempModifier;  // 0x033C, size 0x4
    FThermalComponentsUpdatedSignature OnThermalComponentsUpdated;  // 0x0340, not reflected
    UPROPERTY(BlueprintAssignable) FSeedInitialisedSignature OnSeedInitialised;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 Seed;  // 0x0360, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) bool bSeedInitialised;  // 0x0364, size 0x1
    UPROPERTY(Replicated, BlueprintReadWrite) AFLOD* FLOD;  // 0x0368, size 0x8
    UPROPERTY(Replicated, BlueprintReadWrite) ADisasterController* DisasterController;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) float TimeOfDay;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 SecondsPerGameDay;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, Replicated) int32 ProspectDurationSec;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 DynamicQuestSeed;  // 0x0384, size 0x4
    UPROPERTY(BlueprintAssignable) FOnUITimeUpdated OnUITimeUpdated;  // 0x0388, size 0x10
    UPROPERTY(Replicated) float ReplicatedLastSessionProspectGameTime;  // 0x0398, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing) TArray<FSessionFlagsRowHandle> SessionFlags;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) bool bIsOpenWorldProspect;  // 0x0460, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) bool bIsOutpostProspect;  // 0x0461, size 0x1
    UPROPERTY(BlueprintAssignable) FRepopulateDynamicQuestsSignature OnRepopulateDynamicQuests;  // 0x0468, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FTimeLockedMissionInfo> LockedMissions;  // 0x0478, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLockedMissionsUpdated OnLockedMissionsUpdated;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FNetworkingStatus NetworkingStatus;  // 0x0540, size 0x60
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float ReplicatedTimeBetweenSaves;  // 0x05A0, size 0x4
    UPROPERTY(BlueprintAssignable) FOnMeteorsIncoming OnMeteorsIncoming;  // 0x05B0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 ServerFps;  // 0x05C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* RadiationStrengthCurve;  // 0x05C8, size 0x8
protected:
    UPROPERTY(Replicated) FGlobalCheatData GlobalCheatData;  // 0x039C, size 0x3
    UPROPERTY() TMap<FString, int32> PreviouslyAssignedPlayerColors;  // 0x03A0, size 0x50
    int32 PlayerColorIndex;  // 0x03F0, not reflected
    UPROPERTY() UGameplayTexture* TemperatureMap;  // 0x03F8, size 0x8
    UPROPERTY() FVector2D TemperatureMapRange;  // 0x0400, size 0x8
    UPROPERTY() UGameplayTexture* BiomeMap;  // 0x0408, size 0x8
    UPROPERTY() UGameplayTexture* BoundsMap;  // 0x0410, size 0x8
    UPROPERTY() UGameplayTexture* BoundsOverrideMap;  // 0x0418, size 0x8
    UPROPERTY() FText UITimeText;  // 0x0420, size 0x18
private:
    TArray<TWeakObjectPtr<AVoxelResource,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PendingVoxelResourceInits;  // 0x0320, not reflected
    FTimerHandle PendingVoxelInitsTimerHandle;  // 0x0330, not reflected
    bool bHasQueuedDeferredVoxelInit;  // 0x0338, not reflected
    UPROPERTY() TArray<UThermalComponent*> ThermalComponents;  // 0x0438, size 0x10
    UPROPERTY(Replicated) int32 LevelTimeElapsedSec;  // 0x0448, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing) FProspectInfo ReplicatedActiveProspect;  // 0x0498, size 0xA0
    bool bHasDoneFirstLockedMissionsUpdate;  // 0x0538, not reflected
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) FVector2D MeteorDirection;  // 0x05A4, size 0x8
public:
    UFUNCTION(BlueprintCallable) void DeregisterThermalComponent(UThermalComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GenerateResourceTypeForVoxelActor(AVoxelResource* VoxelResourceActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLevelTimeElapsedSec() const;  // parameters 0x4
    UFUNCTION() int32 GetNewPlayerColor();  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetPlayerColorForPlayerID(FString PlayerID);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetProspectDurationSec() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReplicatedProspectGameTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSessionRemainingSec() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTemperatureEffectAtLocation(FVector WorldLocation, AActor* Querier) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetUITimeOfDay() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool HasSessionFlag(const FSessionFlagsRowHandle& Flag);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool IsInLastMomentsOfSession();  // parameters 0x1
    UFUNCTION() void OnRep_LockedMissions(TArray<FTimeLockedMissionInfo> OldValues);  // parameters 0x10
    UFUNCTION() void OnRep_MeteorDirection();
    UFUNCTION() void OnRep_ReplicatedActiveProspect();
    UFUNCTION() void OnRep_Seed();
    UFUNCTION() void OnRep_SessionFlags();
    UFUNCTION() void OnRep_TimeOfDay();
    UFUNCTION(BlueprintNativeEvent) void QuestCleanup();
    UFUNCTION(BlueprintCallable) void RegisterThermalComponent(UThermalComponent* NewComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RequestRepopulateDynamicQuests();
    UFUNCTION() void ServerUpdateActiveProspect(const FProspectInfo& InProspectInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void SetMeteorsIncoming(const FVector& Direction);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetSeed(int32 NewSeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetSessionFlag(const FSessionFlagsRowHandle& Flag, bool State);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SpawnFloatingDamageNumbers(AActor* Actor, const FIcarusDamagePacket& DamagePacket);  // parameters 0xE0
    UFUNCTION() void TrySetFixedSeed();
    UFUNCTION(BlueprintCallable) void UpdateDynamicQuestSeed(int32 NewSeed);  // parameters 0x4
    UFUNCTION() void UpdateIsOpenWorldProspect();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void UpdateProspectDifficulty(const EMissionDifficulty& NewDifficulty);  // parameters 0x1
    UFUNCTION() void UpdateReplicatedSaveFrequency(float Value);  // parameters 0x4

    // Virtual functions that start here:
    //   IsInLastMomentsOfSession_Implementation, QuestCleanup_Implementation
    //   SpawnFloatingDamageNumbers_Implementation
};
