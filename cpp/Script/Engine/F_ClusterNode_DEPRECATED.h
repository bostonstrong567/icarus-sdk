// /Script/Engine.ClusterNode_DEPRECATED
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h

USTRUCT()
struct FClusterNode_DEPRECATED
{
public:
    UPROPERTY() FVector BoundMin;  // 0x0000, size 0xC
    UPROPERTY() int32 FirstChild;  // 0x000C, size 0x4
    UPROPERTY() FVector BoundMax;  // 0x0010, size 0xC
    UPROPERTY() int32 LastChild;  // 0x001C, size 0x4
    UPROPERTY() int32 FirstInstance;  // 0x0020, size 0x4
    UPROPERTY() int32 LastInstance;  // 0x0024, size 0x4
};
