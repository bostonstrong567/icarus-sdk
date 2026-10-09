// /Script/Engine.World
// Derives from: UObject
// size 0x798, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

UCLASS(Config=Engine)
class UWorld : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient) ULevel* PersistentLevel;  // 0x0030, size 0x8
    UPROPERTY(Transient) UNetDriver* NetDriver;  // 0x0038, size 0x8
    UPROPERTY(Transient, Instanced) ULineBatchComponent* LineBatcher;  // 0x0040, size 0x8
    UPROPERTY(Transient, Instanced) ULineBatchComponent* PersistentLineBatcher;  // 0x0048, size 0x8
    UPROPERTY(Transient, Instanced) ULineBatchComponent* ForegroundLineBatcher;  // 0x0050, size 0x8
    UPROPERTY(Transient) AGameNetworkManager* NetworkManager;  // 0x0058, size 0x8
    UPROPERTY(Transient) UPhysicsCollisionHandler* PhysicsCollisionHandler;  // 0x0060, size 0x8
    UPROPERTY(Transient) TArray<UObject*> ExtraReferencedObjects;  // 0x0068, size 0x10
    UPROPERTY(Transient) TArray<UObject*> PerModuleDataObjects;  // 0x0078, size 0x10
    UPROPERTY() FString StreamingLevelsPrefix;  // 0x00C0, size 0x10
    UPROPERTY() UDemoNetDriver* DemoNetDriver;  // 0x00E0, size 0x8
    UPROPERTY() AParticleEventManager* MyParticleEventManager;  // 0x00E8, size 0x8
    TArray<FVector,TSizedDefaultAllocator<32> > ViewLocationsRenderedLastFrame;  // 0x00F8, not reflected
    TEnumAsByte<enum ERHIFeatureLevel::Type> FeatureLevel;  // 0x0108, not reflected
    TEnumAsByte<enum ETickingGroup> TickGroup;  // 0x0109, not reflected
    TEnumAsByte<enum EWorldType::Type> WorldType;  // 0x010A, not reflected
    uint8 : 1 bInTick;  // 0x010B, not reflected
    uint8 : 1 bIsBuilt;  // 0x010B, not reflected
    uint8 : 1 bIsLevelStreamingFrozen;  // 0x010B, not reflected
    uint8 : 1 bIsWorldInitialized;  // 0x010B, not reflected
    uint8 : 1 bPostTickComponentUpdate;  // 0x010B, not reflected
    uint8 : 1 bTickNewlySpawned;  // 0x010B, not reflected
    uint8 : 1 bTriggerPostLoadMap;  // 0x010B, not reflected
    uint8 : 1 bWorldWasLoadedThisTick;  // 0x010B, not reflected
    uint8 : 1 bActorsInitialized;  // 0x010C, not reflected
    uint8 : 1 bAggressiveLOD;  // 0x010C, not reflected
    uint8 : 1 bDoDelayedUpdateCullDistanceVolumes;  // 0x010C, not reflected
    uint8 : 1 bDropDetail;  // 0x010C, not reflected
    uint8 : 1 bIsDefaultLevel;  // 0x010C, not reflected
    uint8 : 1 bIsRunningConstructionScript;  // 0x010C, not reflected
    uint8 : 1 bRequestedBlockOnAsyncLoading;  // 0x010C, not reflected
    uint8 : 1 bShouldSimulatePhysics;  // 0x010C, not reflected
    uint8 : 1 bBegunPlay;  // 0x010D, not reflected
    uint8 : 1 bDebugPauseExecution;  // 0x010D, not reflected
    uint8 : 1 bIsTearingDown;  // 0x010D, not reflected
    uint8 : 1 bKismetScriptError;  // 0x010D, not reflected
    uint8 : 1 bMatchStarted;  // 0x010D, not reflected
    uint8 : 1 bPlayersOnly;  // 0x010D, not reflected
    uint8 : 1 bPlayersOnlyPending;  // 0x010D, not reflected
    uint8 : 1 bStartup;  // 0x010D, not reflected
    uint8 : 1 bAllowAudioPlayback;  // 0x010E, not reflected
    uint8 : 1 bIsCameraMoveableWhenPaused;  // 0x010E, not reflected
    UPROPERTY(Transient) uint8 bAreConstraintsDirty : 1;  // 0x010E, mask 0x04
    FAudioDeviceHandle AudioDeviceHandle;  // 0x0160, not reflected
    FSceneInterface * Scene;  // 0x01A8, not reflected
    UPROPERTY(Transient, Instanced) UPhysicsFieldComponent* PhysicsField;  // 0x01F8, size 0x8
    FURL URL;  // 0x0480, not reflected
    FFXSystemInterface * FXSystem;  // 0x04E8, not reflected
    FTickTaskLevel * TickTaskLevel;  // 0x04F0, not reflected
    FStartPhysicsTickFunction StartPhysicsTickFunction;  // 0x04F8, not reflected
    FEndPhysicsTickFunction EndPhysicsTickFunction;  // 0x0528, not reflected
    int32 PlayerNum;  // 0x0558, not reflected
    int32 StreamingVolumeUpdateDelay;  // 0x055C, not reflected
    UWorld::FOnBeginPostProcessSettings OnBeginPostProcessSettings;  // 0x0560, not reflected
    TArray<IInterface_PostProcessVolume *,TSizedDefaultAllocator<32> > PostProcessVolumes;  // 0x0578, not reflected
    TArray<AAudioVolume *,TSizedDefaultAllocator<32> > AudioVolumes;  // 0x0588, not reflected
    double LastTimeUnbuiltLightingWasEncountered;  // 0x0598, not reflected
    float TimeSeconds;  // 0x05A0, not reflected
    float UnpausedTimeSeconds;  // 0x05A4, not reflected
    float RealTimeSeconds;  // 0x05A8, not reflected
    float AudioTimeSeconds;  // 0x05AC, not reflected
    float DeltaTimeSeconds;  // 0x05B0, not reflected
    float PauseDelay;  // 0x05B4, not reflected
    FIntVector OriginLocation;  // 0x05B8, not reflected
    FIntVector RequestedOriginLocation;  // 0x05C4, not reflected
    FVector OriginOffsetThisFrame;  // 0x05D0, not reflected
    float NextSwitchCountdown;  // 0x05DC, not reflected
    UPROPERTY() UWorldComposition* WorldComposition;  // 0x05E0, size 0x8
    EFlushLevelStreamingType FlushLevelStreamingType;  // 0x05E8, not reflected
    TEnumAsByte<enum ETravelType> NextTravelType;  // 0x05E9, not reflected
    FString NextURL;  // 0x05F0, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > PreparingLevelNames;  // 0x0600, not reflected
    FName CommittedPersistentLevelName;  // 0x0610, not reflected
    FWorldInGamePerformanceTrackers * PerfTrackers;  // 0x0620, not reflected
    FParticlePerfStats * ParticlePerfStats;  // 0x0628, not reflected
    TMulticastDelegate<void __cdecl(UWorld::FActorsInitializedParams const &),FDefaultDelegateUserPolicy> OnActorsInitialized;  // 0x0630, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnWorldBeginPlay;  // 0x0648, not reflected
    UWorld::FOnGameStateSetEvent GameStateSetEvent;  // 0x0660, not reflected
