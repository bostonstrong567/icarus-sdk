// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_AdvancedAlterationBench.BP_AdvancedAlterationBench_C
// Derives from: ABP_AlterationBench_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xBC8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AdvancedAlterationBench_C : public ABP_AlterationBench_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void ModifyAlterTime(float AlterTickTime, float& ModifiedAlterTickTime);  // parameters 0x8
};
