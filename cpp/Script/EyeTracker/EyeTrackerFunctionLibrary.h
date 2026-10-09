// /Script/EyeTracker.EyeTrackerFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/EyeTracker/Public/EyeTrackerFunctionLibrary.h

UCLASS()
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool GetGazeData(FEyeTrackerGazeData& OutGazeData);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsEyeTrackerConnected();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsStereoGazeDataAvailable();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetEyeTrackedPlayer(APlayerController* PlayerController);  // parameters 0x8
};
