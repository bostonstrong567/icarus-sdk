// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xB1D, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_Charge_C : public UBP_ActionableBehaviour_FireArm_FireController_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0AE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargePower;  // 0x0AE8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StaminaUsed;  // 0x0AEC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FullChargePowerTimeStamp;  // 0x0AF0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMatineeCameraShake* CameraShake;  // 0x0AF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LocalChargeCancel;  // 0x0B00, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ChargeShakeTimer;  // 0x0B08, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDoingChargeShake;  // 0x0B10, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastChargePower;  // 0x0B14, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AcceptableClientPowerDifference;  // 0x0B18, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LocalIsFiring;  // 0x0B1C, size 0x1

    UFUNCTION(BlueprintCallable) void BeginFire();
    UFUNCTION(BlueprintCallable) void CancelCharging();
    UFUNCTION(BlueprintCallable) void ChargeShakeBegin();
    UFUNCTION(BlueprintCallable) void ChargeShakeEnd();
    UFUNCTION(BlueprintCallable) void CheckCancelCharge();
    UFUNCTION(BlueprintCallable) void EndFire();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishFiring();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetChargeTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentChargePower(float& ChargePower);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFiring(bool& Firing);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLaunchForce();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleRep_WantsFire();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsChargedForFiring(bool& Charged);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsCharging(bool& IsCharging);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LateSetup();
    UFUNCTION(BlueprintCallable) void OnReloadPressed();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_CancelCharge();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_OnReleasedShot(bool ClientFired, float ClientChargePower);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickCameraEffects();
    UFUNCTION(BlueprintCallable) void TickCharge();
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudioCharge();
};
