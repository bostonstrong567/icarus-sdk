// /Script/DLSS.DLSSOverrideSettings
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Runtime/Nvidia/DLSS/Source/DLSS/Public/DLSSSettings.h

UCLASS(Config=Engine)
class UDLSSOverrideSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bShowDLSSIncompatiblePluginsToolsWarnings;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere, Config) EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;  // 0x002C, size 0x1
};
