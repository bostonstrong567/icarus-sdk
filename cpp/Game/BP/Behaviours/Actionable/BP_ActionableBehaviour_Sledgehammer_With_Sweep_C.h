// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Sledgehammer_With_Sweep.BP_ActionableBehaviour_Sledgehammer_With_Sweep_C
// Derives from: UBP_ActionableBehaviour_Sledgehammer_C > UBP_ActionableBehaviour_Generic_Melee_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3F8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Sledgehammer_With_Sweep_C : public UBP_ActionableBehaviour_Sledgehammer_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString HitNotifyName;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString EnableHitNotifyName;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DisableHitNotifyName;  // 0x03E8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Sledgehammer_With_Sweep(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnActionHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
