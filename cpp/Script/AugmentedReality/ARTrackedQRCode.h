// /Script/AugmentedReality.ARTrackedQRCode
// Derives from: UARTrackedImage > UARTrackedGeometry > UObject
// size 0x120, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedQRCode : public UARTrackedImage
{
public:
    UPROPERTY(BlueprintReadOnly) FString QRCode;  // 0x0108, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 Version;  // 0x0118, size 0x4
};
