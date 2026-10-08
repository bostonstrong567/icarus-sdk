// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_UpgradeBeehive.BP_ActionableBehaviour_UpgradeBeehive_C
// Derives from: UBP_ActionableBehaviour_DeployableBase_C > UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_UpgradeBeehive_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:

    UFUNCTION(BlueprintCallable) void BlueprintDeploy(FTransform DeployTransform, AActor* FoundationActor, FItemData ItemData, int32 VarientIndex);  // parameters 0x22C
    UFUNCTION(BlueprintCallable) void CustomDeploymentCheck(AActor* HitActor, bool& ValidPlacement, FText& Reason);  // parameters 0x28
};
