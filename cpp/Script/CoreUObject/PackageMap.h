// /Script/CoreUObject.PackageMap
// Derives from: UObject
// size 0xE0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/CoreNet.h

UCLASS()
class UPackageMap : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bSuppressLogs;  // 0x0028, protected
    bool bShouldTrackUnmappedGuids;  // 0x0029, protected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> TrackedUnmappedNetGuids;  // 0x0030, protected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> TrackedMappedDynamicNetGuids;  // 0x0080, protected
    FString DebugContextString;  // 0x00D0, protected

    // Virtual functions that start here:
    //   GetNetGUIDFromObject, GetNetGUIDStats, GetObjectFromNetGUID, IsGUIDBroken, LogDebugInfo
    //   NotifyBunchCommit, NotifyStreamingLevelUnload, PrintExportBatch, ReceivedAck, ReceivedNak
    //   ReportSyncLoadsForProperty, ResetTrackedSyncLoadedGuids, ResolvePathAndAssignNetGUID, SerializeName
    //   SerializeNewActor, SerializeObject, WriteObject
};
