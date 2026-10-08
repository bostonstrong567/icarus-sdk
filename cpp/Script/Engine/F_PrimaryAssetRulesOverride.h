// /Script/Engine.PrimaryAssetRulesOverride
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerSettings.h

USTRUCT()
struct FPrimaryAssetRulesOverride
{
    UPROPERTY(EditAnywhere) FPrimaryAssetId PrimaryAssetId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FPrimaryAssetRules Rules;  // 0x0010, size 0xC
};
