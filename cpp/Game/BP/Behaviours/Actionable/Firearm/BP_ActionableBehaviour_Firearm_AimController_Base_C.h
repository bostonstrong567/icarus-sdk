// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C
// Derives from: UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x9E8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AimController_Base_C : public UBP_ActionableBehaviour_Firearm_Base_C, public IBP_CrosshairInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimAlpha;  // 0x09E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseExtraVignetteStrength;  // 0x09E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowAimWhileReloading;  // 0x09E5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AimPressed;  // 0x09E6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsScopeShown;  // 0x09E7, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAim(bool& CanAim);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForScopeAlteration(AIcarusPlayerCharacter* PlayerCharacter, FFirearmScopeDataRowHandle& NewScopeRow);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishSprintToAimDelay();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetADSTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCrosshairAimAlpha(float& AimAlpha);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsAiming(bool& IsAiming);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsToggleAim(bool& IsToggleAim);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LateSetup();
    UFUNCTION(BlueprintCallable) void NotifyReloadEnd();
    UFUNCTION(BlueprintCallable) void NotifyReloadStart();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAim(bool NewAim);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetExtraVignetteStrengthEnabled(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SprintToAim();
    UFUNCTION(BlueprintCallable) void TickCameraEffects();
    UFUNCTION(BlueprintCallable) void ToggleAim();
    UFUNCTION(BlueprintCallable) void UpdateAim();
    UFUNCTION(BlueprintCallable) void UpdateCosmetics();
    UFUNCTION(BlueprintCallable) void WantsBowMode(bool& bWantsBowMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WantsShowCrosshair(bool& bShowCrosshair);  // parameters 0x1
};
