// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Anvil_Bench.BP_Anvil_Bench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x988, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Anvil_Bench_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0980, size 0x8
};
