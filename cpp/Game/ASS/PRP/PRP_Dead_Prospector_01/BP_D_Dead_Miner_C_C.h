// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_D_Dead_Miner_C.BP_D_Dead_Miner_C_C
// Derives from: ABP_Dead_NPC_Deployable_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x770, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_D_Dead_Miner_C_C : public ABP_Dead_NPC_Deployable_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0768, size 0x8
};
