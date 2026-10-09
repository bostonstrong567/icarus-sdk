// /Script/HeadMountedDisplay.XRDeviceId
// size 0xC, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h

USTRUCT()
struct FXRDeviceId
{
public:
    UPROPERTY(BlueprintReadOnly) FName SystemName;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadOnly) int32 DeviceId;  // 0x0008, size 0x4
};
