// /Script/OnlineSubsystemUtils.OnlinePIESettings
// Derives from: UDeveloperSettings > UObject
// size 0x50, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Private/OnlinePIESettings.h

UCLASS(Config=EditorPerProjectUserSettings)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) bool bOnlinePIEEnabled;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FPIELoginSettingsInternal> Logins;  // 0x0040, size 0x10
};
