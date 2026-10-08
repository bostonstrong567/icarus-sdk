// /Script/Engine.NetDriver
// Derives from: UObject
// size 0x760, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetDriver.h

UCLASS(Abstract, Transient, MinimalAPI, Config=Engine)
class UNetDriver : public UObject
{
public:
    UPROPERTY(Config) FString NetConnectionClassName;  // 0x0030, size 0x10
    UPROPERTY(Config) FString ReplicationDriverClassName;  // 0x0040, size 0x10
    UPROPERTY(Config) int32 MaxDownloadSize;  // 0x0050, size 0x4
    UPROPERTY(Config) uint8 bClampListenServerTickRate : 1;  // 0x0054, mask 0x01
    UPROPERTY(Config) int32 NetServerMaxTickRate;  // 0x0058, size 0x4
    UPROPERTY(Config) int32 MaxNetTickRate;  // 0x005C, size 0x4
    UPROPERTY(Config) int32 MaxInternetClientRate;  // 0x0060, size 0x4
    UPROPERTY(Config) int32 MaxClientRate;  // 0x0064, size 0x4
    UPROPERTY(Config) float ServerTravelPause;  // 0x0068, size 0x4
    UPROPERTY(Config) float SpawnPrioritySeconds;  // 0x006C, size 0x4
    UPROPERTY(Config) float RelevantTimeout;  // 0x0070, size 0x4
    UPROPERTY(Config) float KeepAliveTime;  // 0x0074, size 0x4
    UPROPERTY(Config) float InitialConnectTimeout;  // 0x0078, size 0x4
    UPROPERTY(Config) float ConnectionTimeout;  // 0x007C, size 0x4
    UPROPERTY(Config) float TimeoutMultiplierForUnoptimizedBuilds;  // 0x0080, size 0x4
    UPROPERTY(Config) bool bNoTimeouts;  // 0x0084, size 0x1
    UPROPERTY(Config) bool bNeverApplyNetworkEmulationSettings;  // 0x0085, size 0x1
    UPROPERTY() UNetConnection* ServerConnection;  // 0x0088, size 0x8
    UPROPERTY() TArray<UNetConnection*> ClientConnections;  // 0x0090, size 0x10
    UPROPERTY(Config) int32 RecentlyDisconnectedTrackingTime;  // 0x0100, size 0x4
    UPROPERTY() UWorld* World;  // 0x0140, size 0x8
    UPROPERTY() UPackage* WorldPackage;  // 0x0148, size 0x8
    UPROPERTY() TSubclassOf<UObject> NetConnectionClass;  // 0x0170, size 0x8
    UPROPERTY() TSubclassOf<UObject> ReplicationDriverClass;  // 0x0178, size 0x8
    UPROPERTY(Config) FName NetDriverName;  // 0x0190, size 0x8
    UPROPERTY(Config) TArray<FChannelDefinition> ChannelDefinitions;  // 0x0198, size 0x10
    UPROPERTY() TMap<FName, FChannelDefinition> ChannelDefinitionMap;  // 0x01A8, size 0x50
    UPROPERTY() TArray<UChannel*> ActorChannelPool;  // 0x01F8, size 0x10
    UPROPERTY() float Time;  // 0x0210, size 0x4
    UPROPERTY(Transient) UReplicationDriver* ReplicationDriver;  // 0x0700, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TMap<TSharedRef<FInternetAddr const ,0>,UNetConnection *,FDefaultSetAllocator,FInternetAddrConstKeyMapFuncs<UNetConnection *> > MappedClientConnections;  // 0x00A0
    TArray<FDisconnectedClient,TSizedDefaultAllocator<32> > RecentlyDisconnectedClients;  // 0x00F0
    TUniquePtr<PacketHandler,TDefaultDelete<PacketHandler> > ConnectionlessHandler;  // 0x0108
    TWeakPtr<StatelessConnectHandlerComponent,0> StatelessConnectComponent;  // 0x0110
    TSharedPtr<IAnalyticsProvider,0> AnalyticsProvider;  // 0x0120
    TSharedPtr<FNetAnalyticsAggregator,0> AnalyticsAggregator;  // 0x0130
    TSharedPtr<FNetGUIDCache,0> GuidCache;  // 0x0150
    TSharedPtr<FClassNetCacheMgr,0> NetCache;  // 0x0160
    FProperty * RoleProperty;  // 0x0180
    FProperty * RemoteRoleProperty;  // 0x0188
    FNetworkNotify * Notify;  // 0x0208
    double ElapsedTime;  // 0x0218, private
    bool bInTick;  // 0x0220, private
    bool bPendingDestruction;  // 0x0221, private
    double LastTickDispatchRealtime;  // 0x0228
    bool bIsPeer;  // 0x0230
    bool ProfileStats;  // 0x0231
    bool bSkipLocalStats;  // 0x0232
    int32 SendCycles;  // 0x0234
    uint32 InBytesPerSecond;  // 0x0238
    uint32 OutBytesPerSecond;  // 0x023C
    uint32 InBytes;  // 0x0240
    uint32 InTotalBytes;  // 0x0244
    uint32 OutBytes;  // 0x0248
    uint32 OutTotalBytes;  // 0x024C
    uint32 NetGUIDOutBytes;  // 0x0250
    uint32 NetGUIDInBytes;  // 0x0254
    uint32 InPackets;  // 0x0258
    uint32 InTotalPackets;  // 0x025C
    uint32 OutPackets;  // 0x0260
    uint32 OutTotalPackets;  // 0x0264
    uint32 InBunches;  // 0x0268
    uint32 OutBunches;  // 0x026C
    uint32 InTotalBunches;  // 0x0270
    uint32 OutTotalBunches;  // 0x0274
    uint32 InPacketsLost;  // 0x0278
    uint32 InTotalPacketsLost;  // 0x027C
    uint32 OutPacketsLost;  // 0x0280
    uint32 OutTotalPacketsLost;  // 0x0284
    uint32 InOutOfOrderPackets;  // 0x0288
    uint32 OutOutOfOrderPackets;  // 0x028C
    uint32 VoicePacketsSent;  // 0x0290
    uint32 VoiceBytesSent;  // 0x0294
    uint32 VoicePacketsRecv;  // 0x0298
    uint32 VoiceBytesRecv;  // 0x029C
    uint32 VoiceInPercent;  // 0x02A0
    uint32 VoiceOutPercent;  // 0x02A4
    double StatUpdateTime;  // 0x02A8
    float StatPeriod;  // 0x02B0
    uint32 TotalRPCsCalled;  // 0x02B4
    uint32 OutTotalAcks;  // 0x02B8
    bool bCollectNetStats;  // 0x02BC
    double LastCleanupTime;  // 0x02C0
    bool bIsStandbyCheckingEnabled;  // 0x02C8
    bool bHasStandbyCheatTriggered;  // 0x02C9
    float StandbyRxCheatTime;  // 0x02CC
    float StandbyTxCheatTime;  // 0x02D0
    int32 BadPingThreshold;  // 0x02D4
    float PercentMissingForRxStandby;  // 0x02D8
    float PercentMissingForTxStandby;  // 0x02DC
    float PercentForBadPing;  // 0x02E0
    float JoinInProgressStandbyWaitTime;  // 0x02E4
    int32 NetTag;  // 0x02E8
    bool DebugRelevantActors;  // 0x02EC
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastPrioritizedActors;  // 0x02F0
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastRelevantActors;  // 0x0300
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastSentActors;  // 0x0310
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastNonRelevantActors;  // 0x0320
    TMap<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo> >,0> > DestroyedStartupOrDormantActors;  // 0x0330
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > RenamedStartupActors;  // 0x0380
    TMap<UObject *,UNetDriver::FRepChangedPropertyTrackerWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,UNetDriver::FRepChangedPropertyTrackerWrapper,0> > RepChangedPropertyTrackerMap;  // 0x03D0
    uint32 ReplicationFrame;  // 0x0420
    TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,0>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,0>,0> > RepLayoutMap;  // 0x0428
    TMap<UObject *,UNetDriver::FReplicationChangelistMgrWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,UNetDriver::FReplicationChangelistMgrWrapper,0> > ReplicationChangeListMap;  // 0x0478
    TMap<FNetworkGUID,TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator>,0> > GuidToReplicatorMap;  // 0x04C8
    int32 TotalTrackedGuidMemoryBytes;  // 0x0518
    TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator> UnmappedReplicators;  // 0x0520
    TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator> AllOwnedReplicators;  // 0x0570
    FDelegateHandle TickDispatchDelegateHandle;  // 0x05C0
    FDelegateHandle PostTickDispatchDelegateHandle;  // 0x05C8
    FDelegateHandle TickFlushDelegateHandle;  // 0x05D0
    FDelegateHandle PostTickFlushDelegateHandle;  // 0x05D8
    float ProcessQueuedBunchesCurrentFrameMilliseconds;  // 0x05E0
    FDDoSDetection DDoS;  // 0x05E8
    TSharedPtr<FInternetAddr,0> LocalAddr;  // 0x06C0
    FDelegateHandle OnLevelRemovedFromWorldHandle;  // 0x06D0, protected
    FDelegateHandle OnLevelAddedToWorldHandle;  // 0x06D8, protected
    bool bMaySendProperties;  // 0x06E0, protected
    bool bSkipServerReplicateActors;  // 0x06E1, protected
    FRandomStream UpdateDelayRandomStream;  // 0x06E4, protected
    FDelegateHandle PostGarbageCollectHandle;  // 0x06F0, private
    FDelegateHandle ReportSyncLoadDelegateHandle;  // 0x06F8, private
    TSharedPtr<FNetworkObjectList,0> NetworkObjects;  // 0x0708, private
    ENetworkLagState::Type LagState;  // 0x0718, private
    int32 DuplicateLevelID;  // 0x071C, private
    double PacketLossBurstEndTime;  // 0x0720, private
    uint32 OutTotalNotifiedPackets;  // 0x0728, private
    FNetConnectionIdHandler ConnectionIdHandler;  // 0x0730, private
    uint32 NetTraceId;  // 0x0758, private
    bool bDidHitchLastFrame;  // 0x075C, private
    bool bHasReplayConnection;  // 0x075D, private

