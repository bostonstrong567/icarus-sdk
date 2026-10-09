// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_MoistureAnalyzer.BP_Prop_MoistureAnalyzer_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_MoistureAnalyzer_C : public ABP_DeployableContainerBase_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
};
