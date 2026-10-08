// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_Researcher_D.BP_Dead_Researcher_D_C
// Derives from: ABP_Dead_NPC_Deployable_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x771, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_Researcher_D_C : public ABP_Dead_NPC_Deployable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShowVialInHand;  // 0x0770, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Dead_Researcher_D(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnItemRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_ShowVialInHand();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
