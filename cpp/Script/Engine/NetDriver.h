// /Script/Engine.NetDriver
// Derives from: UObject
// size 0x760, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetDriver.h

UCLASS(Abstract, Transient, MinimalAPI, Config=Engine)
class UNetDriver : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
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
    TMap<TSharedRef<FInternetAddr const ,0>,UNetConnection *,FDefaultSetAllocator,FInternetAddrConstKeyMapFuncs<UNetConnection *> > MappedClientConnections;  // 0x00A0, not reflected
    TArray<FDisconnectedClient,TSizedDefaultAllocator<32> > RecentlyDisconnectedClients;  // 0x00F0, not reflected
    UPROPERTY(Config) int32 RecentlyDisconnectedTrackingTime;  // 0x0100, size 0x4
    TUniquePtr<PacketHandler,TDefaultDelete<PacketHandler> > ConnectionlessHandler;  // 0x0108, not reflected
    TWeakPtr<StatelessConnectHandlerComponent,0> StatelessConnectComponent;  // 0x0110, not reflected
    TSharedPtr<IAnalyticsProvider,0> AnalyticsProvider;  // 0x0120, not reflected
    TSharedPtr<FNetAnalyticsAggregator,0> AnalyticsAggregator;  // 0x0130, not reflected
    UPROPERTY() UWorld* World;  // 0x0140, size 0x8
    UPROPERTY() UPackage* WorldPackage;  // 0x0148, size 0x8
    TSharedPtr<FNetGUIDCache,0> GuidCache;  // 0x0150, not reflected
    TSharedPtr<FClassNetCacheMgr,0> NetCache;  // 0x0160, not reflected
    UPROPERTY() TSubclassOf<UObject> NetConnectionClass;  // 0x0170, size 0x8
    UPROPERTY() TSubclassOf<UObject> ReplicationDriverClass;  // 0x0178, size 0x8
    FProperty * RoleProperty;  // 0x0180, not reflected
    FProperty * RemoteRoleProperty;  // 0x0188, not reflected
    UPROPERTY(Config) FName NetDriverName;  // 0x0190, size 0x8
    UPROPERTY(Config) TArray<FChannelDefinition> ChannelDefinitions;  // 0x0198, size 0x10
    UPROPERTY() TMap<FName, FChannelDefinition> ChannelDefinitionMap;  // 0x01A8, size 0x50
    FNetworkNotify * Notify;  // 0x0208, not reflected
    UPROPERTY() float Time;  // 0x0210, size 0x4
    double LastTickDispatchRealtime;  // 0x0228, not reflected
    bool bIsPeer;  // 0x0230, not reflected
    bool ProfileStats;  // 0x0231, not reflected
    bool bSkipLocalStats;  // 0x0232, not reflected
    int32 SendCycles;  // 0x0234, not reflected
    uint32 InBytesPerSecond;  // 0x0238, not reflected
    uint32 OutBytesPerSecond;  // 0x023C, not reflected
    uint32 InBytes;  // 0x0240, not reflected
    uint32 InTotalBytes;  // 0x0244, not reflected
    uint32 OutBytes;  // 0x0248, not reflected
    uint32 OutTotalBytes;  // 0x024C, not reflected
    uint32 NetGUIDOutBytes;  // 0x0250, not reflected
    uint32 NetGUIDInBytes;  // 0x0254, not reflected
    uint32 InPackets;  // 0x0258, not reflected
    uint32 InTotalPackets;  // 0x025C, not reflected
    uint32 OutPackets;  // 0x0260, not reflected
    uint32 OutTotalPackets;  // 0x0264, not reflected
    uint32 InBunches;  // 0x0268, not reflected
    uint32 OutBunches;  // 0x026C, not reflected
    uint32 InTotalBunches;  // 0x0270, not reflected
    uint32 OutTotalBunches;  // 0x0274, not reflected
    uint32 InPacketsLost;  // 0x0278, not reflected
    uint32 InTotalPacketsLost;  // 0x027C, not reflected
    uint32 OutPacketsLost;  // 0x0280, not reflected
    uint32 OutTotalPacketsLost;  // 0x0284, not reflected
    uint32 InOutOfOrderPackets;  // 0x0288, not reflected
    uint32 OutOutOfOrderPackets;  // 0x028C, not reflected
    uint32 VoicePacketsSent;  // 0x0290, not reflected
    uint32 VoiceBytesSent;  // 0x0294, not reflected
    uint32 VoicePacketsRecv;  // 0x0298, not reflected
    uint32 VoiceBytesRecv;  // 0x029C, not reflected
    uint32 VoiceInPercent;  // 0x02A0, not reflected
    uint32 VoiceOutPercent;  // 0x02A4, not reflected
    double StatUpdateTime;  // 0x02A8, not reflected
    float StatPeriod;  // 0x02B0, not reflected
    uint32 TotalRPCsCalled;  // 0x02B4, not reflected
    uint32 OutTotalAcks;  // 0x02B8, not reflected
    bool bCollectNetStats;  // 0x02BC, not reflected
    double LastCleanupTime;  // 0x02C0, not reflected
    bool bIsStandbyCheckingEnabled;  // 0x02C8, not reflected
    bool bHasStandbyCheatTriggered;  // 0x02C9, not reflected
    float StandbyRxCheatTime;  // 0x02CC, not reflected
    float StandbyTxCheatTime;  // 0x02D0, not reflected
    int32 BadPingThreshold;  // 0x02D4, not reflected
    float PercentMissingForRxStandby;  // 0x02D8, not reflected
    float PercentMissingForTxStandby;  // 0x02DC, not reflected
    float PercentForBadPing;  // 0x02E0, not reflected
    float JoinInProgressStandbyWaitTime;  // 0x02E4, not reflected
    int32 NetTag;  // 0x02E8, not reflected
    bool DebugRelevantActors;  // 0x02EC, not reflected
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastPrioritizedActors;  // 0x02F0, not reflected
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastRelevantActors;  // 0x0300, not reflected
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastSentActors;  // 0x0310, not reflected
    TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32> > LastNonRelevantActors;  // 0x0320, not reflected
    TMap<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo> >,0> > DestroyedStartupOrDormantActors;  // 0x0330, not reflected
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > RenamedStartupActors;  // 0x0380, not reflected
    TMap<UObject *,UNetDriver::FRepChangedPropertyTrackerWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,UNetDriver::FRepChangedPropertyTrackerWrapper,0> > RepChangedPropertyTrackerMap;  // 0x03D0, not reflected
    uint32 ReplicationFrame;  // 0x0420, not reflected
    TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,0>,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FRepLayout,0>,0> > RepLayoutMap;  // 0x0428, not reflected
    TMap<UObject *,UNetDriver::FReplicationChangelistMgrWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,UNetDriver::FReplicationChangelistMgrWrapper,0> > ReplicationChangeListMap;  // 0x0478, not reflected
    TMap<FNetworkGUID,TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator>,0> > GuidToReplicatorMap;  // 0x04C8, not reflected
    int32 TotalTrackedGuidMemoryBytes;  // 0x0518, not reflected
    TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator> UnmappedReplicators;  // 0x0520, not reflected
    TSet<FObjectReplicator *,DefaultKeyFuncs<FObjectReplicator *,0>,FDefaultSetAllocator> AllOwnedReplicators;  // 0x0570, not reflected
    FDelegateHandle TickDispatchDelegateHandle;  // 0x05C0, not reflected
    FDelegateHandle PostTickDispatchDelegateHandle;  // 0x05C8, not reflected
    FDelegateHandle TickFlushDelegateHandle;  // 0x05D0, not reflected
    FDelegateHandle PostTickFlushDelegateHandle;  // 0x05D8, not reflected
    float ProcessQueuedBunchesCurrentFrameMilliseconds;  // 0x05E0, not reflected
    FDDoSDetection DDoS;  // 0x05E8, not reflected
    TSharedPtr<FInternetAddr,0> LocalAddr;  // 0x06C0, not reflected
