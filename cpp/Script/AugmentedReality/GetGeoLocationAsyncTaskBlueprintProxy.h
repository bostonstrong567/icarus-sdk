// /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Derives from: UARBaseAsyncTaskBlueprintProxy > UBlueprintAsyncActionBase > UObject
// size 0xA0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARGeoTrackingSupport.h

UCLASS()
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
    UPROPERTY(BlueprintAssignable) FGetGeoLocationDelegate OnSuccess;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FGetGeoLocationDelegate OnFailed;  // 0x0060, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FVector WorldPosition;  // 0x0070, private
    TSharedPtr<FGetGeoLocationAsyncTask,1> MyTask;  // 0x0080, private
    FString Error;  // 0x0090, private

    UFUNCTION(BlueprintCallable) static UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, const FVector& WorldPosition);  // parameters 0x20
};
