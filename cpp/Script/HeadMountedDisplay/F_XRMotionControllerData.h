// /Script/HeadMountedDisplay.XRMotionControllerData
// size 0xA0, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h

USTRUCT()
struct FXRMotionControllerData
{
public:
    UPROPERTY(BlueprintReadOnly) bool bValid;  // 0x0000, size 0x1
    UPROPERTY(BlueprintReadOnly) FName DeviceName;  // 0x0004, size 0x8
    UPROPERTY(BlueprintReadOnly) FGuid ApplicationInstanceID;  // 0x000C, size 0x10
    UPROPERTY(BlueprintReadOnly) EXRVisualType DeviceVisualType;  // 0x001C, size 0x1
    UPROPERTY(BlueprintReadOnly) EControllerHand HandIndex;  // 0x001D, size 0x1
    UPROPERTY(BlueprintReadOnly) ETrackingStatus TrackingStatus;  // 0x001E, size 0x1
    UPROPERTY(BlueprintReadOnly) FVector GripPosition;  // 0x0020, size 0xC
    UPROPERTY(BlueprintReadOnly) FQuat GripRotation;  // 0x0030, size 0x10
    UPROPERTY(BlueprintReadOnly) FVector AimPosition;  // 0x0040, size 0xC
    UPROPERTY(BlueprintReadOnly) FQuat AimRotation;  // 0x0050, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<FVector> HandKeyPositions;  // 0x0060, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<FQuat> HandKeyRotations;  // 0x0070, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<float> HandKeyRadii;  // 0x0080, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bIsGrasped;  // 0x0090, size 0x1
};
