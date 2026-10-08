// /Script/Icarus.SettlementNPCCharacter
// Derives from: AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xB10, declared in Icarus/Source/Icarus/Settlement/SettlementNPCCharacter.h

UCLASS(Abstract, Config=Game)
class ASettlementNPCCharacter : public AIcarusNPCCharacter
{
public:
    UPROPERTY(Replicated, BlueprintReadWrite) FGuid NpcId;  // 0x0918, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) ASettlement* OwningSettlement;  // 0x0928, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle DamageReactionTask;  // 0x0930, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageReactionDuration;  // 0x0948, size 0x4
    UPROPERTY(Transient) TArray<USkeletalMeshComponent*> ClothingComponents;  // 0x0950, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) FSettlementNPC CachedRecord;  // 0x0978, size 0x110
    UPROPERTY(Replicated, ReplicatedUsing) FSettlementNPCTask ReplicatedTaskData;  // 0x0A88, size 0x54
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FSettlementNPCItemsRowHandle HeldItem;  // 0x0ADC, size 0x18
    UPROPERTY(EditAnywhere, Transient, Instanced, BlueprintReadOnly) UMeshComponent* HeldItemMesh;  // 0x0AF8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FStreamableHandle,0> ClothingStreamHandle;  // 0x0960, protected
    uint32 ClothingRefreshCounter;  // 0x0970, protected
    TSharedPtr<FStreamableHandle,0> HeldItemStreamHandle;  // 0x0B00, protected

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool AddNPCToSettlement(ASettlement* Settlement);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) ASettlementBuilding* GetAssignedBuilding() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool GetCurrentTask(FSettlementNPCTask& OutTask) const;  // parameters 0x55
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetNPCData(FSettlementNPC& NPCData) const;  // parameters 0x111
    UFUNCTION() void InitialiseNewNPC();
    UFUNCTION(BlueprintNativeEvent) void OnAddedToSettlement(ASettlement* Settlement);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnCurrentTaskUpdated();
    UFUNCTION(BlueprintNativeEvent) void OnHeldItemUpdated();
    UFUNCTION(BlueprintNativeEvent) void OnOwningSettlementReady(ASettlement* Settlement);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnRecordUpdated();
    UFUNCTION() void OnRep_CachedRecord();
    UFUNCTION() void OnRep_HeldItem();
    UFUNCTION() void OnRep_OwningSettlement();
    UFUNCTION() void OnRep_ReplicatedTaskData();
    UFUNCTION() void TryReplicateTaskUpdates(FGuid ForNPC);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void UpdateHeldItem(const FSettlementNPCItemsRowHandle& NewItem);  // parameters 0x18

    // Virtual functions that start here:
    //   OnAddedToSettlement_Implementation
};
