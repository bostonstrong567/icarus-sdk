// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Deployable_BeaconTool.BP_ActionableBehaviour_Deployable_BeaconTool_C
// Derives from: UBP_ActionableBehaviour_DeployableBase_C > UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE68, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Deployable_BeaconTool_C : public UBP_ActionableBehaviour_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData BeaconItemData;  // 0x0C78, size 0x1F0

    UFUNCTION(BlueprintCallable) void BlueprintDeploy(FTransform DeployTransform, AActor* FoundationActor, FItemData ItemData, int32 VarientIndex);  // parameters 0x22C
    UFUNCTION(BlueprintCallable) void CustomDeploymentCheck(AActor* HitActor, bool& ValidPlacement, FText& Reason);  // parameters 0x28
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Deployable_BeaconTool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeploy(ADeployable* SpawnedDeployable);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
};
