// /Script/Engine.AssetManagerSettings
// Derives from: UDeveloperSettings > UObject
// size 0x100, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerSettings.h

UCLASS(NotPlaceable, Config=Game)
class UAssetManagerSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FDirectoryPath> DirectoriesToExclude;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bOnlyCookProductionAssets;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bShouldManagerDetermineTypeAndName;  // 0x0079, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bShouldGuessTypeAndNameInEditor;  // 0x007A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bShouldAcquireMissingChunksOnLoad;  // 0x007B, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FAssetManagerRedirect> AssetPathRedirects;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, Config) TSet<FName> MetaDataTagsForAssetRegistry;  // 0x00B0, size 0x50
};
