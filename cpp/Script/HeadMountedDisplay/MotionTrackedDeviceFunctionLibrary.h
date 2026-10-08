// /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/MotionTrackedDeviceFunctionLibrary.h

UCLASS()
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void DisableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void DisableMotionTrackingOfAllControllers();
    UFUNCTION(BlueprintCallable) static void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static bool EnableMotionTrackingForComponent(UMotionControllerComponent* MotionControllerComponent);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);  // parameters 0x6
    UFUNCTION(BlueprintCallable) static bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static TArray<FName> EnumerateMotionSources();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FName GetActiveTrackingSystemName();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMaximumMotionTrackedControllerCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMotionTrackingEnabledControllerCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static bool IsMotionSourceTracking(int32 PlayerIndex, FName SourceName);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMotionTrackedDeviceCountManagementNecessary();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMotionTrackingEnabledForComponent(UMotionControllerComponent* MotionControllerComponent);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);  // parameters 0x6
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);  // parameters 0x1
};
