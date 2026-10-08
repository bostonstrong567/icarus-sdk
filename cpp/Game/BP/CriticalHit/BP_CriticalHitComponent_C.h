// /Game/BP/CriticalHit/BP_CriticalHitComponent.BP_CriticalHitComponent_C
// Derives from: UIcarusCriticalHitComponent > UActorComponent > UObject
// size 0x21A, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CriticalHitComponent_C : public UIcarusCriticalHitComponent, public IICameraInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ResetTimer;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECriticalHitStage> CurrentStage;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HomingMissile;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CHRotationLocked;  // 0x00C2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CachedTargetLocation;  // 0x00C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CHTargetRotation;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitSetup CurrentCriticalHitConfig;  // 0x00D8, size 0xB0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMatineeCameraShake* ProjectileShake;  // 0x0188, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjStopped;  // 0x0190, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DebugLength;  // 0x0194, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float LuckyBuffer;  // 0x0198, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Debug;  // 0x019C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IgnoreDamage;  // 0x019D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetTimestamp;  // 0x01A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TransitionSpeed;  // 0x01A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectileBaseDamage;  // 0x01A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Projectile;  // 0x01B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator FacingTargetRotation;  // 0x01B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjMissed;  // 0x01C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanUseKillCamAudio;  // 0x01C5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool KillCamAudioApplied;  // 0x01C6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* KillCamAudioEvent;  // 0x01C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance KillCamAudioEventInstance;  // 0x01D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TrackingTargetLocation;  // 0x01D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CachedProjectileRotation;  // 0x01E4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CachedProjectileLocation;  // 0x01F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetFOV;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastProjectileDistance;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* CriticalHitData_Projectile;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* CriticalHitData_Target;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool KillCamRunning;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool KillcamEnabled;  // 0x0219, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_SetDebug(bool bDebug);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_SetIgnoreDamage(bool bIgnore);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_SetLuckyBuffer(float NewLuckyBuffer);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Client, Reliable) void CLIENT_SwitchStage(TEnumAsByte<ECriticalHitStage> Stage);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CalculatePlayerCamera(FCriticalHitSetup Config, AActor* Player, FVector& OutLocation, FRotator& OutRotation, float& OutFOV);  // parameters 0xD4
    UFUNCTION(BlueprintCallable) void CalculateProjectileCamera(FCriticalHitSetup Config, AActor* Projectile, FVector& OutLocation, FRotator& OutRotation, float& OutFOV);  // parameters 0xD4
    UFUNCTION(BlueprintCallable) void CalculateTargetCamera(FCriticalHitSetup Config, FVector Location, FRotator Rotation, FVector& OutLocation, FRotator& OutRotation, float& OutFOV);  // parameters 0xE4
    UFUNCTION(BlueprintCallable) void CancelCriticalHit();
    UFUNCTION(BlueprintCallable) void CheckCameraShake();
    UFUNCTION(BlueprintCallable, BlueprintPure) void CriticalHitActive(bool& Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CriticalHitSpringArm(float SpringArmYaw, FVector TargetLocation, FVector PivotOffset, FVector CameraOffset, FRotator CameraRotationOffset, FVector& Location, FRotator& Rotation);  // parameters 0x4C
    UFUNCTION() void ExecuteUbergraph_BP_CriticalHitComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVector GetCriticalLocationOnTarget();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetDebug() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIgnoreDamage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetLuckyBuffer() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProjectile(AActor*& Projectile);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTargetCentreLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTimeScale(float& TimeScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnKillcamEnabledApplied(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_CriticalHitData();
    UFUNCTION(BlueprintCallable) void OnRep_CriticalHitData_Projectile();
    UFUNCTION(BlueprintCallable) void OnRep_CriticalHitData_Target();
    UFUNCTION(BlueprintCallable) void OnRep_KillcamEnabled();
    UFUNCTION(BlueprintCallable) void ProcessCriticalHit(FPredictProjectilePathParams ProjectilePrediction, AActor* Projectile, bool& CriticalHit, AActor*& Target);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void ProjectileStopped(AActor* Projectile, AActor* HitActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool ProjectileToTargetCheck(bool& Force);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetVariables();
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_CancelCriticalHit();
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_SetKillcamEnabled(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetCriticalHitConfig(const FName& Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTimeScale();
    UFUNCTION(BlueprintCallable) void SetupKillcamSetting();
    UFUNCTION(BlueprintCallable) void SwitchToPlayer();
    UFUNCTION(BlueprintCallable) void SwitchToProjectile();
    UFUNCTION(BlueprintCallable) void SwitchToTarget(bool ServerTriggered);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateAudio();
    UFUNCTION(BlueprintCallable) void UpdateCamera(FVector InLocation, FRotator InRotation, float InFOV, bool ForceUpdate, FVector& OutLocation, FRotator& OutRotation, float& OutFOV, bool& Return);  // parameters 0x3D
    UFUNCTION(BlueprintCallable) void UpdateCriticalHitData();
    UFUNCTION(BlueprintCallable) void UpdateFacingRotation(FVector Start, FVector End, float SmoothingSpeed);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void UpdateTargetFOV(bool Zoom, float ZoomSpeed);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateTargetRotation(bool Rotate, float RotateSpeed);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateTrackingLocation(FVector InLocation, float SmoothingSpeed);  // parameters 0x10
};
