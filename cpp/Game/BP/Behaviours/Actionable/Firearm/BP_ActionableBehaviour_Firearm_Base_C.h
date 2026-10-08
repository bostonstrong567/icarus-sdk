// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x9D8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_Base_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* OwningActor;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* OwningPlayer;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmData FirearmData;  // 0x0328, size 0x690
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle LateSetupTimer;  // 0x09B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_FirearmCosmeticController_C* CosmeticController;  // 0x09C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WeaponIsReady;  // 0x09C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ComponentInitComplete;  // 0x09C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ElectricAmmoInfusionModifier;  // 0x09CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UBP_FirearmCosmeticController_C> CosmeticControllerClass;  // 0x09D0, size 0x8

    UFUNCTION(BlueprintCallable) void ApplyInfusionCosts();
    UFUNCTION(BlueprintCallable) void ApplyInfusions();
    UFUNCTION(BlueprintCallable) void DamageItemDurability(int32 Amount);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetAdjustedDurabilityDamage(int32 DurabilityLost);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAimController(UBP_ActionableBehaviour_Firearm_AimController_Base_C*& AimController);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAmmoController(UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*& AmmoController);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFireController(UBP_ActionableBehaviour_FireArm_FireController_Base_C*& FireController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetOwnerMeshComponent(USkeletalMeshComponent*& AsSkeletal_Mesh_Component, bool& Valid);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetStat(FStatsEnum Stat, bool ErrorIfZero, int32& Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTimestamp(float& Timestamp);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LateSetup();
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void PlayFirearmSound(const FFirearmSoundData& FirearmSoundData);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void PreloadAssets();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveInfusions();
    UFUNCTION(BlueprintCallable) void RollBoolStat(FStatsEnum Stat, bool& RollResult);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Setup(AIcarusActor* ForOwner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupCosmeticController();
    UFUNCTION(BlueprintCallable) void SetupFirearmData();
    UFUNCTION(BlueprintCallable) void SetupOwner(AIcarusActor* Owner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupPlayer();
    UFUNCTION(BlueprintCallable) void StopAllAnimations();
    UFUNCTION(BlueprintCallable) void TickCameraEffects();
};
