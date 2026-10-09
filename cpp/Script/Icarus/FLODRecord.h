// /Script/Icarus.FLODRecord
// Derives from: UObject
// size 0x5C8, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

UCLASS(MinimalAPI)
class UFLODRecord : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnRecordFISMChanged OnRecordFISMChanged;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 RecordIndex;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AFLODTile* Owner;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) TWeakObjectPtr<UFLODFISMComponent> RegisteredFISM;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<int32> ActorPoolIndices;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODRecordInstanceIndices> DesiredLevelStates;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFLODRecordStateView CurrentStateView;  // 0x0060, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFLODRecordStateView TargetStateView;  // 0x0120, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFLODRecordStateView PristineStateView;  // 0x01E0, size 0xC0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHasInitialized;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ENetRole> RecordRole;  // 0x02A1, size 0x1
    UPROPERTY() TArray<int32> DestroyedDynamicInstances;  // 0x02A8, size 0x10
private:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) TArray<uint32> DestroyedInstanceData;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, Replicated) FFLODRecordInstanceArray ReplicatedInstanceArray;  // 0x02C8, size 0x148
    UPROPERTY(EditAnywhere) TArray<FFLODRecordInstance> SanitizedInstances;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, Replicated) FFLODRecordDynamicInstanceArray ReplicatedDynamicInstanceArray;  // 0x0420, size 0x148
    UPROPERTY(EditAnywhere) TArray<FFLODRecordDynamicInstance> SanitizedDynamicInstances;  // 0x0568, size 0x10
    UPROPERTY(EditAnywhere) bool bCheckPendingInstanceChanges;  // 0x0578, size 0x1
    UPROPERTY(EditAnywhere) int32 CheckPendingInstanceChangesFrame;  // 0x057C, size 0x4
    UPROPERTY(EditAnywhere) TArray<FFLODRecordPendingInstanceChange> PendingInstanceChanges;  // 0x0580, size 0x10
    UPROPERTY(EditAnywhere) FFLODRecordInstanceChangeSet ActiveInstanceChangeSet;  // 0x0590, size 0x30
    const FFLODDescription * CachedDescriptionRef;  // 0x05C0, not reflected
public:
    UFUNCTION(BlueprintCallable) int32 AddDynamicInstance(const FTransform& Transform);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void DestroyInstances(TArray<int32> DestroyIndices);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FFLODDescription GetDescription() const;  // parameters 0x138
    UFUNCTION(BlueprintCallable, BlueprintPure) AFLOD* GetOwnerFLOD() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRegisteredFISM() const;  // parameters 0x1
    UFUNCTION() void OnRep_DestroyedInstanceData();
    UFUNCTION(BlueprintCallable) void RestoreInstances(TArray<int32> RestoreIndices);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPristineStateViewModified();
};
