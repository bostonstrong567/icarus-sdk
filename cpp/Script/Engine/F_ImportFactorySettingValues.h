// /Script/Engine.ImportFactorySettingValues
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FImportFactorySettingValues
{
    UPROPERTY(EditAnywhere, Config) FString SettingName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FString Value;  // 0x0010, size 0x10
};
