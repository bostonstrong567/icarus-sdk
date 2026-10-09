// /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x50, declared in Engine/Source/Runtime/AugmentedReality/Public/ARBlueprintProxy.h

UCLASS(Abstract)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
protected:
    TSharedPtr<FARAsyncTask,1> AsyncTask;  // 0x0038, not reflected
private:
    bool bShouldTick;  // 0x0048, not reflected

    // Virtual functions that start here:
    //   ReportFailure, ReportSuccess
};
