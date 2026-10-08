// /Script/Engine.PackageMapClient
// Derives from: UPackageMap > UObject
// size 0x408, declared in Engine/Source/Runtime/Engine/Classes/Engine/PackageMapClient.h

UCLASS(Transient)
class UPackageMapClient : public UPackageMap
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0> > NetGUIDExportCountMap;  // 0x00E0
    UNetConnection * Connection;  // 0x0130, protected
    TArray<TArray<unsigned char,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > ExportGUIDArchives;  // 0x0138, protected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> CurrentExportNetGUIDs;  // 0x0148, protected
    TMap<FNetworkGUID,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0> > CurrentQueuedBunchNetGUIDs;  // 0x0198, protected
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > PendingAckGUIDs;  // 0x01E8, protected
    FPackageMapAckState AckState;  // 0x01F8, protected
    FPackageMapAckState * OverrideAckState;  // 0x02E8, protected
    TArray<FOutBunch *,TSizedDefaultAllocator<32> > ExportBunches;  // 0x02F0, protected
    FOutBunch * CurrentExportBunch;  // 0x0300, protected
    int32 ExportNetGUIDCount;  // 0x0308, protected
    TSharedPtr<FNetGUIDCache,0> GuidCache;  // 0x0310, protected
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > MustBeMappedGuidsInLastBunch;  // 0x0320, protected
    TSet<unsigned __int64,DefaultKeyFuncs<unsigned __int64,0>,FDefaultSetAllocator> NetFieldExports;  // 0x0330, protected
    bool bIgnoreReceivedExportGUIDs;  // 0x0380, private
    FNetQueuedActorDelinquencyAnalytics DelinquentQueuedActors;  // 0x0388, private
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > TrackedSyncLoadedGUIDs;  // 0x03F8, private

    // Virtual functions that start here:
    //   IsGUIDPending, SetHasQueuedBunches
};
