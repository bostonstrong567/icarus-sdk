// /Script/Engine.DebugCameraControllerSettings
// Derives from: UDeveloperSettings > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Engine/DebugCameraControllerSettings.h

UCLASS(Config=Engine)
class UDebugCameraControllerSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;  // 0x0038, size 0x10
};
