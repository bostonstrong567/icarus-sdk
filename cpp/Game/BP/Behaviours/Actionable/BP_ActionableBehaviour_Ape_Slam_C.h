// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Ape_Slam.BP_ActionableBehaviour_Ape_Slam_C
// Derives from: UBP_ActionableBehaviour_Generic_Melee_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x40D, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Ape_Slam_C : public UBP_ActionableBehaviour_Generic_Melee_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HitLocation_0;  // 0x03C8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HitImpactNormal_0;  // 0x03D4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> SurfaceHit_0;  // 0x03E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* HitActor_0;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SecondaryAttack;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle ModifierToApply;  // 0x03F4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bHasSlam;  // 0x040C, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Ape_Slam(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActionHitEvent(AActor* Invoking_Actor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, bool& WasHitSuccessful);  // parameters 0x99
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
