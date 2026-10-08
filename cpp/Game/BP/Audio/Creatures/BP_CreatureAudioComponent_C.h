// /Game/BP/Audio/Creatures/BP_CreatureAudioComponent.BP_CreatureAudioComponent_C
// Derives from: UCreatureAudioComponent > UActorComponent > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CreatureAudioComponent_C : public UCreatureAudioComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* Creature;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> CurrentSurface;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentDistance;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* DistanceCheckCurve;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* SurfaceCheckCurve;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* FoliageCheckCurve;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentWaterImmersion;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InFoliage;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* WorldMovementComponent;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_GroundSurfaceChecker_C* SurfaceChecker;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* RagdollAudio;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RagdollAudioUpdateTimerHandle;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RagdollAudioUpdateFrequency;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RagdollAudioLastCollisionTime;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RagdollAudioNoCollisionTimeoutTime;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIAudioData AudioData;  // 0x0120, size 0x1D0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* ShelterCheckCurve;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShelterCheckMaxDistance;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaterImmersionReadyForUpdate;  // 0x02FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMountedByLocalPlayer;  // 0x02FD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* AttackHitEffectSound;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FallDamageSound;  // 0x0308, size 0x8

    UFUNCTION(BlueprintCallable) void DistanceUpdate();
    UFUNCTION() void ExecuteUbergraph_BP_CreatureAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FoliageUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentSurface(TEnumAsByte<EPhysicalSurface>& CurrentSurface) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountDamagedSound(EIcarusDamageType DamageType, UFMODEvent*& FMODEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetWaterImmersion();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCreatureDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDismounted();
    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<ECreatureFootstepType> Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnHitEffectsSpawned(const FTransform& SpawnTransform, TEnumAsByte<EPhysicalSurface> HitSurface, AActor* HitActor);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void OnMountDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnMounted(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRagdollCollision(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void PlayRagdollSound(const FHitResult& Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void PlayWorldMovementSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ShelterUpdate();
    UFUNCTION(BlueprintCallable) void StopRagdollAudio();
    UFUNCTION(BlueprintCallable) void SurfaceUpdate();
    UFUNCTION(BlueprintCallable) void TraceForFoliage(bool& InFoliage);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TraceForWaterImmersion(float& WaterImmersion);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateMountState(AIcarusPlayerCharacter* MountingPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateRagdollAudio();
};
