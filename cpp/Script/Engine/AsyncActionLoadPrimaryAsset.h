// /Script/Engine.AsyncActionLoadPrimaryAsset
// Derives from: UAsyncActionLoadPrimaryAssetBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS()
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnPrimaryAssetLoaded Completed;  // 0x0078, size 0x10

    UFUNCTION(BlueprintCallable) static UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);  // parameters 0x30
};
