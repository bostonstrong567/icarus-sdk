// /Script/Icarus.MountVariation
// size 0x150, declared in Icarus/Source/Icarus/AI/Mounts/IcarusMount.h

USTRUCT()
struct FMountVariation
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanBeSelected;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanBeSelectedByForcedEvolution;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInstance>> MeshMaterials;  // 0x0008, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInstance>> GFurMaterials;  // 0x0058, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInstance>> CarcassMeshMaterials;  // 0x00A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInstance>> CarcassGFurMaterials;  // 0x00F8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weighting;  // 0x0148, size 0x4
};
