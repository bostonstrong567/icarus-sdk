// /Script/Engine.ActorChannel
// Derives from: UChannel > UObject
// size 0x290, declared in Engine/Source/Runtime/Engine/Classes/Engine/ActorChannel.h

UCLASS(Transient)
class UActorChannel : public UChannel
{
public:
    UPROPERTY() AActor* Actor;  // 0x0068, size 0x8
    UPROPERTY() TArray<UObject*> CreateSubObjects;  // 0x0158, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FNetworkGUID ActorNetGUID;  // 0x0070
    float CustomTimeDilation;  // 0x0074
    double RelevantTime;  // 0x0078
    double LastUpdateTime;  // 0x0080
    uint32 : 1 SpawnAcked;  // 0x0088
    uint32 : 1 bForceCompareProperties;  // 0x0088
    uint32 : 1 bIsReplicatingActor;  // 0x0088
    uint32 : 1 bClearRecentActorRefs;  // 0x0088
    uint32 : 1 bSkipRoleSwap;  // 0x0088, private
    uint32 : 1 bActorIsPendingKill;  // 0x0088, private
    uint32 : 1 bSuppressQueuedBunchWarningsDueToHitches;  // 0x0088, private
    TSharedPtr<FObjectReplicator,0> ActorReplicator;  // 0x0090
    TMap<UObject *,TSharedRef<FObjectReplicator,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,TSharedRef<FObjectReplicator,0>,0> > ReplicationMap;  // 0x00A0
    TArray<FInBunch *,TSizedDefaultAllocator<32> > QueuedBunches;  // 0x00F0
    double QueuedBunchStartTime;  // 0x0100
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> PendingGuidResolves;  // 0x0108
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > QueuedMustBeMappedGuidsInLastBunch;  // 0x0168
    TArray<FOutBunch *,TSizedDefaultAllocator<32> > QueuedExportBunches;  // 0x0178
    bool bHoldQueuedExportBunchesAndGUIDs;  // 0x0188
    EChannelCloseReason QueuedCloseReason;  // 0x0189
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > SubobjectRepKeyMap;  // 0x0190
    TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0> > SubobjectNakMap;  // 0x01E0
    TArray<int,TSizedDefaultAllocator<32> > PendingObjKeys;  // 0x0230
    TSet<TSharedRef<FQueuedBunchObjectReference,0>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,0>,0>,FDefaultSetAllocator> QueuedBunchObjectReferences;  // 0x0240, private

    // Virtual functions that start here:
    //   NotifyActorChannelOpen
};
