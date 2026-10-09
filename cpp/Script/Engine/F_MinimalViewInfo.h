// /Script/Engine.MinimalViewInfo
// size 0x5F0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraTypes.h

USTRUCT()
struct FMinimalViewInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FOV;  // 0x0018, size 0x4
    UPROPERTY(Transient) float DesiredFOV;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OrthoWidth;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float OrthoNearClipPlane;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float OrthoFarClipPlane;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AspectRatio;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bConstrainAspectRatio : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseFieldOfViewForLOD : 1;  // 0x0030, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECameraProjectionMode> ProjectionMode;  // 0x0034, size 0x1
    UPROPERTY(BlueprintReadWrite) float PostProcessBlendWeight;  // 0x0038, size 0x4
    UPROPERTY(BlueprintReadWrite) FPostProcessSettings PostProcessSettings;  // 0x0040, size 0x560
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) FVector2D OffCenterProjectionOffset;  // 0x05A0, size 0x8
    TOptional<FTransform> PreviousViewTransform;  // 0x05B0, not reflected
};
