// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_AttackTarget.BTT_IcarusGOAP_AttackTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x15C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_AttackTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentTarget;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MontageSection;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPCharacter_C* OwnerNPC;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NotifyName;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> MontageRef;  // 0x00F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAIController* OwnerController;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* OwnerPawn;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageRadius;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPActionsRowHandle GOAPAttackAction;  // 0x0134, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MontageSectionOverride;  // 0x014C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DamageSourceSocketOverride;  // 0x0154, size 0x8

    UFUNCTION(BlueprintCallable) void AnimNotifyFired(UAnimMontage* Montage, FName NotifyName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CalcLaunchAmount(FVector Dir, FVector& OutForce);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DoDamage(AController* Instigator, AActor* Causer, bool LaunchSelf);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void DoLaunch(bool IncludeSelf);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_AttackTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetBestAttackSourceLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnMontage(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PlayHitEffects(AActor* HitActor, FHitResult& OutHit);  // parameters 0x90
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
