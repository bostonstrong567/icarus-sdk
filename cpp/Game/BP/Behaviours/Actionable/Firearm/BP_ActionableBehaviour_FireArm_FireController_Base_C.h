// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C
// Derives from: UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xAE0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_Base_C : public UBP_ActionableBehaviour_Firearm_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool WantsFire;  // 0x09E0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsFiring;  // 0x09E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnWeaponFired OnWeaponFired;  // 0x09E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFireTime;  // 0x09F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RefireTimer;  // 0x0A00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> LoadedAssets;  // 0x0A08, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AssetsLoaded;  // 0x0A18, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UFMODAudioComponent*, FFirearmSoundData> PersistentAudioComponents;  // 0x0A20, size 0x50
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFXSystemComponent* MuzzleFlashComp;  // 0x0A70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LoadingMuzzleFlash;  // 0x0A78, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 ChanceToNotConsumeAmmoSeed;  // 0x0A7C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream ChanceToNotConsumeAmmoStream;  // 0x0A80, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FireAnimPlaying;  // 0x0A88, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirePressed;  // 0x0A89, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FireAnimationCallbackId;  // 0x0A8C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FireAnimPlayingTimer;  // 0x0A98, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnShotRollback OnShotRollback;  // 0x0AA0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HoldModifierUID;  // 0x0AB0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnProjectileSpawned OnProjectileSpawned;  // 0x0AB8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool PlayFireAnimationBeforeProjectile;  // 0x0AC8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NotifyEvent;  // 0x0AD0, size 0x10

    UFUNCTION(BlueprintCallable) void AIStimulus();
    UFUNCTION(BlueprintCallable) void AddHoldModifier();
    UFUNCTION(BlueprintCallable) FTransform ApplyProjectileSpread(const FTransform& InTransform, FVector2D InVec);  // parameters 0x70
    UFUNCTION(BlueprintCallable) FRotator ApplySpread(FRotator BaseAim, float CurrentShakeScale);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void BeginFire();
    UFUNCTION(BlueprintCallable) void CalcAmmoToConsume(int32& AmmoToConsume);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<CanFireReturnType> CanFire();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckIfWeaponIsObstructed(FVector WeaponBarrelPosition, float CheckDistance, bool& IsObstructed, FHitResult& ObstructingHitResult);  // parameters 0x9C
    UFUNCTION(BlueprintCallable) void CheckRefire();
    UFUNCTION(BlueprintCallable) void ClearFireAnimPlaying();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_RejectShot();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ConvertRoundsPerMinuteToFireRate(int32 RoundsPerMinute, float& FireRate);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server) void DelayProjectileVisiblity(AIcarusItem* Projectile, float DelayTime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void DoFire();
    UFUNCTION(BlueprintCallable) void EndFire();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishFiring();
    UFUNCTION(BlueprintCallable) void FinishSprintToFireDelay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentAmmo(int32& CurrentAmmoCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFirePositionAndRotation(FBallisticData BallisticData, FVector& FirePosition, FRotator& FireRotation);  // parameters 0x208
    UFUNCTION(BlueprintCallable) FTransform GetFirePositionOverride();  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFireRate(float& FireRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLaunchForce();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetProjectileSpawnTransform(float CameraShakeScale, FBallisticData BallisticData, FTransform& NewProjectileTransform);  // parameters 0x230
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRefireRate(float& RefireRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTargetPosition(float Distance, FVector& HitLocation, FVector& CrosshairEndPoint);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void GetWeaponFireTransform(FName FallbackFireSocketName, bool& Valid, FTransform& FireTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void HandleRep_WantsFire();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsAiming(bool& IsAiming);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsCloseToWall(float DistanceToCheck, bool& CloseToWall, FHitResult& OutHit);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayingFirstPersonFireMontage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsReloading(bool& IsReloading);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LateSetup();
    UFUNCTION(BlueprintCallable) void Local_PlayFireAnimation();
    UFUNCTION(BlueprintCallable) void Local_PlayFireFX();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MC_PlayFireAnimation();
    UFUNCTION(BlueprintCallable, NetMulticast) void MC_PlayFireFX();
    UFUNCTION(BlueprintCallable) void NotifyReloadEnd();
    UFUNCTION(BlueprintImplementableEvent) void OnActionInsufficientDurability(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void OnFireAdjustRotation(FTransform InTransform, FRotator& NewRotation, bool& Override);  // parameters 0x3D
    UFUNCTION(BlueprintCallable) void OnFirstPersonAnimationEnd(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFirstPersonAnimationStart(FName AnimationId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B79E7605F8(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6AEAFDFE4BB14A1620E931B275F3002A(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnProjectileSpawned__DelegateSignature(AIcarusItem* Projectile);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_ChanceToNotConsumeAmmoSeed();
    UFUNCTION(BlueprintCallable) void OnRep_WantsFire();
    UFUNCTION(BlueprintCallable) void OnShotRollback__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void OnWeaponFired__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure) void OverrideForceMatch(bool& Override);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayFPWeaponAnimInstanceFire();
    UFUNCTION(BlueprintCallable) void PlayFireAnimation();
    UFUNCTION(BlueprintCallable) void PlayFireAnims();
    UFUNCTION(BlueprintCallable) void PlayFireAudio();
    UFUNCTION(BlueprintCallable) void PlayFireFX();
    UFUNCTION(BlueprintCallable) void PlayFireFailed();
    UFUNCTION(BlueprintCallable) void PlayFiringCameraShake();
    UFUNCTION(BlueprintCallable) void PlayMuzzleFlash();
    UFUNCTION(BlueprintCallable) void PlayNoFireAudio();
    UFUNCTION(BlueprintCallable) void PlayPreFireAnimation();
    UFUNCTION(BlueprintCallable) void PreloadAssets();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveHoldModifier();
    UFUNCTION(BlueprintCallable) void RetryPostReloadFire();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_BeginFire();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_EndFire();
    UFUNCTION(BlueprintCallable) void Setup(AIcarusActor* ForOwner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnProjectile(FProjectileFireParams ProjectileParams);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SprintToBeginFire();
    UFUNCTION(BlueprintCallable) void StartPersistentAudio();
    UFUNCTION(BlueprintCallable) void StopPersistentAudio();
    UFUNCTION(BlueprintCallable) void UpdateAudioPerspective();
};
