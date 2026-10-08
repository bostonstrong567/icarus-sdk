// /Game/BP/Behaviours/Actionable/BP_Actionable_Shovel.BP_Actionable_Shovel_C
// Derives from: UBP_ActionableBehaviour_Generic_Melee_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_Shovel_C : public UBP_ActionableBehaviour_Generic_Melee_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SnowClearThresholdDegrees;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<UPhysicalMaterial*> DigHolePhysMaterials;  // 0x03D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UPhysicalMaterial*, FItemRewardsRowHandle> CollectResourceMap;  // 0x0420, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCorrectTrigger;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable) void CollectResource(FItemRewardsRowHandle RowHandle);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_Shovel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetResourceRewardRow(const UPhysicalMaterial*& GroundMaterial, bool& Found, FItemRewardsRowHandle& RewardRow);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnActionHitEvent(AActor* Invoking_Actor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, bool& WasHitSuccessful);  // parameters 0x99
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
};
