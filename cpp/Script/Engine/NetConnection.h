// /Script/Engine.NetConnection
// Derives from: UPlayer > UObject
// size 0x1BA8, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetConnection.h

UCLASS(Abstract, Transient, MinimalAPI, Config=Engine)
class UNetConnection : public UPlayer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
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
    FURL URL;  // 0x00A8, not reflected
    TSharedPtr<FInternetAddr,0> RemoteAddr;  // 0x0110, not reflected
    int32 NumPacketIdBits;  // 0x0120, not reflected
    int32 NumBunchBits;  // 0x0124, not reflected
    int32 NumAckBits;  // 0x0128, not reflected
    int32 NumPaddingBits;  // 0x012C, not reflected
    int32 MaxPacketHandlerBits;  // 0x0130, not reflected
    EConnectionState State;  // 0x0134, not reflected
    uint32 : 1 bPendingDestroy;  // 0x0138, not reflected
    TUniquePtr<PacketHandler,TDefaultDelete<PacketHandler> > Handler;  // 0x0140, not reflected
    TWeakPtr<StatelessConnectHandlerComponent,0> StatelessConnectComponent;  // 0x0148, not reflected
    bool bNeedsByteSwapping;  // 0x0158, not reflected
    UPROPERTY() FUniqueNetIdRepl PlayerId;  // 0x0160, size 0x28
    int32 PacketOverhead;  // 0x0188, not reflected
    FString Challenge;  // 0x0190, not reflected
    FString ClientResponse;  // 0x01A0, not reflected
    int32 ResponseId;  // 0x01B0, not reflected
    FString RequestURL;  // 0x01B8, not reflected
    EClientLoginState::Type ClientLoginState;  // 0x01C8, not reflected
    uint8 ExpectedClientLoginMsgType;  // 0x01CC, not reflected
    UPROPERTY() double LastReceiveTime;  // 0x01D0, size 0x8
    double LastReceiveRealtime;  // 0x01D8, not reflected
    double LastGoodPacketRealtime;  // 0x01E0, not reflected
    double LastSendTime;  // 0x01E8, not reflected
    double LastTickTime;  // 0x01F0, not reflected
    int32 QueuedBits;  // 0x01F8, not reflected
    int32 TickCount;  // 0x01FC, not reflected
    uint32 LastProcessedFrame;  // 0x0200, not reflected
    float LastRecvAckTime;  // 0x0204, not reflected
    float ConnectTime;  // 0x0208, not reflected
    FBitWriterMark LastStart;  // 0x0250, not reflected
    FBitWriterMark LastEnd;  // 0x0260, not reflected
    bool AllowMerge;  // 0x0270, not reflected
    bool TimeSensitive;  // 0x0271, not reflected
    FOutBunch * LastOutBunch;  // 0x0278, not reflected
    FOutBunch LastOut;  // 0x0280, not reflected
    FBitWriter SendBunchHeader;  // 0x0398, not reflected
    double StatUpdateTime;  // 0x0458, not reflected
    float StatPeriod;  // 0x0460, not reflected
    float AvgLag;  // 0x0464, not reflected
    double LagAcc;  // 0x0468, not reflected
    int32 LagCount;  // 0x0470, not reflected
    double LastTime;  // 0x0478, not reflected
    double FrameTime;  // 0x0480, not reflected
    double CumulativeTime;  // 0x0488, not reflected
    double AverageFrameTime;  // 0x0490, not reflected
    int32 CountedFrames;  // 0x0498, not reflected
    int32 InBytes;  // 0x049C, not reflected
    int32 OutBytes;  // 0x04A0, not reflected
    int32 InTotalBytes;  // 0x04A4, not reflected
    int32 OutTotalBytes;  // 0x04A8, not reflected
    int32 InPackets;  // 0x04AC, not reflected
    int32 OutPackets;  // 0x04B0, not reflected
    int32 InTotalPackets;  // 0x04B4, not reflected
    int32 OutTotalPackets;  // 0x04B8, not reflected
    int32 InBytesPerSecond;  // 0x04BC, not reflected
    int32 OutBytesPerSecond;  // 0x04C0, not reflected
    int32 InPacketsPerSecond;  // 0x04C4, not reflected
    int32 OutPacketsPerSecond;  // 0x04C8, not reflected
    int32 InPacketsLost;  // 0x04CC, not reflected
    int32 OutPacketsLost;  // 0x04D0, not reflected
    int32 InTotalPacketsLost;  // 0x04D4, not reflected
    int32 OutTotalPacketsLost;  // 0x04D8, not reflected
    int32 OutTotalAcks;  // 0x04DC, not reflected
    FNetConnAnalyticsVars AnalyticsVars;  // 0x0518, not reflected
    TSharedPtr<FNetConnAnalyticsData,0> NetAnalyticsData;  // 0x0528, not reflected
    FBitWriter SendBuffer;  // 0x0538, not reflected
    double[256] OutLagTime;  // 0x05F8, not reflected
    int32[256] OutLagPacketId;  // 0x0DF8, not reflected
    uint8[256] OutBytesPerSecondHistory;  // 0x11F8, not reflected
    float RemoteSaturation;  // 0x12F8, not reflected
    int32 InPacketId;  // 0x12FC, not reflected
    int32 OutPacketId;  // 0x1300, not reflected
    int32 OutAckPacketId;  // 0x1304, not reflected
    bool bLastHasServerFrameTime;  // 0x1308, not reflected
    int32 MaxChannelSize;  // 0x130C, not reflected
    TArray<UChannel *,TSizedDefaultAllocator<32> > Channels;  // 0x1310, not reflected
    TArray<int,TSizedDefaultAllocator<32> > OutReliable;  // 0x1320, not reflected
    TArray<int,TSizedDefaultAllocator<32> > InReliable;  // 0x1330, not reflected
    TArray<int,TSizedDefaultAllocator<32> > PendingOutRec;  // 0x1340, not reflected
    int32 InitOutReliable;  // 0x1350, not reflected
    int32 InitInReliable;  // 0x1354, not reflected
    uint32 EngineNetworkProtocolVersion;  // 0x1358, not reflected
    uint32 GameNetworkProtocolVersion;  // 0x135C, not reflected
    double LogCallLastTime;  // 0x1360, not reflected
    int32 LogCallCount;  // 0x1368, not reflected
    int32 LogSustainedCount;  // 0x136C, not reflected
    TMap<FNetworkGUID,TArray<UActorChannel *,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<UActorChannel *,TSizedDefaultAllocator<32> >,0> > KeepProcessingActorChannelBunchesMap;  // 0x1418, not reflected
    TMap<UObject *,TSharedRef<FObjectReplicator,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,TSharedRef<FObjectReplicator,0>,0> > DormantReplicatorMap;  // 0x1468, not reflected
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> ClientVisibleLevelNames;  // 0x14B8, not reflected
    EResendAllDataState ResendAllDataState;  // 0x1508, not reflected
