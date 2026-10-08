// /Script/StreamlineRHI.StreamlineOverrideSettings
// Derives from: UObject
// size 0x30, declared in Engine/Plugins/Runtime/Nvidia/Streamline/Source/StreamlineRHI/Public/StreamlineSettings.h

UCLASS(Config=Engine)
class UStreamlineOverrideSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) EStreamlineSettingOverride LoadDebugOverlayOverride;  // 0x0029, size 0x1
};
