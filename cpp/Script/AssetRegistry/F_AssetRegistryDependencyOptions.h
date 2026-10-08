// /Script/AssetRegistry.AssetRegistryDependencyOptions
// size 0x5, declared in Engine/Source/Runtime/AssetRegistry/Public/AssetRegistry/IAssetRegistry.h

USTRUCT()
struct FAssetRegistryDependencyOptions
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeSoftPackageReferences;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeHardPackageReferences;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeSearchableNames;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeSoftManagementReferences;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIncludeHardManagementReferences;  // 0x0004, size 0x1
};
