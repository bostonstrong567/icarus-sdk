// /Script/Engine.AsyncActionLoadPrimaryAssetBase
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h

UCLASS(Abstract)
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FPrimaryAssetId,TSizedDefaultAllocator<32> > AssetsToLoad;  // 0x0030, protected
    TArray<FName,TSizedDefaultAllocator<32> > LoadBundles;  // 0x0040, protected
    TArray<FName,TSizedDefaultAllocator<32> > OldBundles;  // 0x0050, protected
    TSharedPtr<FStreamableHandle,0> LoadHandle;  // 0x0060, protected
    UAsyncActionLoadPrimaryAssetBase::EAssetManagerOperation Operation;  // 0x0070, protected

    // Virtual functions that start here:
    //   HandleLoadCompleted
};
