// /Script/Engine.AutomationTestSettings
// Derives from: UObject
// size 0x340, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

UCLASS(Config=Engine)
class UAutomationTestSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) TArray<FString> EngineTestModules;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> EditorTestModules;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath AutomationTestmap;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, Config) TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FSoftObjectPath> AssetsToOpen;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> MapsToPIETest;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, Config) FBuildPromotionTestSettings BuildPromotionTest;  // 0x0090, size 0x1F0
    UPROPERTY(EditAnywhere, Config) FMaterialEditorPromotionSettings MaterialEditorPromotionTest;  // 0x0280, size 0x30
    UPROPERTY(EditAnywhere, Config) FParticleEditorPromotionSettings ParticleEditorPromotionTest;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, Config) FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest;  // 0x02C0, size 0x30
    UPROPERTY(EditAnywhere, Config) TArray<FString> TestLevelFolders;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FExternalToolDefinition> ExternalTools;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FLaunchOnTestSettings> LaunchOnSettings;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, Config) FIntPoint DefaultScreenshotResolution;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Config) float PIETestDuration;  // 0x0338, size 0x4
};
