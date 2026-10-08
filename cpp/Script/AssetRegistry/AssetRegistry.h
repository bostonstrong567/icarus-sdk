// /Script/AssetRegistry.AssetRegistry
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/AssetRegistry/Public/AssetRegistry/IAssetRegistry.h

UCLASS(Abstract, MinimalAPI)
class UAssetRegistry : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const;  // parameters 0x12
    UFUNCTION(BlueprintCallable) void GetAllCachedPaths(TArray<FString>& OutPathList) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const;  // parameters 0x70
    UFUNCTION(BlueprintCallable) bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData) const;  // parameters 0x101
    UFUNCTION(BlueprintCallable) bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) const;  // parameters 0x1A
    UFUNCTION(BlueprintCallable) bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const;  // parameters 0x1A
    UFUNCTION(BlueprintCallable) bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const;  // parameters 0x1B
    UFUNCTION(BlueprintCallable) void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable) bool HasAssets(FName PackagePath, bool bRecursive) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLoadingAssets() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable) bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable) void PrioritizeSearchPath(FString PathToPrioritize);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const;  // parameters 0x100
    UFUNCTION(BlueprintCallable) void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SearchAllAssets(bool bSynchronousSearch);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const;  // parameters 0x100
    UFUNCTION(BlueprintCallable) void WaitForCompletion();
};
