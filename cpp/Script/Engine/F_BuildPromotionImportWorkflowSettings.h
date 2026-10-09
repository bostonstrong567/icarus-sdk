// /Script/Engine.BuildPromotionImportWorkflowSettings
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FBuildPromotionImportWorkflowSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition Diffuse;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition Normal;  // 0x0020, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition StaticMesh;  // 0x0040, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition ReimportStaticMesh;  // 0x0060, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition BlendShapeMesh;  // 0x0080, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition MorphMesh;  // 0x00A0, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition SkeletalMesh;  // 0x00C0, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition Animation;  // 0x00E0, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition Sound;  // 0x0100, size 0x20
    UPROPERTY(EditAnywhere, Config) FEditorImportWorkflowDefinition SurroundSound;  // 0x0120, size 0x20
    UPROPERTY(EditAnywhere, Config) TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport;  // 0x0140, size 0x10
};
