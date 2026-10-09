// /Script/Engine.SkeletalMeshSamplingRegionBuiltData
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h

USTRUCT()
struct FSkeletalMeshSamplingRegionBuiltData
{
public:
    TArray<int,TSizedDefaultAllocator<32> > TriangleIndices;  // 0x0000, not reflected
    TArray<int,TSizedDefaultAllocator<32> > Vertices;  // 0x0010, not reflected
    TArray<int,TSizedDefaultAllocator<32> > BoneIndices;  // 0x0020, not reflected
    FSkeletalMeshAreaWeightedTriangleSampler AreaWeightedSampler;  // 0x0030, not reflected
};
