// /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Derives from: UARBaseAsyncTaskBlueprintProxy > UBlueprintAsyncActionBase > UObject
// size 0xA0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARGeoTrackingSupport.h

UCLASS()
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
    UPROPERTY(BlueprintAssignable) FGeoTrackingAvailabilityDelegate OnSuccess;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FGeoTrackingAvailabilityDelegate OnFailed;  // 0x0060, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TOptional<float> Longitude;  // 0x0070, private
    TOptional<float> Latitude;  // 0x0078, private
    TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> MyTask;  // 0x0080, private
    FString Error;  // 0x0090, private

    UFUNCTION(BlueprintCallable) static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude);  // parameters 0x18
};
