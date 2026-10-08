// /Game/BP/Behaviours/Ballistic/BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C
// Derives from: UBallisticComponent > UTraitComponent > UActorComponent > UObject
// size 0xA58, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_BallisticBehaviour_Base_C : public UBallisticComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBallisticComponent* BallisticComponent;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBallisticData BallisticData;  // 0x0450, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool KillCam;  // 0x0640, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UObject> PayloadClass;  // 0x0648, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool OnBreak;  // 0x0650, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeployPayloadOnLoad;  // 0x0651, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult PreviousHitResult;  // 0x0654, size 0x88
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FlightSound;  // 0x06E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFXSystemComponent* TrailParticle;  // 0x06E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugBallistic;  // 0x06F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicsAsset* InitialPhysicsAsset;  // 0x06F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasProjectileSettled;  // 0x0700, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasValidHit;  // 0x0701, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* InitialSkeletalMesh;  // 0x0708, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProjectileFireParams AdvancedParams;  // 0x0710, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Bounds;  // 0x0720, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBallisticAudioData AudioData;  // 0x0730, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPayloadClassLoaded PayloadClassLoaded;  // 0x0790, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ProjectileFrozen;  // 0x07A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle PostPayloadDestroyTimer;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LaunchImpulse;  // 0x07B0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TryStopFlightSoundTimerHandle;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) USceneComponent* ReplicatedHomingComponent;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FName ReplicatedHomingBone;  // 0x07D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* InitialStaticMesh;  // 0x07D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> AsyncLoadedObjects;  // 0x07E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x07F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* PredictedKillCamTarget;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasRicocheted;  // 0x0808, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumBounces;  // 0x080C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MAX_BOUNCES;  // 0x0810, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPrePayloadDeploy PrePayloadDeploy;  // 0x0818, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MaxHeightAtApex;  // 0x0828, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* FiringPlayer;  // 0x0838, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirePiercedProjectile;  // 0x0840, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CachedImpulse;  // 0x0844, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProjectileFireParams CachedFireParams;  // 0x0850, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ResetIgnoredActors;  // 0x0860, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPayloadDeploymentType BallisticPayloadDeploymentType;  // 0x0861, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FItemData WeaponItemData;  // 0x0868, size 0x1F0

    UFUNCTION(BlueprintCallable) void AddIgnoreActor(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ApplyAimAssist(AActor* InActor, FName TargetBone, USceneComponent* TargetComponent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ApplyDamage(AActor* HitActor, const FHitResult& HitInfo);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void ApplyKillCam(AActor* InActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BlockLoadAndDeployPayload();
    UFUNCTION(BlueprintCallable) void CacheWeaponItemData();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanAimAssist();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanKillCam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Check_Stealth_Attack();  // named "Check Stealth Attack"
    UFUNCTION(BlueprintCallable) bool CheckAimAssist(AActor*& HitActor, FName& HitBone, USceneComponent*& HitComponent, FPredictProjectilePathResult& PredictResults);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) bool CheckKillCam(AActor*& Target, FName& HitBone, UPrimitiveComponent*& HitComponent);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool CheckKillCamOnTarget(AActor* HitActor, FName CriticalHitBone, FPredictProjectilePathResult InPredictedHit);  // parameters 0xC9
    UFUNCTION(BlueprintCallable) void CheckSpecialMovement();
    UFUNCTION(BlueprintCallable) void CheckStopFlightSoundValid();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CleanupBallistic();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ClearIgnoreActors();
    UFUNCTION(BlueprintCallable) void ConditionalConsumeZapEnergy(FHitResult HitResult);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void DamageBlackListTagsCheck(AActor* Actor, bool& Blacklisted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void DebugTrajectory(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DelayFirePiercedProjectile();
    UFUNCTION(BlueprintCallable) void DestroyBallisticItem();
    UFUNCTION(BlueprintCallable) void DisableCosmetics();
    UFUNCTION(BlueprintCallable) void DoProjectileHit(FHitResult HitResult);  // parameters 0x88
    UFUNCTION() void ExecuteUbergraph_BP_BallisticBehaviour_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBallisticRowHandle(FBallisticRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable) UBP_CriticalHitComponent_C* GetCriticalHitComponent(bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetDebugState();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHomingMagnitude();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetMaxBounces(int32& MaxNumBounces);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetProjectileDamage(FHitResult HitInfo);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetStat(FStatsEnum InputPin, AIcarusCharacter* Player, int32& Value);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ECollisionChannel> GetTraceChannel();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IgnorePlayerCollision();
    UFUNCTION(BlueprintCallable) void LogCurrentHomingTarget();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayHitFX(FHitResult Hit, bool ValidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void OnAttachParentUpdated(AActor* NewParent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHitActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7B9A50C8A(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_65DBCD26461857A86035D28F5CD97DF7(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_BC74464F40A013B4C602FDBDB44FD47D(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnPayloadDeploy();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnProjectileActivated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnProjectileDeactivated();
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnProjectileFrozen();
    UFUNCTION(BlueprintCallable) void OnRep_OnBreak();
    UFUNCTION(BlueprintCallable) void OnRep_ProjectileFrozen();
    UFUNCTION(BlueprintCallable) void PayloadClassLoaded__DelegateSignature();
    UFUNCTION(BlueprintCallable) void PierceObject(AActor* HitActor, FHitResult HitResult, bool ValidHit);  // parameters 0x91
    UFUNCTION(BlueprintCallable) void PlayFlightSound();
    UFUNCTION(BlueprintCallable) void PlayHitAudio(FVector ImpactPoint, TEnumAsByte<EPhysicalSurface> Surface, bool ValidHit, FHitResult& Hit);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void PlayHitEffects(FHitResult Hit, bool ValidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void PrePayloadDeploy__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupParticleComponent(UFXSystemAsset* FxSystemAsset);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShouldPierce(FHitResult ProjectileHit, bool& Valid);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void ShouldRicochet(FHitResult ProjectileHit, bool& ShouldRicochet, bool& ShouldDealRicochetDamage);  // parameters 0x8A
    UFUNCTION(BlueprintCallable) void SpawnPayload();
    UFUNCTION(BlueprintCallable) void StopFlightSound();
    UFUNCTION(BlueprintCallable) void TryStopFlightSound();
    UFUNCTION(BlueprintCallable) void UpdateTrailLocation();
};
