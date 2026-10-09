// /Script/Icarus.BaseLevelTeleportRepInfo
// size 0x80, declared in Icarus/Source/Icarus/World/InstancedLevels/BaseLevelTeleport.h

USTRUCT()
struct FBaseLevelTeleportRepInfo
{
public:
    UPROPERTY() FTransform BaseMeshTransform;  // 0x0000, size 0x30
    UPROPERTY() FTransform PlacementMeshTransform;  // 0x0030, size 0x30
    UPROPERTY() UStaticMesh* BaseMeshRef;  // 0x0060, size 0x8
    UPROPERTY() TArray<UMaterialInterface*> BaseMeshMaterials;  // 0x0068, size 0x10
};
