// /Game/BP/AI/GOAP/BehaviourTrees/BTD_AbortSubtreeOnDamage.BTD_AbortSubtreeOnDamage_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_AbortSubtreeOnDamage_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorState* OwnerActorState;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalDamageTaken;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageThreshold;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag TagToApplyOnAbort;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TagDuration;  // 0x00C0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTD_AbortSubtreeOnDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnOwnerDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
