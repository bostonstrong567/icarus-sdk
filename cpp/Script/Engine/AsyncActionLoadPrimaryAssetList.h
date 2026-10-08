// /Script/Engine.AsyncActionLoadPrimaryAssetList
// Derives from: UAsyncActionLoadPrimaryAssetBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS()
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnPrimaryAssetListLoaded Completed;  // 0x0078, size 0x10

    UFUNCTION(BlueprintCallable) static UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);  // parameters 0x30
};
