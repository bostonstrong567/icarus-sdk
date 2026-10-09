// /Script/Engine.SkeletalMeshSamplingInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h

USTRUCT()
struct FSkeletalMeshSamplingInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) TArray<FSkeletalMeshSamplingRegion> Regions;  // 0x0000, size 0x10
private:
    UPROPERTY() FSkeletalMeshSamplingBuiltData BuiltData;  // 0x0010, size 0x20
};
