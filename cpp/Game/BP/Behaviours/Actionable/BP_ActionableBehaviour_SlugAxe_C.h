// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_SlugAxe.BP_ActionableBehaviour_SlugAxe_C
// Derives from: UBP_ActionableBehaviour_Gauntlet_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3F0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_SlugAxe_C : public UBP_ActionableBehaviour_Gauntlet_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NonChargedSection;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IdleAnimSection;  // 0x03E8, size 0x8

    UFUNCTION(BlueprintCallable) void ApplyChargeStats();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_SlugAxe(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActionHitEvent(AActor* Invoking_Actor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* TraitBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetIsCharging(bool IsChargingHit);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
