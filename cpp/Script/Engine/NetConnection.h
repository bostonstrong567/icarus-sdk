// /Script/Engine.NetConnection
// Derives from: UPlayer > UObject
// size 0x1BA8, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetConnection.h

UCLASS(Abstract, Transient, MinimalAPI, Config=Engine)
class UNetConnection : public UPlayer
{
public:
    UPROPERTY(Transient) TArray<UChildConnection*> Children;  // 0x0048, size 0x10
    UPROPERTY() UNetDriver* Driver;  // 0x0058, size 0x8
    UPROPERTY() TSubclassOf<UPackageMap> PackageMapClass;  // 0x0060, size 0x8
    UPROPERTY() UPackageMap* PackageMap;  // 0x0068, size 0x8
    UPROPERTY() TArray<UChannel*> OpenChannels;  // 0x0070, size 0x10
    UPROPERTY() TArray<AActor*> SentTemporaries;  // 0x0080, size 0x10
    UPROPERTY() AActor* ViewTarget;  // 0x0090, size 0x8
    UPROPERTY() AActor* OwningActor;  // 0x0098, size 0x8
    UPROPERTY() int32 MaxPacket;  // 0x00A0, size 0x4
    UPROPERTY() uint8 InternalAck : 1;  // 0x00A4, mask 0x01
    UPROPERTY() FUniqueNetIdRepl PlayerId;  // 0x0160, size 0x28
    UPROPERTY() double LastReceiveTime;  // 0x01D0, size 0x8
    UPROPERTY() TArray<UChannel*> ChannelsToTick;  // 0x1510, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bInternalAck;  // 0x00A4, private
    uint32 : 1 bReplay;  // 0x00A4, private
    FURL URL;  // 0x00A8
    TSharedPtr<FInternetAddr,0> RemoteAddr;  // 0x0110
    int32 NumPacketIdBits;  // 0x0120
    int32 NumBunchBits;  // 0x0124
    int32 NumAckBits;  // 0x0128
    int32 NumPaddingBits;  // 0x012C
    int32 MaxPacketHandlerBits;  // 0x0130
    EConnectionState State;  // 0x0134
    uint32 : 1 bPendingDestroy;  // 0x0138
    TUniquePtr<PacketHandler,TDefaultDelete<PacketHandler> > Handler;  // 0x0140
    TWeakPtr<StatelessConnectHandlerComponent,0> StatelessConnectComponent;  // 0x0148
    bool bNeedsByteSwapping;  // 0x0158
    int32 PacketOverhead;  // 0x0188
    FString Challenge;  // 0x0190
    FString ClientResponse;  // 0x01A0
    int32 ResponseId;  // 0x01B0
    FString RequestURL;  // 0x01B8
    EClientLoginState::Type ClientLoginState;  // 0x01C8
    uint8 ExpectedClientLoginMsgType;  // 0x01CC
    double LastReceiveRealtime;  // 0x01D8
    double LastGoodPacketRealtime;  // 0x01E0
    double LastSendTime;  // 0x01E8
    double LastTickTime;  // 0x01F0
    int32 QueuedBits;  // 0x01F8
    int32 TickCount;  // 0x01FC
    uint32 LastProcessedFrame;  // 0x0200
    float LastRecvAckTime;  // 0x0204
    float ConnectTime;  // 0x0208
    double LastRecvAckTimestamp;  // 0x0210, private
    double ConnectTimestamp;  // 0x0218, private
    FPacketTimestamp LastOSReceiveTime;  // 0x0220, private
    bool bIsOSReceiveTimeLocal;  // 0x0228, private
    bool bSendBufferHasDummyPacketInfo;  // 0x0229, private
    FBitWriterMark HeaderMarkForPacketInfo;  // 0x0230, private
    int32 PreviousJitterTimeDelta;  // 0x0240, private
    double PreviousPacketSendTimeInS;  // 0x0248, private
    FBitWriterMark LastStart;  // 0x0250
    FBitWriterMark LastEnd;  // 0x0260
    bool AllowMerge;  // 0x0270
    bool TimeSensitive;  // 0x0271
    FOutBunch * LastOutBunch;  // 0x0278
    FOutBunch LastOut;  // 0x0280
    FBitWriter SendBunchHeader;  // 0x0398
    double StatUpdateTime;  // 0x0458
    float StatPeriod;  // 0x0460
    float AvgLag;  // 0x0464
    double LagAcc;  // 0x0468
    int32 LagCount;  // 0x0470
    double LastTime;  // 0x0478
    double FrameTime;  // 0x0480
    double CumulativeTime;  // 0x0488
    double AverageFrameTime;  // 0x0490
    int32 CountedFrames;  // 0x0498
    int32 InBytes;  // 0x049C
    int32 OutBytes;  // 0x04A0
    int32 InTotalBytes;  // 0x04A4
    int32 OutTotalBytes;  // 0x04A8
    int32 InPackets;  // 0x04AC
    int32 OutPackets;  // 0x04B0
    int32 InTotalPackets;  // 0x04B4
    int32 OutTotalPackets;  // 0x04B8
    int32 InBytesPerSecond;  // 0x04BC
    int32 OutBytesPerSecond;  // 0x04C0
    int32 InPacketsPerSecond;  // 0x04C4
    int32 OutPacketsPerSecond;  // 0x04C8
    int32 InPacketsLost;  // 0x04CC
    int32 OutPacketsLost;  // 0x04D0
    int32 InTotalPacketsLost;  // 0x04D4
    int32 OutTotalPacketsLost;  // 0x04D8
    int32 OutTotalAcks;  // 0x04DC
    TPacketLossData<3> InPacketsLossPercentage;  // 0x04E0, private
    TPacketLossData<3> OutPacketsLossPercentage;  // 0x04F8, private
    int32 StatPeriodCount;  // 0x0510, private
    float AverageJitterInMS;  // 0x0514, private
    FNetConnAnalyticsVars AnalyticsVars;  // 0x0518
    TSharedPtr<FNetConnAnalyticsData,0> NetAnalyticsData;  // 0x0528
    FBitWriter SendBuffer;  // 0x0538
    double[256] OutLagTime;  // 0x05F8
    int32[256] OutLagPacketId;  // 0x0DF8
    uint8[256] OutBytesPerSecondHistory;  // 0x11F8
    float RemoteSaturation;  // 0x12F8
    int32 InPacketId;  // 0x12FC
    int32 OutPacketId;  // 0x1300
    int32 OutAckPacketId;  // 0x1304
    bool bLastHasServerFrameTime;  // 0x1308
    int32 MaxChannelSize;  // 0x130C
    TArray<UChannel *,TSizedDefaultAllocator<32> > Channels;  // 0x1310
    TArray<int,TSizedDefaultAllocator<32> > OutReliable;  // 0x1320
    TArray<int,TSizedDefaultAllocator<32> > InReliable;  // 0x1330
    TArray<int,TSizedDefaultAllocator<32> > PendingOutRec;  // 0x1340
    int32 InitOutReliable;  // 0x1350
    int32 InitInReliable;  // 0x1354
    uint32 EngineNetworkProtocolVersion;  // 0x1358
    uint32 GameNetworkProtocolVersion;  // 0x135C
    double LogCallLastTime;  // 0x1360
    int32 LogCallCount;  // 0x1368
    int32 LogSustainedCount;  // 0x136C
    TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel *,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel *,0> > ActorChannels;  // 0x1370, private
    UReplicationConnectionDriver * ReplicationConnectionDriver;  // 0x13C0, private
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> DestroyedStartupOrDormantActorGUIDs;  // 0x13C8, private
    TMap<FNetworkGUID,TArray<UActorChannel *,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<UActorChannel *,TSizedDefaultAllocator<32> >,0> > KeepProcessingActorChannelBunchesMap;  // 0x1418
    TMap<UObject *,TSharedRef<FObjectReplicator,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,TSharedRef<FObjectReplicator,0>,0> > DormantReplicatorMap;  // 0x1468
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> ClientVisibleLevelNames;  // 0x14B8
    EResendAllDataState ResendAllDataState;  // 0x1508
    FHistogram NetConnectionHistogram;  // 0x1520, private
    FName PlayerOnlinePlatformName;  // 0x1550, private
    TMap<UObject *,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,bool,0> > ClientVisibleActorOuters;  // 0x1558, private
    TMap<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0> > PendingUpdateLevelVisibility;  // 0x15A8, private
    FName ClientWorldPackageName;  // 0x15F8, private
    TMap<FString,TArray<float,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32> >,0> > ActorsStarvedByClassTimeMap;  // 0x1600, private
    TMap<int,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0> > IgnoringChannels;  // 0x1650, private
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > ChannelIndexMap;  // 0x16A0, private
    bool bAllowExistingChannelIndex;  // 0x16F0, private
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> IgnoredBunchGuids;  // 0x16F8, private
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> IgnoredBunchChannels;  // 0x1748, private
    bool bIgnoreActorBunches;  // 0x1798, private
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> ReservedChannels;  // 0x17A0, private
    bool bReserveDestroyedChannels;  // 0x17F0, private
    bool bIgnoreReservedChannels;  // 0x17F1, private
    TArray<FOutBunch *,TSizedDefaultAllocator<32> > OutgoingBunches;  // 0x17F8, private
    FWrittenChannelsRecord ChannelRecord;  // 0x1808, private
    FNetPacketNotify PacketNotify;  // 0x1830, private
    int32 LastNotifiedPacketId;  // 0x1A88, private
    uint32 OutTotalNotifiedPackets;  // 0x1A8C, private
    uint32 HasDirtyAcks;  // 0x1A90, private
    bool bHasWarnedAboutChannelLimit;  // 0x1A94, private
    bool bConnectionPendingCloseDueToSocketSendFailure;  // 0x1A95, private
    bool bConnectionPendingCloseDueToReplicationFailure;  // 0x1A96, private
    int32 TotalOutOfOrderPackets;  // 0x1A98, private
    TOptional<TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader> > > > PacketOrderCache;  // 0x1AA0, private
    int32 PacketOrderCacheStartIdx;  // 0x1AC0, private
    int32 PacketOrderCacheCount;  // 0x1AC4, private
    FNetConnectionSaturationAnalytics SaturationAnalytics;  // 0x1AC8, private
    FNetConnectionPacketAnalytics PacketAnalytics;  // 0x1AE8, private
    bool bFlushingPacketOrderCache;  // 0x1B18, private
    uint32 ConnectionId;  // 0x1B1C, private
    bool bFlushedNetThisFrame;  // 0x1B20, private
    AActor * RepContextActor;  // 0x1B28, private
    ULevel * RepContextLevel;  // 0x1B30, private
    bool bAutoFlush;  // 0x1B38, private
    TOptional<FNetworkCongestionControl> NetworkCongestionControl;  // 0x1B40, protected

    // Virtual functions that start here:
    //   AssertValid, CleanUp, ClientHasInitializedLevelFor, CreateReplicatorForNewActorChannel, Describe
    //   DestroyIgnoredActor, DestroyOwningActor, FlushDormancy, FlushNet, GetAddrPort, GetRemoteAddr
    //   GetTimeoutValue, GetUChildConnection, HandleClientPlayer, HandleConnectionTimeout, InitBase
    //   InitConnection, InitHandler, InitLocalConnection, InitRemoteConnection, InitSendBuffer
    //   InitSequence, IsEncryptionEnabled, IsNetReady, IsReplayReady, LowLevelDescribe
    //   LowLevelGetRemoteAddress, LowLevelSend, NotifyActorChannelCleanedUp, NotifyActorDestroyed
    //   NotifyActorNetGUID, NotifyAnalyticsProvider, ReceivedRawPacket, RemoteAddressToString, Tick
    //   ValidateSendBuffer
};