protected:
    FDelegateHandle OnLevelRemovedFromWorldHandle;  // 0x06D0, not reflected
    FDelegateHandle OnLevelAddedToWorldHandle;  // 0x06D8, not reflected
    bool bMaySendProperties;  // 0x06E0, not reflected
    bool bSkipServerReplicateActors;  // 0x06E1, not reflected
    FRandomStream UpdateDelayRandomStream;  // 0x06E4, not reflected
private:
    UPROPERTY() TArray<UChannel*> ActorChannelPool;  // 0x01F8, size 0x10
    double ElapsedTime;  // 0x0218, not reflected
    bool bInTick;  // 0x0220, not reflected
    bool bPendingDestruction;  // 0x0221, not reflected
    FDelegateHandle PostGarbageCollectHandle;  // 0x06F0, not reflected
    FDelegateHandle ReportSyncLoadDelegateHandle;  // 0x06F8, not reflected
    UPROPERTY(Transient) UReplicationDriver* ReplicationDriver;  // 0x0700, size 0x8
    TSharedPtr<FNetworkObjectList,0> NetworkObjects;  // 0x0708, not reflected
    ENetworkLagState::Type LagState;  // 0x0718, not reflected
    int32 DuplicateLevelID;  // 0x071C, not reflected
    double PacketLossBurstEndTime;  // 0x0720, not reflected
    uint32 OutTotalNotifiedPackets;  // 0x0728, not reflected
    FNetConnectionIdHandler ConnectionIdHandler;  // 0x0730, not reflected
    uint32 NetTraceId;  // 0x0758, not reflected
    bool bDidHitchLastFrame;  // 0x075C, not reflected
    bool bHasReplayConnection;  // 0x075D, not reflected

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
