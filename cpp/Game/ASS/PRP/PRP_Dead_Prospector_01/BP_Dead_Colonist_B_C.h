// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_Colonist_B.BP_Dead_Colonist_B_C
// Derives from: ABP_Dead_NPC_Deployable_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_Colonist_B_C : public ABP_Dead_NPC_Deployable_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Head;  // 0x0760, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
