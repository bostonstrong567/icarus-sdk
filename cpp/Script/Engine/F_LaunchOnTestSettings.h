// /Script/Engine.LaunchOnTestSettings
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FLaunchOnTestSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FFilePath LaunchOnTestmap;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FString DeviceID;  // 0x0010, size 0x10
};
