// /Script/Engine.AsyncActionLoadPrimaryAssetClassList
// Derives from: UAsyncActionLoadPrimaryAssetBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS()
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnPrimaryAssetClassListLoaded Completed;  // 0x0078, size 0x10

    UFUNCTION(BlueprintCallable) static UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);  // parameters 0x30
};
