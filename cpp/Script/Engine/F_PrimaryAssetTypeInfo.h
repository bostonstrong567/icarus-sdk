// /Script/Engine.PrimaryAssetTypeInfo
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h

USTRUCT()
struct FPrimaryAssetTypeInfo
{
    UPROPERTY(EditAnywhere) FName PrimaryAssetType;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TSoftClassPtr<UObject> AssetBaseClass;  // 0x0008, size 0x28
    UPROPERTY(Transient) TSubclassOf<UObject> AssetBaseClassLoaded;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) bool bHasBlueprintClasses;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) bool bIsEditorOnly;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere) TArray<FDirectoryPath> Directories;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) TArray<FSoftObjectPath> SpecificAssets;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) FPrimaryAssetRules Rules;  // 0x0060, size 0xC
    UPROPERTY(Transient) TArray<FString> AssetScanPaths;  // 0x0070, size 0x10
    UPROPERTY(Transient) bool bIsDynamicAsset;  // 0x0080, size 0x1
    UPROPERTY(Transient) int32 NumberOfAssets;  // 0x0084, size 0x4
};
