// /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Derives from: UARBaseAsyncTaskBlueprintProxy > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Engine/Source/Runtime/AugmentedReality/Public/ARBlueprintProxy.h

UCLASS()
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
    UPROPERTY(BlueprintAssignable) FARGetCandidateObjectPin OnSuccess;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FARGetCandidateObjectPin OnFailed;  // 0x0060, size 0x10
    FVector Location;  // 0x0070, not reflected
    FVector Extent;  // 0x007C, not reflected
private:
    TSharedPtr<FARGetCandidateObjectAsyncTask,1> CandidateObjectTask;  // 0x0088, not reflected
public:
    UFUNCTION(BlueprintCallable) static UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);  // parameters 0x28
};
