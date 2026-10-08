// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_SprayAttack.BTTask_PerformAction_SprayAttack_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x210, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_SprayAttack_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EObjectTypeQuery>> DamageSourceCollisionObjectTypes;  // 0x01A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* ControlledPawn;  // 0x01B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DamageSourceLocationOverride;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SphereRadius;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugSphere;  // 0x01CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x01D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AreHitsRelevant;  // 0x01DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cooldown;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Timer;  // 0x01E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxTicks;  // 0x01E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentTicks;  // 0x01EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle SprayModifier;  // 0x01F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Modifier_Lifetime;  // 0x0208, size 0x4, named "Modifier Lifetime"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Modifier_Effectiveness;  // 0x020C, size 0x4, named "Modifier Effectiveness"

    UFUNCTION(BlueprintCallable) void AddModifierToRelevantActors();
    UFUNCTION(BlueprintCallable) void CacheSocketLocation();
    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_SprayAttack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshComponent* GetRelevantSkeletalMeshComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMontageComplete();
    UFUNCTION(BlueprintCallable) void OnMontageInterrupted();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
};
