// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x461, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Throwable_C : public UBP_ActionableBehaviour_Base_C, public IBP_CrosshairInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFiring;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFireDrawPower;  // 0x031C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRangedWeaponData RangedWeaponData;  // 0x0328, size 0xD0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawPower;  // 0x03F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThrowOffset;  // 0x03FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* IcarusItemRef;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDrawing;  // 0x0408, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* ThrownItem;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredAnimMontages;  // 0x0418, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedDrawPower;  // 0x0428, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ReadyToThrow;  // 0x042C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ThrowAnimSection;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IdleAnimSection;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPostProcessComponent* ActionablePostProcess;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FullDrawPowerTimeStamp;  // 0x0448, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCameraComponent* FPCamera;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Thrown;  // 0x0458, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EActionableEventType ThrowEventType;  // 0x0459, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HoldModifierUID;  // 0x045C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPressedButtonDown;  // 0x0460, size 0x1

    UFUNCTION(BlueprintCallable) void AddAimingStat();
    UFUNCTION(BlueprintCallable) void AddHoldModifier();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool BP_ShouldApplyEndStaminaCost(EActionableEventType EventType);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanThrow(bool& CanThrow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DoThrow(FTransform SpawnTransform, float Power);  // parameters 0x34
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Throwable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCrosshairAimAlpha(float& AimAlpha);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentDrawPercentage(float& Percentage);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetStat(FStatsEnum Stat);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasIdleAnim();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasThrowAnim(bool& HasThrowAnim);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsCharging(bool& Charging);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PostThrow();
    UFUNCTION(BlueprintImplementableEvent) void OnActionAborted(EActionableEventType EventType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B75088DB11(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintPure) void PrepareProjectile(FItemData UnPrepared, FItemData& Prepared);  // parameters 0x3E0
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveAimingStat();
    UFUNCTION(BlueprintCallable) void RemoveHoldModifier();
    UFUNCTION(BlueprintCallable) void RequestThrow();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RequestThrow(FTransform SpawnTransform, float Power);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void SetFiring(bool IsFiring);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StopAimAnim();
    UFUNCTION(BlueprintCallable) void UnhideActor();
    UFUNCTION(BlueprintCallable) void UpdatePostProcessAndShake();
    UFUNCTION(BlueprintCallable) void WantsBowMode(bool& bWantsBowMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WantsShowCrosshair(bool& bShowCrosshair);  // parameters 0x1
};
