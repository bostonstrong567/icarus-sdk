// /Script/Engine.AsyncActionLoadPrimaryAssetClass
// Derives from: UAsyncActionLoadPrimaryAssetBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS()
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnPrimaryAssetClassLoaded Completed;  // 0x0078, size 0x10

    UFUNCTION(BlueprintCallable) static UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);  // parameters 0x30
};
