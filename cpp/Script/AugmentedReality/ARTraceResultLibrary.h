// /Script/AugmentedReality.ARTraceResultLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/AugmentedReality/Public/ARBlueprintLibrary.h

UCLASS()
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetDistanceFromCamera(const FARTraceResult& TraceResult);  // parameters 0x64
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform GetLocalTransform(const FARTraceResult& TraceResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);  // parameters 0x68
};
