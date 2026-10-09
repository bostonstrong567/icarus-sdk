// /Script/Engine.PackageMapClient
// Derives from: UPackageMap > UObject
// size 0x408, declared in Engine/Source/Runtime/Engine/Classes/Engine/PackageMapClient.h

UCLASS(Transient)
class UPackageMapClient : public UPackageMap
{
public:
    TMap<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0> > NetGUIDExportCountMap;  // 0x00E0, not reflected
protected:
    UNetConnection * Connection;  // 0x0130, not reflected
    TArray<TArray<unsigned char,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > ExportGUIDArchives;  // 0x0138, not reflected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> CurrentExportNetGUIDs;  // 0x0148, not reflected
    TMap<FNetworkGUID,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0> > CurrentQueuedBunchNetGUIDs;  // 0x0198, not reflected
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > PendingAckGUIDs;  // 0x01E8, not reflected
    FPackageMapAckState AckState;  // 0x01F8, not reflected
    FPackageMapAckState * OverrideAckState;  // 0x02E8, not reflected
    TArray<FOutBunch *,TSizedDefaultAllocator<32> > ExportBunches;  // 0x02F0, not reflected
    FOutBunch * CurrentExportBunch;  // 0x0300, not reflected
    int32 ExportNetGUIDCount;  // 0x0308, not reflected
    TSharedPtr<FNetGUIDCache,0> GuidCache;  // 0x0310, not reflected
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > MustBeMappedGuidsInLastBunch;  // 0x0320, not reflected
    TSet<unsigned __int64,DefaultKeyFuncs<unsigned __int64,0>,FDefaultSetAllocator> NetFieldExports;  // 0x0330, not reflected
private:
    bool bIgnoreReceivedExportGUIDs;  // 0x0380, not reflected
    FNetQueuedActorDelinquencyAnalytics DelinquentQueuedActors;  // 0x0388, not reflected
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > TrackedSyncLoadedGUIDs;  // 0x03F8, not reflected

    // Virtual functions that start here:
    //   IsGUIDPending, SetHasQueuedBunches
};
