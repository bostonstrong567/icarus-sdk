// /Script/HeadMountedDisplay.XRGestureConfig
// size 0x6, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/XRGestureConfig.h

USTRUCT()
struct FXRGestureConfig
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTap;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHold;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESpatialInputGestureAxis AxisGesture;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNavigationAxisX;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNavigationAxisY;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNavigationAxisZ;  // 0x0005, size 0x1
};
