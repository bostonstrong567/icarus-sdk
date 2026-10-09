// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Deployable_LargeDeployable.BP_ActionableBehaviour_Deployable_LargeDeployable_C
// Derives from: UBP_ActionableBehaviour_DeployableBase_C > UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Deployable_LargeDeployable_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:
    UFUNCTION(BlueprintCallable) void OnDeploy(ADeployable* SpawnedDeployable);  // parameters 0x8
};
