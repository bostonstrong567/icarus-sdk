// /Script/MeshWidget.MeshInstanceData
// size 0x10, declared in Icarus/Plugins/IcarusMeshWidget/Source/MeshWidget/Public/MeshInstanceData.h

USTRUCT()
struct FMeshInstanceData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Position;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseAddress;  // 0x000C, size 0x4
};
