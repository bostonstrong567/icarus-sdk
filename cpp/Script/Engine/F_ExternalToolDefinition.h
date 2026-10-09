// /Script/Engine.ExternalToolDefinition
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FExternalToolDefinition
{
public:
    UPROPERTY(EditAnywhere, Config) FString ToolName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FFilePath ExecutablePath;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, Config) FString CommandLineOptions;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, Config) FDirectoryPath WorkingDirectory;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ScriptExtension;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) FDirectoryPath ScriptDirectory;  // 0x0050, size 0x10
};
