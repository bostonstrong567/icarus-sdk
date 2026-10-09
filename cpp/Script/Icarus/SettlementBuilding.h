// /Script/Icarus.SettlementBuilding
// Derives from: AIcarusActor > AActor > UObject
// size 0x3F8, declared in Icarus/Source/Icarus/Settlement/SettlementBuilding.h

UCLASS(Config=Engine)
class ASettlementBuilding : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated, BlueprintReadOnly) int32 InstanceId;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FSettlementBuildingsRowHandle BuildingDefinition;  // 0x02C4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) ASettlement* OwningSettlement;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* MeshComponent;  // 0x02E8, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) ESettlementBuildState BuildState;  // 0x02F0, size 0x1
    UPROPERTY(Replicated, BlueprintReadOnly) float BuildProgress;  // 0x02F4, size 0x4
    ESettlementBuildState InitialBuildState;  // 0x02F8, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle ConstructionTaskType;  // 0x02FC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle DeconstructionTaskType;  // 0x0314, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle RepairTaskType;  // 0x032C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagedBuildProgress;  // 0x0344, size 0x4
    UPROPERTY(BlueprintReadOnly) FGuid ConstructionTaskId;  // 0x0348, size 0x10
    UPROPERTY(BlueprintReadOnly) FGuid DeconstructionTaskId;  // 0x0358, size 0x10
    UPROPERTY() bool bPendingRepair;  // 0x0368, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) bool bIsBuildingActive;  // 0x0369, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) bool bIsPowered;  // 0x036A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnGenerationDepositFailed OnGenerationDepositFailed;  // 0x0370, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGenerationInputsMissing OnGenerationInputsMissing;  // 0x0380, size 0x10
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadOnly) UInventoryComponent* Inventory;  // 0x03D0, size 0x8
    UPROPERTY(BlueprintAssignable) FOnBuildStateChanged OnBuildStateChanged;  // 0x03D8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnBuildProgressChanged OnBuildProgressChanged;  // 0x03E8, size 0x10
private:
    UPROPERTY() float PowerDrawAccumulator;  // 0x036C, size 0x4
    UPROPERTY() TArray<float> GenerationAccumulators;  // 0x0390, size 0x10
    UPROPERTY() TArray<int32> GenerationInputCredits;  // 0x03A0, size 0x10
    TArray<bool,TSizedDefaultAllocator<32> > GenerationBlocked;  // 0x03B0, not reflected
    TArray<bool,TSizedDefaultAllocator<32> > GenerationStarved;  // 0x03C0, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void AddBuildProgress(float Delta);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanAffordConstructionCost() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanConstructBuildingAtLocation(UObject* WorldContextObject, const FVector& Location, const FRotator& Rotation, FText& FailureReason) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool ConsumeConstructionCost();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void Deconstruct();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAssignedWorkerCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetGenerationOutputSummary() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetStatusDescription() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsConstructed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPowered() const;  // parameters 0x1
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void Multicast_GenerationDepositFailed();
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void Multicast_GenerationInputsMissing();
    UFUNCTION(BlueprintNativeEvent) void OnBuildStateUpdated();
    UFUNCTION(BlueprintNativeEvent) void OnBuildingActiveStateUpdated();
    UFUNCTION(BlueprintNativeEvent) void OnBuildingPowerStateUpdated();
    UFUNCTION(BlueprintNativeEvent) void OnDeconstructed();
    UFUNCTION() void OnRep_BuildState();
    UFUNCTION() void OnRep_bIsBuildingActive();
    UFUNCTION() void OnRep_bIsPowered();
    UFUNCTION(BlueprintCallable) void RequestConstructionTask();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void RequestDeconstructionTask();
    UFUNCTION(BlueprintCallable) void RequestRepairTask();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetBuildState(ESettlementBuildState NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetBuildingActive(bool bInActive);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void TickActiveBuilding(float ProspectTimeDelta);  // parameters 0x4
};