private:
    UPROPERTY(Transient) TArray<ULevelStreaming*> StreamingLevels;  // 0x0088, size 0x10
    UPROPERTY(Transient) FStreamingLevelsToConsider StreamingLevelsToConsider;  // 0x0098, size 0x28
    UPROPERTY(Transient) ULevel* CurrentLevelPendingVisibility;  // 0x00D0, size 0x8
    UPROPERTY(Transient) ULevel* CurrentLevelPendingInvisibility;  // 0x00D8, size 0x8
    UPROPERTY(Transient) APhysicsVolume* DefaultPhysicsVolume;  // 0x00F0, size 0x8
    uint8 : 1 bRequiresHitProxies;  // 0x010E, not reflected
    uint8 : 1 bShouldForceUnloadStreamingLevels;  // 0x010E, not reflected
    uint8 : 1 bShouldForceVisibleStreamingLevels;  // 0x010E, not reflected
    uint8 : 1 bShouldTick;  // 0x010E, not reflected
    uint8 : 1 bStreamingDataDirty;  // 0x010E, not reflected
    uint8 : 1 bMaterialParameterCollectionInstanceNeedsDeferredUpdate;  // 0x010F, not reflected
    UPROPERTY(Transient) UNavigationSystemBase* NavigationSystem;  // 0x0110, size 0x8
    UPROPERTY(Transient) AGameModeBase* AuthorityGameMode;  // 0x0118, size 0x8
    UPROPERTY(Transient) AGameStateBase* GameState;  // 0x0120, size 0x8
    UPROPERTY(Transient) UAISystemBase* AISystem;  // 0x0128, size 0x8
    UPROPERTY(Transient) UAvoidanceManager* AvoidanceManager;  // 0x0130, size 0x8
    UPROPERTY(Transient) TArray<ULevel*> Levels;  // 0x0138, size 0x10
    UPROPERTY(Transient) TArray<FLevelCollection> LevelCollections;  // 0x0148, size 0x10
    int32 ActiveLevelCollectionIndex;  // 0x0158, not reflected
    FDelegateHandle AudioDeviceDestroyedHandle;  // 0x0178, not reflected
    UPROPERTY(Transient) UGameInstance* OwningGameInstance;  // 0x0180, size 0x8
    UPROPERTY(Transient) TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances;  // 0x0188, size 0x10
    UPROPERTY(Transient) UCanvas* CanvasForRenderingToTarget;  // 0x0198, size 0x8
    UPROPERTY(Transient) UCanvas* CanvasForDrawMaterialToRenderTarget;  // 0x01A0, size 0x8
    TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ControllerList;  // 0x01B0, not reflected
    TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PlayerControllerList;  // 0x01C0, not reflected
    TArray<TWeakObjectPtr<ACameraActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > AutoCameraActorList;  // 0x01D0, not reflected
    TArray<TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr>,TSizedDefaultAllocator<32> > NonDefaultPhysicsVolumeList;  // 0x01E0, not reflected
    FPhysScene_PhysX * PhysicsScene;  // 0x01F0, not reflected
    UPROPERTY(Transient) TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync;  // 0x0200, size 0x50
    UPROPERTY(Transient) TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;  // 0x0250, size 0x10
    UPROPERTY(Transient) TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;  // 0x0260, size 0x10
    FWorldAsyncTraceState AsyncTraceState;  // 0x0270, not reflected
    TMulticastDelegate<void __cdecl(AActor *),FDefaultDelegateUserPolicy> OnActorSpawned;  // 0x0338, not reflected
    TMulticastDelegate<void __cdecl(AActor *),FDefaultDelegateUserPolicy> OnActorPreSpawnInitialization;  // 0x0350, not reflected
    FTimerManager * TimerManager;  // 0x0368, not reflected
    FLatentActionManager LatentActionManager;  // 0x0370, not reflected
    double BuildStreamingDataTimer;  // 0x03D0, not reflected
    UWorld::FOnNetTickEvent TickDispatchEvent;  // 0x03D8, not reflected
    UWorld::FOnTickFlushEvent PostTickDispatchEvent;  // 0x03F0, not reflected
    UWorld::FOnNetTickEvent TickFlushEvent;  // 0x0408, not reflected
    UWorld::FOnTickFlushEvent PostTickFlushEvent;  // 0x0420, not reflected
    UWorld::FOnLevelsChangedEvent LevelsChangedEvent;  // 0x0438, not reflected
    UWorld::FOnBeginTearingDownEvent BeginTearingDownEvent;  // 0x0450, not reflected
    TMulticastDelegate<void __cdecl(float),FDefaultDelegateUserPolicy> MovieSceneSequenceTick;  // 0x0468, not reflected
    uint16 NumStreamingLevelsBeingLoaded;  // 0x05EA, not reflected
    uint32 : 1 bMarkedObjectsPendingKill;  // 0x0618, not reflected
    uint32 CleanupWorldTag;  // 0x061C, not reflected
    UPROPERTY() FWorldPSCPool PSCPool;  // 0x0678, size 0x58
    FSubsystemCollection<UWorldSubsystem> SubsystemCollection;  // 0x06D0, not reflected
public:
    UFUNCTION() void HandleTimelineScrubbed();
    UFUNCTION(BlueprintCallable) AWorldSettings* K2_GetWorldSettings();  // parameters 0x8

    // Virtual functions that start here:
    //   GetAddressURL, GetLocalURL, ServerTravel, UpdateConstraintActors
};
