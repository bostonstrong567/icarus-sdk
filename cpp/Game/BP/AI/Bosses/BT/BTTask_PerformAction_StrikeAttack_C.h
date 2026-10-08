// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_StrikeAttack.BTTask_PerformAction_StrikeAttack_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x26B, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_StrikeAttack_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> HitActors;  // 0x01A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MustHitWhitelistBones;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCriticalHitLocation> WhitelistBones;  // 0x0200, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RequiredAnimCurve;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RequiredBlackboardBool;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IncludedDamageSourceCollision;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EObjectTypeQuery>> DamageSourceCollisionObjectTypes;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPerfomingDamageSourceAttack;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomLaunchForce;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoCalculateLaunchForce;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryHitCooldown;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* ControlledPawn;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpwardsLaunchAngle;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AreHitsRelevant;  // 0x0254, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DamageSourceLocationOverride;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreFriendlyFire;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LaunchRadiusMultiplier;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OriginalDoOverlaps;  // 0x0268, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoEnableOverlapsOnMesh;  // 0x0269, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UnbindEventsOnHit;  // 0x026A, size 0x1

    UFUNCTION(BlueprintCallable) void DamageHitTarget(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xA4
    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_StrikeAttack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshComponent* GetRelevantSkeletalMeshComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAnimatingMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void OnAnimatingMeshOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnMontageComplete();
    UFUNCTION(BlueprintCallable) void OnMontageInterrupted();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RemoveStaleHitActors();
    UFUNCTION(BlueprintCallable) void WasValidHit(const FHitResult& Hit, bool& WasValid);  // parameters 0x89
};
