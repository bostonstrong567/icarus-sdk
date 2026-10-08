// /Script/Engine.SkeletalMeshSamplingInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h

USTRUCT()
struct FSkeletalMeshSamplingInfo
{
    UPROPERTY(EditAnywhere) TArray<FSkeletalMeshSamplingRegion> Regions;  // 0x0000, size 0x10
    UPROPERTY() FSkeletalMeshSamplingBuiltData BuiltData;  // 0x0010, size 0x20
};
