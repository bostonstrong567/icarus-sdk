// /Script/Engine.EditorImportWorkflowDefinition
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FEditorImportWorkflowDefinition
{
public:
    UPROPERTY(EditAnywhere, Config) FFilePath ImportFilePath;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FImportFactorySettingValues> FactorySettings;  // 0x0010, size 0x10
};
