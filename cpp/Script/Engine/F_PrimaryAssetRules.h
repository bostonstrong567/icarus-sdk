// /Script/Engine.PrimaryAssetRules
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h

USTRUCT()
struct FPrimaryAssetRules
{
public:
    UPROPERTY(EditAnywhere) int32 Priority;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 ChunkId;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) bool bApplyRecursively;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) EPrimaryAssetCookRule CookRule;  // 0x0009, size 0x1
};
