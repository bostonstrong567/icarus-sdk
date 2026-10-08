// /Script/HeadMountedDisplay.XRHMDData
// size 0x40, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h

USTRUCT()
struct FXRHMDData
{
    UPROPERTY(BlueprintReadOnly) bool bValid;  // 0x0000, size 0x1
    UPROPERTY(BlueprintReadOnly) FName DeviceName;  // 0x0004, size 0x8
    UPROPERTY(BlueprintReadOnly) FGuid ApplicationInstanceID;  // 0x000C, size 0x10
    UPROPERTY(BlueprintReadOnly) ETrackingStatus TrackingStatus;  // 0x001C, size 0x1
    UPROPERTY(BlueprintReadOnly) FVector Position;  // 0x0020, size 0xC
    UPROPERTY(BlueprintReadOnly) FQuat Rotation;  // 0x0030, size 0x10
};
