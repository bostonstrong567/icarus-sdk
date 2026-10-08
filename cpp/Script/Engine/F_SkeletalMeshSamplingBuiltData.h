// /Script/Engine.SkeletalMeshSamplingBuiltData
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h

USTRUCT()
struct FSkeletalMeshSamplingBuiltData
{
    UPROPERTY() TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;  // 0x0000, size 0x10
    UPROPERTY() TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;  // 0x0010, size 0x10
};
