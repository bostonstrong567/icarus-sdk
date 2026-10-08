// /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// size 0xF8, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothPhysicalMeshData.h

USTRUCT()
struct FClothPhysicalMeshData
{
    UPROPERTY(EditAnywhere) TArray<FVector> Vertices;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<FVector> Normals;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<uint32> Indices;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) TMap<uint32, FPointWeightMap> WeightMaps;  // 0x0030, size 0x50
    UPROPERTY(EditAnywhere) TArray<float> InverseMasses;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) TArray<FClothVertBoneData> BoneData;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) int32 MaxBoneWeights;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) int32 NumFixedVerts;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere) TArray<uint32> SelfCollisionIndices;  // 0x00A8, size 0x10
    UPROPERTY(Deprecated) TArray<float> MaxDistances;  // 0x00B8, size 0x10
    UPROPERTY(Deprecated) TArray<float> BackstopDistances;  // 0x00C8, size 0x10
    UPROPERTY(Deprecated) TArray<float> BackstopRadiuses;  // 0x00D8, size 0x10
    UPROPERTY(Deprecated) TArray<float> AnimDriveMultipliers;  // 0x00E8, size 0x10
};
