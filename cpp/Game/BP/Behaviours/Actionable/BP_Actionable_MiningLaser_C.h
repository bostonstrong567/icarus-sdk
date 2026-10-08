// /Game/BP/Behaviours/Actionable/BP_Actionable_MiningLaser.BP_Actionable_MiningLaser_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3F8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_MiningLaser_C : public UBP_ActionableBehaviour_Base_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwningActor;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SkeletalItem_Mining_Laser_C* SKItem;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoFire;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Audio_Component;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* WeaponAudio;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FillablePerTick;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TracesPerSecond;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult LastTrace;  // 0x0350, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Heat;  // 0x03D8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) uint8 ReplicatedHeat;  // 0x03DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsToReachMaxHeat;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsToCooldown;  // 0x03E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOverheated;  // 0x03E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedStart;  // 0x03F0, size 0x8

    UFUNCTION(BlueprintCallable) void ApplyMiningDamage(FHitResult TraceHit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void CanFire(bool& CanFire);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DelayStartMining();
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_MiningLaser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentHeat(float& Heat) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFirePositionAndRotation(FBallisticData BallisticData, FVector& FirePosition, FRotator& FireRotation);  // parameters 0x208
    UFUNCTION(BlueprintCallable) void GetTargetPosition(FVector& HitLocation, FVector& CrosshairEndPoint);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnOverheated();
    UFUNCTION(BlueprintCallable) void OnHitEffects();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) bool PerformMiningTrace(FHitResult& OutHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void PlayCamerashake(bool Initial);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProcessFillableAndDurability();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCurrentHeat(float Heat);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StopFire();
    UFUNCTION(BlueprintCallable) void TickEffects();
    UFUNCTION(BlueprintCallable) void TickTimer();
};
