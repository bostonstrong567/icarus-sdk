// /Script/Engine.MeshMergingSettings
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/MeshMerging.h

USTRUCT()
struct FMeshMergingSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TargetLightMapResolution;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) EUVOutput OutputUVs;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaterialProxySettings MaterialSettings;  // 0x000C, size 0x88
    UPROPERTY(EditAnywhere) int32 GutterSize;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpecificLOD;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMeshLODSelectionType LODSelectionType;  // 0x009C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateLightMapUV : 1;  // 0x009D, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bComputedLightMapResolution : 1;  // 0x009D, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPivotPointAtZero : 1;  // 0x009D, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bMergePhysicsData : 1;  // 0x009D, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bMergeMaterials : 1;  // 0x009D, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCreateMergedMaterial : 1;  // 0x009D, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBakeVertexDataToMesh : 1;  // 0x009D, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseVertexDataForBakingMaterial : 1;  // 0x009D, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseTextureBinning : 1;  // 0x009E, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bReuseMeshLightmapUVs : 1;  // 0x009E, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bMergeEquivalentMaterials : 1;  // 0x009E, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseLandscapeCulling : 1;  // 0x009E, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIncludeImposters : 1;  // 0x009E, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bAllowDistanceField : 1;  // 0x009E, mask 0x20

    // Not reflected:
    EMeshMergeType MergeType;  // 0x009F
};
