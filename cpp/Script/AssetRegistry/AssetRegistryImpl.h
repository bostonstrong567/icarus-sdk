// /Script/AssetRegistry.AssetRegistryImpl
// Derives from: UObject
// size 0x850, declared in Engine/Source/Runtime/AssetRegistry/Private/AssetRegistry.h

UCLASS(Transient)
class UAssetRegistryImpl : public UObject, public IAssetRegistry
{
private:
    FAssetRegistryState State;  // 0x0030, not reflected
    FAssetRegistrySerializationOptions SerializationOptions;  // 0x02A0, not reflected
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> CachedEmptyPackages;  // 0x03A0, not reflected
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > CachedBPInheritanceMap;  // 0x03F0, not reflected
    bool bIsTempCachingEnabled;  // 0x0440, not reflected
    bool bIsTempCachingAlwaysEnabled;  // 0x0441, not reflected
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > TempCachedInheritanceMap;  // 0x0448, not reflected
    TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0> > TempReverseInheritanceMap;  // 0x0498, not reflected
    bool bIsTempCachingUpToDate;  // 0x04E8, not reflected
    uint64 TempCachingRegisteredClassesVersionNumber;  // 0x04F0, not reflected
    uint64 ClassGeneratorNamesRegisteredClassesVersionNumber;  // 0x04F8, not reflected
    bool bUpdateDiskCacheAfterLoad;  // 0x0500, not reflected
    FPathTree CachedPathTree;  // 0x0508, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > BlacklistScanFilters;  // 0x05A8, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > BlacklistContentSubPaths;  // 0x05B8, not reflected
    TSharedPtr<FAssetDataGatherer,0> BackgroundAssetSearch;  // 0x05C8, not reflected
    TBackgroundGatherResults<FAssetData *,TSizedDefaultAllocator<32> > BackgroundAssetResults;  // 0x05D8, not reflected
    TBackgroundGatherResults<FString,TSizedDefaultAllocator<32> > BackgroundPathResults;  // 0x05F0, not reflected
    TBackgroundGatherResults<FPackageDependencyData,TSizedDefaultAllocator<32> > BackgroundDependencyResults;  // 0x0608, not reflected
    TBackgroundGatherResults<FString,TSizedDefaultAllocator<32> > BackgroundCookedPackageNamesWithoutAssetDataResults;  // 0x0620, not reflected
    float MaxSecondsPerFrame;  // 0x0638, not reflected
    UAssetRegistryImpl::FPathAddedEvent PathAddedEvent;  // 0x0640, not reflected
    UAssetRegistryImpl::FPathRemovedEvent PathRemovedEvent;  // 0x0658, not reflected
    UAssetRegistryImpl::FAssetAddedEvent AssetAddedEvent;  // 0x0670, not reflected
    UAssetRegistryImpl::FAssetRemovedEvent AssetRemovedEvent;  // 0x0688, not reflected
    UAssetRegistryImpl::FAssetRenamedEvent AssetRenamedEvent;  // 0x06A0, not reflected
    UAssetRegistryImpl::FAssetUpdatedEvent AssetUpdatedEvent;  // 0x06B8, not reflected
    UAssetRegistryImpl::FInMemoryAssetCreatedEvent InMemoryAssetCreatedEvent;  // 0x06D0, not reflected
    UAssetRegistryImpl::FInMemoryAssetDeletedEvent InMemoryAssetDeletedEvent;  // 0x06E8, not reflected
    UAssetRegistryImpl::FFilesLoadedEvent FileLoadedEvent;  // 0x0700, not reflected
    UAssetRegistryImpl::FFileLoadProgressUpdatedEvent FileLoadProgressUpdatedEvent;  // 0x0718, not reflected
    double FullSearchStartTime;  // 0x0730, not reflected
    double AmortizeStartTime;  // 0x0738, not reflected
    double TotalAmortizeTime;  // 0x0740, not reflected
    bool bGatherDependsData;  // 0x0748, not reflected
    bool bInitialSearchCompleted;  // 0x0749, not reflected
    bool bVerifyMountPointAfterGather;  // 0x074A, not reflected
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> SynchronouslyScannedPathsAndFiles;  // 0x0750, not reflected
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> ClassGeneratorNames;  // 0x07A0, not reflected
    TMap<FString,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDelegateHandle,0> > OnDirectoryChangedDelegateHandles;  // 0x07F0, not reflected
    TArray<UAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32> > PackageRedirects;  // 0x0840, not reflected
};
