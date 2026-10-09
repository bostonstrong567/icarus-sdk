// /Script/Engine.SkeletalMeshBuildSettings
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FSkeletalMeshBuildSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRecomputeNormals : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRecomputeTangents : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseMikkTSpace : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bComputeWeightedNormals : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRemoveDegenerates : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseHighPrecisionTangentBasis : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseFullPrecisionUVs : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBuildAdjacencyBuffer : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdPosition;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdTangentNormal;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdUV;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MorphThresholdPosition;  // 0x0010, size 0x4
};
