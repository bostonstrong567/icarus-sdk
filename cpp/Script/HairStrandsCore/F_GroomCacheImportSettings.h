// /Script/HairStrandsCore.GroomCacheImportSettings
// size 0x20, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCacheImportOptions.h

USTRUCT()
struct FGroomCacheImportSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bImportGroomCache;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bImportGroomAsset;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoftObjectPath GroomAsset;  // 0x0008, size 0x18
};
