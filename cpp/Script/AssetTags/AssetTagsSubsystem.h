// /Script/AssetTags.AssetTagsSubsystem
// Derives from: UEngineSubsystem > UDynamicSubsystem > USubsystem > UObject
// size 0x30, declared in Engine/Plugins/Runtime/AssetTags/Source/AssetTags/Public/AssetTagsSubsystem.h

UCLASS()
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

    UFUNCTION(BlueprintCallable) bool CollectionExists(FName Name);  // parameters 0x9
    UFUNCTION(BlueprintCallable) TArray<FAssetData> GetAssetsInCollection(FName Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable) TArray<FName> GetCollections();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FName> GetCollectionsContainingAsset(FName AssetPathName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) TArray<FName> GetCollectionsContainingAssetData(const FAssetData& AssetData);  // parameters 0x70
    UFUNCTION(BlueprintCallable) TArray<FName> GetCollectionsContainingAssetPtr(UObject* AssetPtr);  // parameters 0x18
};
