// /Script/Engine.InstancedStaticMeshLightMapInstanceData
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h

USTRUCT()
struct FInstancedStaticMeshLightMapInstanceData
{
public:
    UPROPERTY() FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY() TArray<FGuid> MapBuildDataIds;  // 0x0030, size 0x10
};
