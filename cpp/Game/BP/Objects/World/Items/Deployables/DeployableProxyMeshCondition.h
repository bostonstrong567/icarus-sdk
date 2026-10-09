// /Game/BP/Objects/World/Items/Deployables/DeployableProxyMeshCondition.DeployableProxyMeshCondition
// size 0x10

USTRUCT()
struct DeployableProxyMeshCondition
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* ComponentHeirarchyToEnable;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinimumCondition;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresLinkedSlotable;  // 0x000C, size 0x1
};
