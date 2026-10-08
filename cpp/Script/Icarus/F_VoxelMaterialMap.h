// /Script/Icarus.VoxelMaterialMap
// size 0x90, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/VoxelMaterialMapLibrary.generated.h

USTRUCT()
struct FVoxelMaterialMap : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> Mesh;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EVoxelResourceCategory, TSoftObjectPtr<UMaterialInterface>> Materials;  // 0x0040, size 0x50
};
