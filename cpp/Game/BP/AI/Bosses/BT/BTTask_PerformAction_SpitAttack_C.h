// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_SpitAttack.BTTask_PerformAction_SpitAttack_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_SpitAttack_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentTargetKeyName;  // 0x01A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectileSpeed;  // 0x01B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpitballCount;  // 0x01B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpitballInaccuracy;  // 0x01B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle SpitballItemData;  // 0x01BC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProjectileSpawnLocationOverride;  // 0x01D4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AdjustForTargetVelocity;  // 0x01DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D AdvancedSpitballInaccuracy;  // 0x01E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FavourHighArc;  // 0x01E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ManualLaunchImpulse;  // 0x01EC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DelayBetweenProjectileSpawns;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFiringProjectiles;  // 0x01FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSocketForLaunchVector;  // 0x01FD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideLaunchForce;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OverrideSpawnLocation;  // 0x0204, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProjSpawnedPerDelay;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemainingProjSpawns;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProperlyAccountForProjectileWeight;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBallisticComponent* Ballistic;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform SpawnTransform;  // 0x0230, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ReportAINoiseEvent;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NoiseEventLoudness;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseDistanceBasedAccuracy;  // 0x0268, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistanceAccuracy;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceAccuracy;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreProjectileVelocitySuggestion;  // 0x027C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NoiseEventTag;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseStatBasedAccuracy;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBlackboardKeySelector> BlackboardActorsToIgnore;  // 0x0290, size 0x10

    UFUNCTION(BlueprintCallable) void AddIgnoreActors(UBallisticComponent* FiredBallistic);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ApplyRandomOffsetToLaunchImpulse(const FVector& LaunchImpulse) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanSuccessfullyFinishExecute(bool& CanFinish) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_SpitAttack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector Get_Projectile_Target_Location(FVector ProjectileSpawnLocation, float LaunchSpeed) const;  // parameters 0x1C, named "Get Projectile Target Location"
    UFUNCTION(BlueprintCallable) void GetProjectileSourceLocationAndRotation(FVector& OutDamageSource, FRotator& OutCustomLaunchRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpitballScale(FVector& OutScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FTransform SpawnTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnProjectileHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void StartSpawningProjectiles(const FItemData& ItemData, FVector Location, const FVector& LaunchImpulse);  // parameters 0x208
};
