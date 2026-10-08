// /Script/Engine.MeshBuildSettings
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FMeshBuildSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseMikkTSpace : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRecomputeNormals : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRecomputeTangents : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bComputeWeightedNormals : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRemoveDegenerates : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBuildAdjacencyBuffer : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBuildReversedIndexBuffer : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseHighPrecisionTangentBasis : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseFullPrecisionUVs : 1;  // 0x0001, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateLightmapUVs : 1;  // 0x0001, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateDistanceFieldAsIfTwoSided : 1;  // 0x0001, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSupportFaceRemap : 1;  // 0x0001, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinLightmapResolution;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SrcLightmapIndex;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DstLightmapIndex;  // 0x000C, size 0x4
    UPROPERTY(Deprecated) float BuildScale;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BuildScale3D;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceFieldResolutionScale;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DistanceFieldReplacementMesh;  // 0x0028, size 0x8
};
