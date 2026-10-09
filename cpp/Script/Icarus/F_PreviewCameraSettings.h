// /Script/Icarus.PreviewCameraSettings
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/PreviewCameraSettingsLibrary.generated.h

USTRUCT()
struct FPreviewCameraSettings : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform RelativeOffset;  // 0x0020, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraFOV;  // 0x0050, size 0x4
};
