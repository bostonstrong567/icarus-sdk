// /Script/Icarus.MinimapData
// size 0x38, declared in Icarus/Source/Icarus/DataStructs/WorldData.h

USTRUCT()
struct FMinimapData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> MapTextures;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UTexture2D>> HeightMapTextures;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldBoundaryMin;  // 0x0020, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldBoundaryMax;  // 0x002C, size 0xC
};
