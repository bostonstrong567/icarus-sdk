// /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Derives from: UObject
// size 0xE0, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothPhysicalMeshDataBase_Legacy.h

UCLASS()
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
    UPROPERTY() TArray<FVector> Vertices;  // 0x0028, size 0x10
    UPROPERTY() TArray<FVector> Normals;  // 0x0038, size 0x10
    UPROPERTY() TArray<uint32> Indices;  // 0x0048, size 0x10
    UPROPERTY() TArray<float> InverseMasses;  // 0x0058, size 0x10
    UPROPERTY() TArray<FClothVertBoneData> BoneData;  // 0x0068, size 0x10
    UPROPERTY() int32 NumFixedVerts;  // 0x0078, size 0x4
    UPROPERTY() int32 MaxBoneWeights;  // 0x007C, size 0x4
    UPROPERTY() TArray<uint32> SelfCollisionIndices;  // 0x0080, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned int,TArray<float,TSizedDefaultAllocator<32> > *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,TArray<float,TSizedDefaultAllocator<32> > *,0> > IdToArray;  // 0x0090, private
};
