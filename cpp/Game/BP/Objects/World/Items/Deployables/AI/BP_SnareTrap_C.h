// /Game/BP/Objects/World/Items/Deployables/AI/BP_SnareTrap.BP_SnareTrap_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x819, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SnareTrap_C : public ABP_DeployableBase_C, public ICharacterTrap
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BaitLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CableEndPoint;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCableComponent* Cable;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Bait;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sticks;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* TriggerCollider;  // 0x0760, size 0x8
    UPROPERTY() float AnimTimeline_Reset_StickAngle_F9E6348249E647B8410AF695672B4BC0;  // 0x0768, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> AnimTimeline_Reset__Direction_F9E6348249E647B8410AF695672B4BC0;  // 0x076C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* AnimTimeline_Reset;  // 0x0770, size 0x8
    UPROPERTY() float AnimTimeline_Trap_StickAngle_6A7C2757411096865DFAB2A47CB8DE49;  // 0x0778, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> AnimTimeline_Trap__Direction_6A7C2757411096865DFAB2A47CB8DE49;  // 0x077C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* AnimTimeline_Trap;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ACharacter* TrappedCharacter;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TrapRange;  // 0x0790, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* LastTrappedCharacter;  // 0x0798, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> StatsToApplyWhileTrapped;  // 0x07A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTamesRowHandle> BaitedTameRows;  // 0x07F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoesWantDynamicSpawn;  // 0x0800, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DynamicSpawnTimer;  // 0x0808, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDynamicSpawnBlocked;  // 0x0810, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StickAnimOffset;  // 0x0814, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsBaited;  // 0x0818, size 0x1

    UFUNCTION() void AnimTimeline_Reset__FinishedFunc();
    UFUNCTION() void AnimTimeline_Reset__UpdateFunc();
    UFUNCTION() void AnimTimeline_Trap__FinishedFunc();
    UFUNCTION() void AnimTimeline_Trap__UpdateFunc();
    UFUNCTION() void BndEvt__BP_SnareTrap_TriggerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void CleanupTrappedCharacter(ACharacter* TrappedCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearDynamicSpawnCooldown();
    UFUNCTION(BlueprintCallable) void DelayedRevealSnareRope();
    UFUNCTION() void ExecuteUbergraph_BP_SnareTrap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBaitItem(FItemData& BaitItem) const;  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetBaitLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBestBoneToAttachTo(ACharacter* Character, FName& BestBoneOrSocket) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) ACharacter* GetCurrentlyTrappedCharacter() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<ACharacter*> GetCurrentlyTrappedCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTrapOrigin() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetTrapRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseTrappedCharacter(ACharacter* TrappedCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void NotifyDynamicCharacterSpawned();
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_IsBaited();
    UFUNCTION(BlueprintCallable) void OnRep_TrappedCharacter();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RequestDynamicSpawn();
    UFUNCTION(BlueprintCallable) void SetCurrentlyBaited(bool CurrentlyBaited);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetCurrentlyTrappedCharacter(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StartStopAnimTimeline(bool Start);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TrapCharacter(ACharacter* TrappedCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool WantsDynamicSpawn() const;  // parameters 0x1
};
