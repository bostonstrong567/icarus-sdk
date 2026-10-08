// /Script/Engine.World
// Derives from: UObject
// size 0x798, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

UCLASS(Config=Engine)
class UWorld : public UObject
{
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
    UPROPERTY(Transient) TArray<ULevelStreaming*> StreamingLevels;  // 0x0088, size 0x10
    UPROPERTY(Transient) FStreamingLevelsToConsider StreamingLevelsToConsider;  // 0x0098, size 0x28
    UPROPERTY() FString StreamingLevelsPrefix;  // 0x00C0, size 0x10
    UPROPERTY(Transient) ULevel* CurrentLevelPendingVisibility;  // 0x00D0, size 0x8
    UPROPERTY(Transient) ULevel* CurrentLevelPendingInvisibility;  // 0x00D8, size 0x8
    UPROPERTY() UDemoNetDriver* DemoNetDriver;  // 0x00E0, size 0x8
    UPROPERTY() AParticleEventManager* MyParticleEventManager;  // 0x00E8, size 0x8
    UPROPERTY(Transient) APhysicsVolume* DefaultPhysicsVolume;  // 0x00F0, size 0x8
    UPROPERTY(Transient) uint8 bAreConstraintsDirty : 1;  // 0x010E, mask 0x04
    UPROPERTY(Transient) UNavigationSystemBase* NavigationSystem;  // 0x0110, size 0x8
    UPROPERTY(Transient) AGameModeBase* AuthorityGameMode;  // 0x0118, size 0x8
    UPROPERTY(Transient) AGameStateBase* GameState;  // 0x0120, size 0x8
    UPROPERTY(Transient) UAISystemBase* AISystem;  // 0x0128, size 0x8
    UPROPERTY(Transient) UAvoidanceManager* AvoidanceManager;  // 0x0130, size 0x8
    UPROPERTY(Transient) TArray<ULevel*> Levels;  // 0x0138, size 0x10
    UPROPERTY(Transient) TArray<FLevelCollection> LevelCollections;  // 0x0148, size 0x10
    UPROPERTY(Transient) UGameInstance* OwningGameInstance;  // 0x0180, size 0x8
    UPROPERTY(Transient) TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances;  // 0x0188, size 0x10
    UPROPERTY(Transient) UCanvas* CanvasForRenderingToTarget;  // 0x0198, size 0x8
    UPROPERTY(Transient) UCanvas* CanvasForDrawMaterialToRenderTarget;  // 0x01A0, size 0x8
    UPROPERTY(Transient, Instanced) UPhysicsFieldComponent* PhysicsField;  // 0x01F8, size 0x8
    UPROPERTY(Transient) TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync;  // 0x0200, size 0x50
    UPROPERTY(Transient) TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;  // 0x0250, size 0x10
    UPROPERTY(Transient) TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;  // 0x0260, size 0x10
    UPROPERTY() UWorldComposition* WorldComposition;  // 0x05E0, size 0x8
    UPROPERTY() FWorldPSCPool PSCPool;  // 0x0678, size 0x58

