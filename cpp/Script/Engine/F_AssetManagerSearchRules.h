// /Script/Engine.AssetManagerSearchRules
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h

USTRUCT()
struct FAssetManagerSearchRules
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> AssetScanPaths;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> IncludePatterns;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> ExcludePatterns;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UObject> AssetBaseClass;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasBlueprintClasses;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForceSynchronousScan;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipVirtualPathExpansion;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipManagerIncludeCheck;  // 0x003B, size 0x1

    // Not reflected:
    TDelegate<bool __cdecl(FAssetData const &,FAssetManagerSearchRules const &),FDefaultDelegateUserPolicy> ShouldIncludeDelegate;  // 0x0040
};
