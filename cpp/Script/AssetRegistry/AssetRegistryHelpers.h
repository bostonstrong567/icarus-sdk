// /Script/AssetRegistry.AssetRegistryHelpers
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/AssetRegistry/Public/AssetRegistry/AssetRegistryHelpers.h

UCLASS(Transient)
class UAssetRegistryHelpers : public UObject
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FAssetData CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* GetAsset(const FAssetData& InAssetData);  // parameters 0x68
    UFUNCTION(BlueprintCallable, BlueprintPure) static TScriptInterface<IAssetRegistry> GetAssetRegistry();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSubclassOf<UObject> GetClass(const FAssetData& InAssetData);  // parameters 0x68
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetExportTextName(const FAssetData& InAssetData);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetFullName(const FAssetData& InAssetData);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsAssetLoaded(const FAssetData& InAssetData);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRedirector(const FAssetData& InAssetData);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUAsset(const FAssetData& InAssetData);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid(const FAssetData& InAssetData);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static FARFilter SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSoftObjectPath ToSoftObjectPath(const FAssetData& InAssetData);  // parameters 0x78
};