    // Not reflected: the engine's scripting cannot see these.
    TArray<FVector,TSizedDefaultAllocator<32> > ViewLocationsRenderedLastFrame;  // 0x00F8
    TEnumAsByte<enum ERHIFeatureLevel::Type> FeatureLevel;  // 0x0108
    TEnumAsByte<enum ETickingGroup> TickGroup;  // 0x0109
    TEnumAsByte<enum EWorldType::Type> WorldType;  // 0x010A
    uint8 : 1 bWorldWasLoadedThisTick;  // 0x010B
    uint8 : 1 bTriggerPostLoadMap;  // 0x010B
    uint8 : 1 bInTick;  // 0x010B
    uint8 : 1 bIsBuilt;  // 0x010B
    uint8 : 1 bTickNewlySpawned;  // 0x010B
    uint8 : 1 bPostTickComponentUpdate;  // 0x010B
    uint8 : 1 bIsWorldInitialized;  // 0x010B
    uint8 : 1 bIsLevelStreamingFrozen;  // 0x010B
    uint8 : 1 bDoDelayedUpdateCullDistanceVolumes;  // 0x010C
    uint8 : 1 bIsRunningConstructionScript;  // 0x010C
    uint8 : 1 bShouldSimulatePhysics;  // 0x010C
    uint8 : 1 bDropDetail;  // 0x010C
    uint8 : 1 bAggressiveLOD;  // 0x010C
    uint8 : 1 bIsDefaultLevel;  // 0x010C
    uint8 : 1 bRequestedBlockOnAsyncLoading;  // 0x010C
    uint8 : 1 bActorsInitialized;  // 0x010C
    uint8 : 1 bBegunPlay;  // 0x010D
    uint8 : 1 bMatchStarted;  // 0x010D
    uint8 : 1 bPlayersOnly;  // 0x010D
    uint8 : 1 bPlayersOnlyPending;  // 0x010D
    uint8 : 1 bStartup;  // 0x010D
    uint8 : 1 bIsTearingDown;  // 0x010D
    uint8 : 1 bKismetScriptError;  // 0x010D
    uint8 : 1 bDebugPauseExecution;  // 0x010D
    uint8 : 1 bIsCameraMoveableWhenPaused;  // 0x010E
    uint8 : 1 bAllowAudioPlayback;  // 0x010E
    uint8 : 1 bRequiresHitProxies;  // 0x010E, private
    uint8 : 1 bShouldTick;  // 0x010E, private
    uint8 : 1 bStreamingDataDirty;  // 0x010E, private
    uint8 : 1 bShouldForceUnloadStreamingLevels;  // 0x010E, private
    uint8 : 1 bShouldForceVisibleStreamingLevels;  // 0x010E, private
    uint8 : 1 bMaterialParameterCollectionInstanceNeedsDeferredUpdate;  // 0x010F, private
    int32 ActiveLevelCollectionIndex;  // 0x0158, private
    FAudioDeviceHandle AudioDeviceHandle;  // 0x0160
    FDelegateHandle AudioDeviceDestroyedHandle;  // 0x0178, private
    FSceneInterface * Scene;  // 0x01A8
    TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32> > ControllerList;  // 0x01B0, private
    TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PlayerControllerList;  // 0x01C0, private
    TArray<TWeakObjectPtr<ACameraActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > AutoCameraActorList;  // 0x01D0, private
    TArray<TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr>,TSizedDefaultAllocator<32> > NonDefaultPhysicsVolumeList;  // 0x01E0, private
    FPhysScene_PhysX * PhysicsScene;  // 0x01F0, private
    FWorldAsyncTraceState AsyncTraceState;  // 0x0270, private
    TMulticastDelegate<void __cdecl(AActor *),FDefaultDelegateUserPolicy> OnActorSpawned;  // 0x0338, private
    TMulticastDelegate<void __cdecl(AActor *),FDefaultDelegateUserPolicy> OnActorPreSpawnInitialization;  // 0x0350, private
    FTimerManager * TimerManager;  // 0x0368, private
    FLatentActionManager LatentActionManager;  // 0x0370, private
    double BuildStreamingDataTimer;  // 0x03D0, private
    UWorld::FOnNetTickEvent TickDispatchEvent;  // 0x03D8, private
    UWorld::FOnTickFlushEvent PostTickDispatchEvent;  // 0x03F0, private
    UWorld::FOnNetTickEvent TickFlushEvent;  // 0x0408, private
    UWorld::FOnTickFlushEvent PostTickFlushEvent;  // 0x0420, private
    UWorld::FOnLevelsChangedEvent LevelsChangedEvent;  // 0x0438, private
    UWorld::FOnBeginTearingDownEvent BeginTearingDownEvent;  // 0x0450, private
    TMulticastDelegate<void __cdecl(float),FDefaultDelegateUserPolicy> MovieSceneSequenceTick;  // 0x0468, private
    FURL URL;  // 0x0480
    FFXSystemInterface * FXSystem;  // 0x04E8
    FTickTaskLevel * TickTaskLevel;  // 0x04F0
    FStartPhysicsTickFunction StartPhysicsTickFunction;  // 0x04F8
    FEndPhysicsTickFunction EndPhysicsTickFunction;  // 0x0528
    int32 PlayerNum;  // 0x0558
    int32 StreamingVolumeUpdateDelay;  // 0x055C
    UWorld::FOnBeginPostProcessSettings OnBeginPostProcessSettings;  // 0x0560
    TArray<IInterface_PostProcessVolume *,TSizedDefaultAllocator<32> > PostProcessVolumes;  // 0x0578
    TArray<AAudioVolume *,TSizedDefaultAllocator<32> > AudioVolumes;  // 0x0588
    double LastTimeUnbuiltLightingWasEncountered;  // 0x0598
    float TimeSeconds;  // 0x05A0
    float UnpausedTimeSeconds;  // 0x05A4
    float RealTimeSeconds;  // 0x05A8
    float AudioTimeSeconds;  // 0x05AC
    float DeltaTimeSeconds;  // 0x05B0
    float PauseDelay;  // 0x05B4
    FIntVector OriginLocation;  // 0x05B8
    FIntVector RequestedOriginLocation;  // 0x05C4
    FVector OriginOffsetThisFrame;  // 0x05D0
    float NextSwitchCountdown;  // 0x05DC
    EFlushLevelStreamingType FlushLevelStreamingType;  // 0x05E8
    TEnumAsByte<enum ETravelType> NextTravelType;  // 0x05E9
    uint16 NumStreamingLevelsBeingLoaded;  // 0x05EA, private
    FString NextURL;  // 0x05F0
    TArray<FName,TSizedDefaultAllocator<32> > PreparingLevelNames;  // 0x0600
    FName CommittedPersistentLevelName;  // 0x0610
    uint32 : 1 bMarkedObjectsPendingKill;  // 0x0618, private
    uint32 CleanupWorldTag;  // 0x061C, private
    FWorldInGamePerformanceTrackers * PerfTrackers;  // 0x0620
    FParticlePerfStats * ParticlePerfStats;  // 0x0628
    TMulticastDelegate<void __cdecl(UWorld::FActorsInitializedParams const &),FDefaultDelegateUserPolicy> OnActorsInitialized;  // 0x0630
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnWorldBeginPlay;  // 0x0648
    UWorld::FOnGameStateSetEvent GameStateSetEvent;  // 0x0660
    FSubsystemCollection<UWorldSubsystem> SubsystemCollection;  // 0x06D0, private

    UFUNCTION() void HandleTimelineScrubbed();
    UFUNCTION(BlueprintCallable) AWorldSettings* K2_GetWorldSettings();  // parameters 0x8

    // Virtual functions that start here:
    //   GetAddressURL, GetLocalURL, ServerTravel, UpdateConstraintActors
};
