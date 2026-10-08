// /Game/Prototypes/Fish/BP_FishBase.BP_FishBase_C
// Derives from: AFishActor > AIcarusActor > AActor > UObject
// size 0x528, a blueprint class, blueprint

UCLASS(Abstract, Config=Engine)
class ABP_FishBase_C : public AFishActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_BuoyancyComponent_C* BP_BuoyancyComponent;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CorrectionUpdateTime;  // 0x0428, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishDetached FishDetached;  // 0x0430, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FishSetupInit;  // 0x0440, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishSetup FishSetupData_0;  // 0x0448, size 0xC8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* MovementAudio;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FishIsAggressive;  // 0x0518, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Pickup;  // 0x0520, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void AttackPlayer(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void BPOnRep_AttachActor();
    UFUNCTION(BlueprintImplementableEvent) void BPOnRep_Dead();
    UFUNCTION(BlueprintImplementableEvent) void BPOnRep_Scale();
    UFUNCTION(BlueprintCallable) void CheckFishManager();
    UFUNCTION(BlueprintCallable) void DetachFromLure();
    UFUNCTION() void ExecuteUbergraph_BP_FishBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishDetached__DelegateSignature(TEnumAsByte<EFishDetatchReason> Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFishSetup(FFishSetup& FishSetup);  // parameters 0xC8
    UFUNCTION(BlueprintCallable) void KillFish(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayAttackFX();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayPickupFX(AIcarusPlayerCharacter* PickingUpPlayer);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnRep_AwarenessTarget();
    UFUNCTION(BlueprintCallable) void Pickup(AIcarusPlayerCharacterSurvival* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMovementAudioPlayState(bool ShouldPlay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryPlayAttackSound();
    UFUNCTION(BlueprintCallable) void TryPlayPickupSound(AIcarusPlayerCharacter* PickingUpPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateRepLocation();
};
