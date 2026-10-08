// /Script/Engine.CameraAnim
// Derives from: UObject
// size 0x5D0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraAnim.h

UCLASS(NotPlaceable, MinimalAPI)
class UCameraAnim : public UObject
{
public:
    UPROPERTY() UInterpGroup* CameraInterpGroup;  // 0x0028, size 0x8
    UPROPERTY() float AnimLength;  // 0x0030, size 0x4
    UPROPERTY() FBox BoundingBox;  // 0x0034, size 0x1C
    UPROPERTY(EditAnywhere) uint8 bRelativeToInitialTransform : 1;  // 0x0050, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bRelativeToInitialFOV : 1;  // 0x0050, mask 0x02
    UPROPERTY(EditAnywhere) float BaseFOV;  // 0x0054, size 0x4
    UPROPERTY() FPostProcessSettings BasePostProcessSettings;  // 0x0060, size 0x560
    UPROPERTY() float BasePostProcessBlendWeight;  // 0x05C0, size 0x4
};
