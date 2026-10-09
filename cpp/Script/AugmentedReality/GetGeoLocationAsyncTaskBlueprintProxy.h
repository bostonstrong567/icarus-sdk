// /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Derives from: UARBaseAsyncTaskBlueprintProxy > UBlueprintAsyncActionBase > UObject
// size 0xA0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARGeoTrackingSupport.h

UCLASS()
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
    UPROPERTY(BlueprintAssignable) FGetGeoLocationDelegate OnSuccess;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FGetGeoLocationDelegate OnFailed;  // 0x0060, size 0x10
private:
    FVector WorldPosition;  // 0x0070, not reflected
    TSharedPtr<FGetGeoLocationAsyncTask,1> MyTask;  // 0x0080, not reflected
    FString Error;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, const FVector& WorldPosition);  // parameters 0x20
};
