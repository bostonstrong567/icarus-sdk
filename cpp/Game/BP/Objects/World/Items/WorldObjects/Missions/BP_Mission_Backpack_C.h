// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Backpack.BP_Mission_Backpack_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x348, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Backpack_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh1;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0340, size 0x8
};
