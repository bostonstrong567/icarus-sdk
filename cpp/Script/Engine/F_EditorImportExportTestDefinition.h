// /Script/Engine.EditorImportExportTestDefinition
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FEditorImportExportTestDefinition
{
public:
    UPROPERTY(EditAnywhere, Config) FFilePath ImportFilePath;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ExportFileExtension;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bSkipExport;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FImportFactorySettingValues> FactorySettings;  // 0x0028, size 0x10
};
