// /Script/Engine.BuildPromotionTestSettings
// size 0x1F0, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FBuildPromotionTestSettings
{
    UPROPERTY(EditAnywhere) FFilePath DefaultStaticMeshAsset;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBuildPromotionImportWorkflowSettings ImportWorkflow;  // 0x0010, size 0x150
    UPROPERTY(EditAnywhere) FBuildPromotionOpenAssetSettings OpenAssets;  // 0x0160, size 0x60
    UPROPERTY(EditAnywhere) FBuildPromotionNewProjectSettings NewProjectSettings;  // 0x01C0, size 0x20
    UPROPERTY(EditAnywhere) FFilePath SourceControlMaterial;  // 0x01E0, size 0x10
};
