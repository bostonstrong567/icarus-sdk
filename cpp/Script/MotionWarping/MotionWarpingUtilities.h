// /Script/MotionWarping.MotionWarpingUtilities
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/MotionWarpingComponent.h

UCLASS()
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static FTransform ExtractRootMotionFromAnimation(UAnimSequenceBase* Animation, float StartTime, float EndTime);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void GetMotionWarpingWindowsForWarpTargetFromAnimation(UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetMotionWarpingWindowsFromAnimation(UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows);  // parameters 0x18
};
