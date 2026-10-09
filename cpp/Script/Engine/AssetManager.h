// /Script/Engine.AssetManager
// Derives from: UObject
// size 0x478, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManager.h

UCLASS()
class UAssetManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TMap<FName,FPrimaryAssetId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetId,0> > AssetPathMap;  // 0x0028, not reflected
    TMap<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0> > AssetRuleOverrides;  // 0x0078, not reflected
    TMap<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32> >,0> > ManagementParentMap;  // 0x00C8, not reflected
    TMap<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0> > CachedAssetBundles;  // 0x0118, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > AlreadyScannedDirectories;  // 0x0168, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > AllAssetSearchRoots;  // 0x0178, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > AddedAssetSearchRoots;  // 0x0188, not reflected
    FStreamableManager StreamableManager;  // 0x0198, not reflected
    TArray<UAssetManager::FPendingChunkInstall,TSizedDefaultAllocator<32> > PendingChunkInstalls;  // 0x0280, not reflected
    TMap<FPrimaryAssetId,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FGuid,0> > PrimaryAssetEncryptionKeyCache;  // 0x0290, not reflected
    UPROPERTY() TArray<UObject*> ObjectReferenceList;  // 0x02E0, size 0x10
    UPROPERTY() bool bIsGlobalAsyncScanEnvironment;  // 0x02F0, size 0x1
    UPROPERTY() bool bShouldGuessTypeAndName;  // 0x02F1, size 0x1
    UPROPERTY() bool bShouldUseSynchronousLoad;  // 0x02F2, size 0x1
    UPROPERTY() bool bIsLoadingFromPakFiles;  // 0x02F3, size 0x1
    UPROPERTY() bool bShouldAcquireMissingChunksOnLoad;  // 0x02F4, size 0x1
    UPROPERTY() bool bOnlyCookProductionAssets;  // 0x02F5, size 0x1
    UPROPERTY() bool bIsBulkScanning;  // 0x02F6, size 0x1
    UPROPERTY() bool bIsPrimaryAssetDirectoryCurrent;  // 0x02F7, size 0x1
    UPROPERTY() bool bIsManagementDatabaseCurrent;  // 0x02F8, size 0x1
    UPROPERTY() bool bUpdateManagementDatabaseAfterScan;  // 0x02F9, size 0x1
    UPROPERTY() bool bIncludeOnlyOnDiskAssets;  // 0x02FA, size 0x1
    UPROPERTY() bool bHasCompletedInitialScan;  // 0x02FB, size 0x1
    UPROPERTY() int32 NumberOfSpawnedNotifications;  // 0x02FC, size 0x4
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > PrimaryAssetTypeRedirects;  // 0x0300, not reflected
    TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0> > PrimaryAssetIdRedirects;  // 0x0350, not reflected
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > AssetPathRedirects;  // 0x03A0, not reflected
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnAddedAssetSearchRootDelegate;  // 0x03F0, not reflected
    FDelegateHandle ChunkInstallDelegateHandle;  // 0x0408, not reflected
private:
    bool bOldTemporaryCachingMode;  // 0x0410, not reflected
    TMap<FName,TSharedRef<FPrimaryAssetTypeData,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,0>,0> > AssetTypeMap;  // 0x0418, not reflected
    IAssetRegistry * CachedAssetRegistry;  // 0x0468, not reflected
    const UAssetManagerSettings * CachedSettings;  // 0x0470, not reflected

    // Virtual functions that start here:
    //   AcquireChunkList, AcquireResourcesForAssetList, AcquireResourcesForPrimaryAssetList
    //   AddAssetSearchRoot, AddDynamicAsset, ApplyCustomPrimaryAssetRulesOverride
    //   ChangeBundleStateForMatchingPrimaryAssets, ChangeBundleStateForPrimaryAssets
    //   DeterminePrimaryAssetIdForObject, DoesAssetMatchSearchRules, DoesPrimaryAssetMatchCustomOverride
    //   ExpandVirtualPaths, ExtractPrimaryAssetIdFromData, ExtractSoftObjectPaths, FindMissingChunkList
    //   FinishInitialLoading, GetAssetBundleEntries, GetAssetBundleEntry, GetAssetDataForPath
    //   GetAssetDataForPathInternal, GetAssetPathForData, GetCachedPrimaryAssetEncryptionKeyGuid
    //   GetManagedPackageList, GetPackageManagers, GetPreviousPrimaryAssetIds, GetPrimaryAssetData
    //   GetPrimaryAssetDataList, GetPrimaryAssetIdForData, GetPrimaryAssetIdForObject
    //   GetPrimaryAssetIdForPackage, GetPrimaryAssetIdForPath, GetPrimaryAssetIdList, GetPrimaryAssetObject
    //   GetPrimaryAssetObjectList, GetPrimaryAssetPath, GetPrimaryAssetPathList, GetPrimaryAssetRules
    //   GetPrimaryAssetTypeInfo, GetPrimaryAssetTypeInfoList, GetRedirectedAssetPath
    //   GetRedirectedPrimaryAssetId, GetResourceAcquireProgress, HasInitialScanCompleted
    //   IsAssetDataBlueprintOfClassSet, IsPathExcludedFromScan, LoadAssetList, LoadPrimaryAsset
    //   LoadPrimaryAssets, LoadPrimaryAssetsWithType, LoadRedirectorMaps
    //   OnAssetRegistryAvailableAfterInitialization, OnAssetStateChangeCompleted, OnChunkDownloaded
    //   PostInitialAssetScan, PreloadPrimaryAssets, RebuildObjectReferenceList, RecursivelyExpandBundleData
    //   RegisterSpecificPrimaryAsset, ScanPathForPrimaryAssets, ScanPathsForPrimaryAssets
    //   ScanPathsSynchronous, ScanPrimaryAssetRulesFromConfig, ScanPrimaryAssetTypesFromConfig
    //   SearchAssetRegistryPaths, SetPrimaryAssetRules, SetPrimaryAssetRulesExplicitly
    //   SetPrimaryAssetTypeRules, ShouldIncludeInAssetSearch, ShouldScanPrimaryAssetType, StartBulkScanning
    //   StartInitialLoading, StopBulkScanning, UnloadPrimaryAsset, UnloadPrimaryAssets
    //   UnloadPrimaryAssetsWithType, UpdateCachedAssetData, WriteCustomReport
};
