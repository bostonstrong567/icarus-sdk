// /Script/Icarus.BallisticComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x440, declared in Icarus/Source/Icarus/Traits/BallisticComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UBallisticComponent : public UTraitComponent
{
public:
    UPROPERTY(BlueprintAssignable) FProjectileFireSignature OnFireProjectile;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHasBeenFired;  // 0x00D1, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) FFireData FireData;  // 0x00D8, size 0x38
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusProjectileComponent* ProjectileMovementComponent;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USphereComponent* CollisionComponent;  // 0x0118, size 0x8
    UPROPERTY(BlueprintAssignable) FProjectileHitSignature OnProjectileHit;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) bool bIsProjectileActive;  // 0x0121, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBallisticData CachedBallisticData;  // 0x0128, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AActor* FiringActor;  // 0x0318, size 0x8
private:
    float LastBounceTime;  // 0x0320, not reflected
    FVector SpawnLocation;  // 0x0324, not reflected
    FTimerHandle CullDistanceTimerHandle;  // 0x0330, not reflected
    FStatContainer DamageStatContainer;  // 0x0338, not reflected
public:
    UFUNCTION() void CheckWithinCullDistance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool CleanupBallistic();  // parameters 0x1
    UFUNCTION() void EnableItemHighlight(UActorComponent* Component, bool bReset);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void FireProjectile(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters, AActor* Instigator);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBallisticData(FBallisticData& OutData) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetDamageStat(FStatsEnum InStat) const;  // parameters 0x14
    UFUNCTION() FStatContainer GetDamageStatContainer();  // parameters 0x108
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetFireDataInstigator() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnProjectileActivated();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnProjectileDeactivated();
    UFUNCTION() void OnRep_FireData();
    UFUNCTION() void OnRep_bIsProjectileActive();
    UFUNCTION() void ProjectileBounce(const FHitResult& Hit, const FVector& ImpactVelocity);  // parameters 0x94
    UFUNCTION(BlueprintCallable) void ProjectileHit(const FHitResult& Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetProjectileActive(bool Active);  // parameters 0x1

    // Virtual functions that start here:
    //   CleanupBallistic_Implementation, FireProjectile_Implementation
    //   OnProjectileActivated_Implementation, OnProjectileDeactivated_Implementation
};
