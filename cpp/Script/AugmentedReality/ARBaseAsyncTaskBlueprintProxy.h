// /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x50, declared in Engine/Source/Runtime/AugmentedReality/Public/ARBlueprintProxy.h

UCLASS(Abstract)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FARAsyncTask,1> AsyncTask;  // 0x0038, protected
    bool bShouldTick;  // 0x0048, private

    // Virtual functions that start here:
    //   ReportFailure, ReportSuccess
};
