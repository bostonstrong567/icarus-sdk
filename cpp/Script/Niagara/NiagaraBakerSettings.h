// /Script/Niagara.NiagaraBakerSettings
// Derives from: UObject
// size 0x118, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraBakerSettings.h

UCLASS()
class UNiagaraBakerSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere) float StartSeconds;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) float DurationSeconds;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) int32 FramesPerSecond;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) uint8 bPreviewLooping : 1;  // 0x0034, mask 0x01
    UPROPERTY(EditAnywhere) FIntPoint FramesPerDimension;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) TArray<FNiagaraBakerTextureSettings> OutputTextures;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) ENiagaraBakerViewMode CameraViewportMode;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) FVector CameraViewportLocation;  // 0x0054, size 0xC
    UPROPERTY(EditAnywhere) FRotator CameraViewportRotation;  // 0x00A8, size 0xC
    UPROPERTY(EditAnywhere) float CameraOrbitDistance;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere) float CameraFOV;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere) float CameraOrthoWidth;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseCameraAspectRatio : 1;  // 0x0108, mask 0x01
    UPROPERTY(EditAnywhere) float CameraAspectRatio;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bRenderComponentOnly : 1;  // 0x0110, mask 0x01
};
