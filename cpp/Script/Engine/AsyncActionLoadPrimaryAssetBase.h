// /Script/Engine.AsyncActionLoadPrimaryAssetBase
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS(Abstract)
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
protected:
    TArray<FPrimaryAssetId,TSizedDefaultAllocator<32> > AssetsToLoad;  // 0x0030, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > LoadBundles;  // 0x0040, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > OldBundles;  // 0x0050, not reflected
    TSharedPtr<FStreamableHandle,0> LoadHandle;  // 0x0060, not reflected
    UAsyncActionLoadPrimaryAssetBase::EAssetManagerOperation Operation;  // 0x0070, not reflected

    // Virtual functions that start here:
    //   HandleLoadCompleted
};
