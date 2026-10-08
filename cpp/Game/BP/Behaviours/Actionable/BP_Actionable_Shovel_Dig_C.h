// /Game/BP/Behaviours/Actionable/BP_Actionable_Shovel_Dig.BP_Actionable_Shovel_Dig_C
// Derives from: UBP_ActionableBehaviour_Generic_Melee_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x618, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_Shovel_Dig_C : public UBP_ActionableBehaviour_Generic_Melee_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SnowClearThresholdDegrees;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData GainedResource;  // 0x03D0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCorrectTrigger;  // 0x05C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<UPhysicalMaterial*> DigHolePhysMaterials;  // 0x05C8, size 0x50

    UFUNCTION(BlueprintCallable) void ApplyDirtMoundModifiers(AActor* DirtMound, UIcarusStatContainer* ShovelStatContainer);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_Shovel_Dig(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAdditionalStatsForDugHole(UIcarusStatContainer* ShovelStats, TArray<FIcarusStatReplicated>& HoleAdditionalStats);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnActionHitEvent(AActor* Invoking_Actor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, bool& WasHitSuccessful);  // parameters 0x99
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
};
