// /Script/Engine.ActorChannel
// Derives from: UChannel > UObject
// size 0x290, declared in Engine/Source/Runtime/Engine/Classes/Engine/ActorChannel.h

UCLASS(Transient)
class UActorChannel : public UChannel
{
public:
    UPROPERTY() AActor* Actor;  // 0x0068, size 0x8
    FNetworkGUID ActorNetGUID;  // 0x0070, not reflected
    float CustomTimeDilation;  // 0x0074, not reflected
    double RelevantTime;  // 0x0078, not reflected
    double LastUpdateTime;  // 0x0080, not reflected
    uint32 : 1 SpawnAcked;  // 0x0088, not reflected
    uint32 : 1 bClearRecentActorRefs;  // 0x0088, not reflected
    uint32 : 1 bForceCompareProperties;  // 0x0088, not reflected
    uint32 : 1 bIsReplicatingActor;  // 0x0088, not reflected
    TSharedPtr<FObjectReplicator,0> ActorReplicator;  // 0x0090, not reflected
    TMap<UObject *,TSharedRef<FObjectReplicator,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,TSharedRef<FObjectReplicator,0>,0> > ReplicationMap;  // 0x00A0, not reflected
    TArray<FInBunch *,TSizedDefaultAllocator<32> > QueuedBunches;  // 0x00F0, not reflected
    double QueuedBunchStartTime;  // 0x0100, not reflected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> PendingGuidResolves;  // 0x0108, not reflected
    UPROPERTY() TArray<UObject*> CreateSubObjects;  // 0x0158, size 0x10
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > QueuedMustBeMappedGuidsInLastBunch;  // 0x0168, not reflected
    TArray<FOutBunch *,TSizedDefaultAllocator<32> > QueuedExportBunches;  // 0x0178, not reflected
    bool bHoldQueuedExportBunchesAndGUIDs;  // 0x0188, not reflected
    EChannelCloseReason QueuedCloseReason;  // 0x0189, not reflected
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > SubobjectRepKeyMap;  // 0x0190, not reflected
    TMap<int,UActorChannel::FPacketRepKeyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0> > SubobjectNakMap;  // 0x01E0, not reflected
    TArray<int,TSizedDefaultAllocator<32> > PendingObjKeys;  // 0x0230, not reflected
private:
    uint32 : 1 bActorIsPendingKill;  // 0x0088, not reflected
    uint32 : 1 bSkipRoleSwap;  // 0x0088, not reflected
    uint32 : 1 bSuppressQueuedBunchWarningsDueToHitches;  // 0x0088, not reflected
    TSet<TSharedRef<FQueuedBunchObjectReference,0>,DefaultKeyFuncs<TSharedRef<FQueuedBunchObjectReference,0>,0>,FDefaultSetAllocator> QueuedBunchObjectReferences;  // 0x0240, not reflected

    // Virtual functions that start here:
    //   NotifyActorChannelOpen
};
