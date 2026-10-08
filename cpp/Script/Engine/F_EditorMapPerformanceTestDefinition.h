// /Script/Engine.EditorMapPerformanceTestDefinition
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FEditorMapPerformanceTestDefinition
{
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath PerformanceTestmap;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, Config) int32 TestTimer;  // 0x0018, size 0x4
};
