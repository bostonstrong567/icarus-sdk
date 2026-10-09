// /Script/Engine.InstancedStaticMeshComponentInstanceData
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h

USTRUCT()
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
public:
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x00B8, size 0x8
    UPROPERTY() FInstancedStaticMeshLightMapInstanceData CachedStaticLighting;  // 0x00C0, size 0x40
    UPROPERTY() TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;  // 0x0100, size 0x10
    UPROPERTY() TArray<float> PerInstanceSMCustomData;  // 0x0110, size 0x10
    TBitArray<FDefaultBitArrayAllocator> SelectedInstances;  // 0x0120, not reflected
    UPROPERTY() int32 InstancingRandomSeed;  // 0x0140, size 0x4
};
