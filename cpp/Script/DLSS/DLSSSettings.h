// /Script/DLSS.DLSSSettings
// Derives from: UObject
// size 0x60, declared in Engine/Plugins/Runtime/Nvidia/DLSS/Source/DLSS/Public/DLSSSettings.h

UCLASS(Config=Engine)
class UDLSSSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool bEnableDLSSD3D12;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableDLSSD3D11;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableDLSSVulkan;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableDLSSInEditorViewports;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableScreenpercentageManipulationInDLSSEditorViewports;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableDLSSInPlayInEditorViewports;  // 0x002D, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bShowDLSSSDebugOnScreenMessages;  // 0x002E, size 0x1
    UPROPERTY(EditAnywhere, Config) FString GenericDLSSBinaryPath;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bGenericDLSSBinaryExists;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, Config) uint32 NVIDIANGXApplicationId;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, Config) FString CustomDLSSBinaryPath;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bCustomDLSSBinaryExists;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowOTAUpdate;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSPreset DLAAPreset;  // 0x005A, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSPreset DLSSQualityPreset;  // 0x005C, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSPreset DLSSBalancedPreset;  // 0x005D, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSPreset DLSSPerformancePreset;  // 0x005E, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSPreset DLSSUltraPerformancePreset;  // 0x005F, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    EDLSSPreset DLSSUltraQualityPreset;  // 0x005B
};
