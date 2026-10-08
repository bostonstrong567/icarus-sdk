// /Script/StreamlineRHI.StreamlineSettings
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Runtime/Nvidia/Streamline/Source/StreamlineRHI/Public/StreamlineSettings.h

UCLASS(Config=Engine)
class UStreamlineSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool bEnableStreamlineD3D12;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableStreamlineD3D11;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableDLSSFGInPlayInEditorViewports;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bLoadDebugOverlay;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowOTAUpdate;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere, Config) int32 NVIDIANGXApplicationId;  // 0x0030, size 0x4
};
