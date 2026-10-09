// /Script/Icarus.FlammableFISM
// Derives from: UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x348, declared in Icarus/Source/Icarus/Traits/FlammableFISM.h

UCLASS(EditInlineNew, Config=Engine)
class UFlammableFISM : public UFlammableComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) UFLODRecord* RegisteredRecord;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere) TMap<int32, UFlammableInstanceFLOD*> CurrentFlammableInstances;  // 0x00E8, size 0x50
    UPROPERTY(EditAnywhere) TMap<int32, FFlammableFISMVisualData> InstanceVisualData;  // 0x0138, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<int32, FFlammableFISMVQueuedVisualData> QueuedInstanceVisualData;  // 0x0188, size 0x50
    UPROPERTY(EditAnywhere, Replicated) FFlammableRepStateArray ReplicatedStatesArray;  // 0x01D8, size 0x148
    UPROPERTY(EditAnywhere) bool bReplicatedStatesDirty;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireTemperatureCombustion;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireTemperatureCombustionAdded;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireSpreadCombustion;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireSpreadCombustionAdded;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireSpreadLerpSpeed;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireTemperatureLerpUpSpeed;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualFireTemperatureLerpDownSpeed;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualEffectsFireSpreadLerpUpSpeed;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VisualEffectsFireSpreadLerpDownSpeed;  // 0x0344, size 0x4
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UFLODRecord* FindReplacementBurntRecord() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<int32, UFlammableInstanceFLOD*> GetFlammableInstances() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<int32, FFlammableFISMVisualData> GetInstanceCustomPrimitiveData() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) FFlammableRepState GetInstanceFlammableState(int32 InstanceIndex) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FBoxSphereBounds GetInstanceLocalBounds(int32 InstanceIndex) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetInstanceWorldTransform(int32 InstanceIndex) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) UFLODRecord* GetRegisteredRecord() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasValidFISM() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnFlammableInstanceFLODTick(UFlammableInstanceFLOD* Instance, float DeltaSeconds);  // parameters 0xC
    UFUNCTION() void OnRecordFISMChanged(UFLODRecord* InRecord);  // parameters 0x8
    UFUNCTION() void OnRep_Record();
    UFUNCTION() void OnReplicatedStateAdded(const FFlammableRepState& State);  // parameters 0x18
    UFUNCTION() void OnReplicatedStateChanged(const FFlammableRepState& State);  // parameters 0x18
    UFUNCTION() void OnReplicatedStateRemoved(const FFlammableRepState& State);  // parameters 0x18
    UFUNCTION() void RegisterRecord(UFLODRecord* RegisteredRecord);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void UpdateInstanceVisualData_Combusted(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void UpdateInstanceVisualData_Combustion(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void UpdateInstanceVisualData_Detached(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void UpdateInstanceVisualData_Pyrolysis(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) bool UpdateQueuedInstanceEffects(int32 InstanceIndex, const FFlammableFISMVisualData& VisualData);  // parameters 0x11

    // Virtual functions that start here:
    //   GetInstanceLocalBounds_Implementation, OnFlammableInstanceFLODTick_Implementation
    //   UpdateInstanceVisualData_Combusted_Implementation
    //   UpdateInstanceVisualData_Combustion_Implementation
    //   UpdateInstanceVisualData_Detached_Implementation, UpdateInstanceVisualData_Pyrolysis_Implementation
    //   UpdateQueuedInstanceEffects_Implementation
};
