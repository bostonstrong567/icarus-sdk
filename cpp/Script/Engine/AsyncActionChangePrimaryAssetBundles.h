// /Script/Engine.AsyncActionChangePrimaryAssetBundles
// Derives from: UAsyncActionLoadPrimaryAssetBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS()
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnPrimaryAssetBundlesChanged Completed;  // 0x0078, size 0x10

    UFUNCTION(BlueprintCallable) static UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, const TArray<FName>& NewBundles, const TArray<FName>& OldBundles);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& AddBundles, const TArray<FName>& RemoveBundles);  // parameters 0x40
};
