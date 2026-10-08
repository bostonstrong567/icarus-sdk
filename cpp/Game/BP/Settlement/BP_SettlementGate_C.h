// /Game/BP/Settlement/BP_SettlementGate.BP_SettlementGate_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x3A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementGate_C : public AIcarusActor, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* TargetLocation;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavBlockingStaticMeshComponent* NavBlockingStaticMesh1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavBlockingStaticMeshComponent* NavBlockingStaticMesh;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* TriggerBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_GateMesh;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShouldOpen;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UPrimitiveComponent*> OverlappedComponents;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedCloseTimer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* OpenAnim;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* CloseAnim;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* GateMesh;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* DamagedGateMesh;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* GateDestructibleMesh;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsDamaged;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) uint8 DamagedState;  // 0x0349, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTask RepairTask;  // 0x034C, size 0x54

    UFUNCTION() void BndEvt__BP_SettlementGate_TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BP_SettlementGate_TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void DelayedClose();
    UFUNCTION() void ExecuteUbergraph_BP_SettlementGate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_DamagedState();
    UFUNCTION(BlueprintCallable) void OnRep_ShouldOpen();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void UpdateDoors();
};
