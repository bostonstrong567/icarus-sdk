// /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Derives from: UARBaseAsyncTaskBlueprintProxy > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Engine/Source/Runtime/AugmentedReality/Public/ARBlueprintProxy.h

UCLASS()
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
    UPROPERTY(BlueprintAssignable) FARSaveWorldPin OnSuccess;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FARSaveWorldPin OnFailed;  // 0x0060, size 0x10
private:
    TSharedPtr<FARSaveWorldAsyncTask,1> SaveWorldTask;  // 0x0070, not reflected
public:
    UFUNCTION(BlueprintCallable) static UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);  // parameters 0x10
};
