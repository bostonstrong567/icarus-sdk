// /Game/BP/Objects/World/Items/Deployables/Prop/Prop_Chemicals_A.Prop_Chemicals_A_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x722, a blueprint class, blueprint

UCLASS(Config=Engine)
class AProp_Chemicals_A_C : public ABP_DeployableBase_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
};
