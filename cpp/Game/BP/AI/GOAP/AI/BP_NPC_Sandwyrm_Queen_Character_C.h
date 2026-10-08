// /Game/BP/AI/GOAP/AI/BP_NPC_Sandwyrm_Queen_Character.BP_NPC_Sandwyrm_Queen_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD4A, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Sandwyrm_Queen_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CD8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<WyrmQueenState> WyrmState;  // 0x0CE0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsDiving;  // 0x0CE1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName WyrmStateKey;  // 0x0CE4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSoloPlayer;  // 0x0CEC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x0CF0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ScaledStatsToAdd;  // 0x0CF8, size 0x50
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsAlive;  // 0x0D48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D49, size 0x1

    UFUNCTION(BlueprintCallable) void AddInitialStats();
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Sandwyrm_Queen_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_2911C233422D35E2FA70FA8E8822F513(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_2911C233422D35E2FA70FA8E8822F513(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_2911C233422D35E2FA70FA8E8822F513(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_2911C233422D35E2FA70FA8E8822F513(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_2911C233422D35E2FA70FA8E8822F513(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_WyrmState();
    UFUNCTION(BlueprintCallable) void OnStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
};
