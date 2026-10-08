// /Script/AssetRegistry.AssetRegistryImpl
// Derives from: UObject
// size 0x850, declared in Engine/Source/Runtime/AssetRegistry/Private/AssetRegistry.h

UCLASS(Transient)
class UAssetRegistryImpl : public UObject, public IAssetRegistry
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FAssetRegistryState State;  // 0x0030, private
    FAssetRegistrySerializationOptions SerializationOptions;  // 0x02A0, private
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> CachedEmptyPackages;  // 0x03A0, private
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > CachedBPInheritanceMap;  // 0x03F0, private
    bool bIsTempCachingEnabled;  // 0x0440, private
    bool bIsTempCachingAlwaysEnabled;  // 0x0441, private
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > TempCachedInheritanceMap;  // 0x0448, private
    TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0> > TempReverseInheritanceMap;  // 0x0498, private
    bool bIsTempCachingUpToDate;  // 0x04E8, private
    uint64 TempCachingRegisteredClassesVersionNumber;  // 0x04F0, private
    uint64 ClassGeneratorNamesRegisteredClassesVersionNumber;  // 0x04F8, private
    bool bUpdateDiskCacheAfterLoad;  // 0x0500, private
    FPathTree CachedPathTree;  // 0x0508, private
    TArray<FString,TSizedDefaultAllocator<32> > BlacklistScanFilters;  // 0x05A8, private
    TArray<FString,TSizedDefaultAllocator<32> > BlacklistContentSubPaths;  // 0x05B8, private
    TSharedPtr<FAssetDataGatherer,0> BackgroundAssetSearch;  // 0x05C8, private
    TBackgroundGatherResults<FAssetData *,TSizedDefaultAllocator<32> > BackgroundAssetResults;  // 0x05D8, private
    TBackgroundGatherResults<FString,TSizedDefaultAllocator<32> > BackgroundPathResults;  // 0x05F0, private
    TBackgroundGatherResults<FPackageDependencyData,TSizedDefaultAllocator<32> > BackgroundDependencyResults;  // 0x0608, private
    TBackgroundGatherResults<FString,TSizedDefaultAllocator<32> > BackgroundCookedPackageNamesWithoutAssetDataResults;  // 0x0620, private
    float MaxSecondsPerFrame;  // 0x0638, private
    UAssetRegistryImpl::FPathAddedEvent PathAddedEvent;  // 0x0640, private
    UAssetRegistryImpl::FPathRemovedEvent PathRemovedEvent;  // 0x0658, private
    UAssetRegistryImpl::FAssetAddedEvent AssetAddedEvent;  // 0x0670, private
    UAssetRegistryImpl::FAssetRemovedEvent AssetRemovedEvent;  // 0x0688, private
    UAssetRegistryImpl::FAssetRenamedEvent AssetRenamedEvent;  // 0x06A0, private
    UAssetRegistryImpl::FAssetUpdatedEvent AssetUpdatedEvent;  // 0x06B8, private
    UAssetRegistryImpl::FInMemoryAssetCreatedEvent InMemoryAssetCreatedEvent;  // 0x06D0, private
    UAssetRegistryImpl::FInMemoryAssetDeletedEvent InMemoryAssetDeletedEvent;  // 0x06E8, private
    UAssetRegistryImpl::FFilesLoadedEvent FileLoadedEvent;  // 0x0700, private
    UAssetRegistryImpl::FFileLoadProgressUpdatedEvent FileLoadProgressUpdatedEvent;  // 0x0718, private
    double FullSearchStartTime;  // 0x0730, private
    double AmortizeStartTime;  // 0x0738, private
    double TotalAmortizeTime;  // 0x0740, private
    bool bGatherDependsData;  // 0x0748, private
    bool bInitialSearchCompleted;  // 0x0749, private
    bool bVerifyMountPointAfterGather;  // 0x074A, private
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> SynchronouslyScannedPathsAndFiles;  // 0x0750, private
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> ClassGeneratorNames;  // 0x07A0, private
    TMap<FString,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDelegateHandle,0> > OnDirectoryChangedDelegateHandles;  // 0x07F0, private
    TArray<UAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32> > PackageRedirects;  // 0x0840, private
};
