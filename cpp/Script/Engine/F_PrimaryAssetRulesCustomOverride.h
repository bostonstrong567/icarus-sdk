// /Script/Engine.PrimaryAssetRulesCustomOverride
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerSettings.h

USTRUCT()
struct FPrimaryAssetRulesCustomOverride
{
public:
    UPROPERTY(EditAnywhere) FPrimaryAssetType PrimaryAssetType;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FDirectoryPath FilterDirectory;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FString FilterString;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) FPrimaryAssetRules Rules;  // 0x0028, size 0xC
};
