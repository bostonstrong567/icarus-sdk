// /Game/BP/AI/Basic/Mounts/BTTask_Basic_JumpTo_Attack.BTTask_Basic_JumpTo_Attack_C
// Derives from: UBTTask_Basic_JumpTo_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1C8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_Basic_JumpTo_Attack_C : public UBTTask_Basic_JumpTo_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttackMontageName;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DamageSourceLocationOverride;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SourceLocation;  // 0x0130, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> TempIgnoreActors;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LaunchRadiusMultiplier;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EObjectTypeQuery>> DamageSourceCollisionObjectTypes;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> HitActors;  // 0x0168, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreFriendlyFire;  // 0x01B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidHit;  // 0x01B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoCalculateLaunchForce;  // 0x01BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomLaunchForce;  // 0x01BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpwardsLaunchAngle;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomAttackRadius;  // 0x01C4, size 0x4

    UFUNCTION(BlueprintCallable) void DamageHitTarget(AActor* HitActor, FHitResult Hit);  // parameters 0x90
    UFUNCTION() void ExecuteUbergraph_BTTask_Basic_JumpTo_Attack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMontageNotify(FName NotifyName, USkeletalMeshComponent* Component, UAnimSequenceBase* Anim);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void StartJump();
};