protected:
    TOptional<FNetworkCongestionControl> NetworkCongestionControl;  // 0x1B40, not reflected
private:
    uint32 : 1 bInternalAck;  // 0x00A4, not reflected
    uint32 : 1 bReplay;  // 0x00A4, not reflected
    double LastRecvAckTimestamp;  // 0x0210, not reflected
    double ConnectTimestamp;  // 0x0218, not reflected
    FPacketTimestamp LastOSReceiveTime;  // 0x0220, not reflected
    bool bIsOSReceiveTimeLocal;  // 0x0228, not reflected
    bool bSendBufferHasDummyPacketInfo;  // 0x0229, not reflected
    FBitWriterMark HeaderMarkForPacketInfo;  // 0x0230, not reflected
    int32 PreviousJitterTimeDelta;  // 0x0240, not reflected
    double PreviousPacketSendTimeInS;  // 0x0248, not reflected
    TPacketLossData<3> InPacketsLossPercentage;  // 0x04E0, not reflected
    TPacketLossData<3> OutPacketsLossPercentage;  // 0x04F8, not reflected
    int32 StatPeriodCount;  // 0x0510, not reflected
    float AverageJitterInMS;  // 0x0514, not reflected
    TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel *,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel *,0> > ActorChannels;  // 0x1370, not reflected
    UReplicationConnectionDriver * ReplicationConnectionDriver;  // 0x13C0, not reflected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> DestroyedStartupOrDormantActorGUIDs;  // 0x13C8, not reflected
    UPROPERTY() TArray<UChannel*> ChannelsToTick;  // 0x1510, size 0x10
    FHistogram NetConnectionHistogram;  // 0x1520, not reflected
    FName PlayerOnlinePlatformName;  // 0x1550, not reflected
    TMap<UObject *,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,bool,0> > ClientVisibleActorOuters;  // 0x1558, not reflected
    TMap<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0> > PendingUpdateLevelVisibility;  // 0x15A8, not reflected
    FName ClientWorldPackageName;  // 0x15F8, not reflected
    TMap<FString,TArray<float,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32> >,0> > ActorsStarvedByClassTimeMap;  // 0x1600, not reflected
    TMap<int,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0> > IgnoringChannels;  // 0x1650, not reflected
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > ChannelIndexMap;  // 0x16A0, not reflected
    bool bAllowExistingChannelIndex;  // 0x16F0, not reflected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> IgnoredBunchGuids;  // 0x16F8, not reflected
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> IgnoredBunchChannels;  // 0x1748, not reflected
    bool bIgnoreActorBunches;  // 0x1798, not reflected
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> ReservedChannels;  // 0x17A0, not reflected
    bool bReserveDestroyedChannels;  // 0x17F0, not reflected
    bool bIgnoreReservedChannels;  // 0x17F1, not reflected
    TArray<FOutBunch *,TSizedDefaultAllocator<32> > OutgoingBunches;  // 0x17F8, not reflected
    FWrittenChannelsRecord ChannelRecord;  // 0x1808, not reflected
    FNetPacketNotify PacketNotify;  // 0x1830, not reflected
    int32 LastNotifiedPacketId;  // 0x1A88, not reflected
    uint32 OutTotalNotifiedPackets;  // 0x1A8C, not reflected
    uint32 HasDirtyAcks;  // 0x1A90, not reflected
    bool bHasWarnedAboutChannelLimit;  // 0x1A94, not reflected
    bool bConnectionPendingCloseDueToSocketSendFailure;  // 0x1A95, not reflected
    bool bConnectionPendingCloseDueToReplicationFailure;  // 0x1A96, not reflected
    int32 TotalOutOfOrderPackets;  // 0x1A98, not reflected
    TOptional<TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader> > > > PacketOrderCache;  // 0x1AA0, not reflected
    int32 PacketOrderCacheStartIdx;  // 0x1AC0, not reflected
    int32 PacketOrderCacheCount;  // 0x1AC4, not reflected
    FNetConnectionSaturationAnalytics SaturationAnalytics;  // 0x1AC8, not reflected
    FNetConnectionPacketAnalytics PacketAnalytics;  // 0x1AE8, not reflected
    bool bFlushingPacketOrderCache;  // 0x1B18, not reflected
    uint32 ConnectionId;  // 0x1B1C, not reflected
    bool bFlushedNetThisFrame;  // 0x1B20, not reflected
    AActor * RepContextActor;  // 0x1B28, not reflected
    ULevel * RepContextLevel;  // 0x1B30, not reflected
    bool bAutoFlush;  // 0x1B38, not reflected

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
