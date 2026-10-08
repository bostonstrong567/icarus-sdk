// /Script/Engine.BuildPromotionOpenAssetSettings
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h

USTRUCT()
struct FBuildPromotionOpenAssetSettings
{
    UPROPERTY(EditAnywhere, Config) FFilePath BlueprintAsset;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) FFilePath MaterialAsset;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, Config) FFilePath ParticleSystemAsset;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, Config) FFilePath SkeletalMeshAsset;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) FFilePath StaticMeshAsset;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) FFilePath TextureAsset;  // 0x0050, size 0x10
};
