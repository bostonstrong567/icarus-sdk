// /Script/Engine.BuildPromotionNewProjectSettings
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FBuildPromotionNewProjectSettings
{
public:
    UPROPERTY(EditAnywhere) FDirectoryPath NewProjectFolderOverride;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FString NewProjectNameOverride;  // 0x0010, size 0x10
};
