// /Script/Engine.MaterialEditorPromotionSettings
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FMaterialEditorPromotionSettings
{
public:
    UPROPERTY(EditAnywhere) FFilePath DefaultMaterialAsset;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FFilePath DefaultDiffuseTexture;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FFilePath DefaultNormalTexture;  // 0x0020, size 0x10
};