    // Virtual functions that start here:
    //   AssertValid, CleanPackageMaps, CreateChild, FlushHandler, ForceNetUpdate, GetActorForGUID
    //   GetCreateReplicationChangelistMgrFlags, GetGUIDForActor, GetLocalAddr, GetSocketSubsystem, InitBase
    //   InitConnect, InitConnectionClass, InitConnectionlessHandler, InitDestroyedStartupActors, InitListen
    //   InitReplicationDriverClass, InternalCreateChannelByName, IsAvailable, IsLevelInitializedForActor
    //   IsNetResourceValid, IsServer, LowLevelDestroy, LowLevelGetNetworkNumber, LowLevelSend
    //   NotifyActorChannelCleanedUp, NotifyActorChannelOpen, NotifyActorDestroyed, NotifyActorLevelUnloaded
    //   NotifyActorRenamed, NotifyActorTearOff, NotifyActorTornOff, NotifyStreamingLevelUnload
    //   OnLevelAddedToWorld, OnLevelRemovedFromWorld, PostTickDispatch, PostTickFlush
    //   ProcessLocalClientPackets, ProcessLocalServerPackets, ProcessRemoteFunction, ReplicateVoicePacket
    //   ResetGameWorldState, ServerReplicateActors, SetAnalyticsProvider, SetWorld
    //   ShouldCallRemoteFunction, ShouldClientDestroyActor, ShouldClientDestroyTearOffActors
    //   ShouldForwardFunction, ShouldIgnoreRPCs, ShouldQueueBunchesForActorGUID
    //   ShouldReceiveRepNotifiesForObject, ShouldReplicateActor, ShouldReplicateFunction
    //   ShouldSkipRepNotifies, Shutdown, TickDispatch, TickFlush, UpdateNetworkLagState
};
