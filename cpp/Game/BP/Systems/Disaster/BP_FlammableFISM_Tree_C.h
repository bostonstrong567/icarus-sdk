// /Game/BP/Systems/Disaster/BP_FlammableFISM_Tree.BP_FlammableFISM_Tree_C
// Derives from: UBP_FlammableFISM_C > UFlammableFISM > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x4E8, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FlammableFISM_Tree_C : public UBP_FlammableFISM_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UNiagaraComponent*> TreeFireNiagaraSystems;  // 0x03A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UStaticMeshComponent*> TreeFireStaticMeshes;  // 0x03F8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FFLODDescriptionsEnum, TSoftObjectPtr<UStaticMesh>> FlammableStaticMeshes;  // 0x0448, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, float> WaitingAsyncMeshLoad;  // 0x0498, size 0x50

    UFUNCTION(BlueprintCallable) void AttachEffectsStaticMesh(UObject* Mesh, UFlammableInstanceFLOD* Instance, float FireSpread);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void CleanupEffectsStaticMesh(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CombustingEnter(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CombustingExit(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_FlammableFISM_Tree(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FBoxSphereBounds GetInstanceLocalBounds(int32 InstanceIndex) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetOrLoadEffectsStaticMesh(UFlammableInstanceFLOD* Instance, float FireSpread);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceAttached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceDetached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Detached_Exit(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_A491C1D5455DD83BCECEF481A1124DEB(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnReplacedInstanceCombusted(FFLODInstanceID NewInstance, UFlammableInstanceFLOD* Instance);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateEffectsStaticMesh(UMeshComponent* Mesh, UFlammableInstanceFLOD* Instance, float FireSpread);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateInstanceVisualData_Combusted(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateInstanceVisualData_Combustion(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateInstanceVisualData_Pyrolysis(UFlammableInstanceFLOD* Instance, float DeltaSeconds, FFlammableFISMVisualData& TargetVisualData);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateQueuedInstanceEffects(int32 InstanceIndex, const FFlammableFISMVisualData& VisualData);  // parameters 0x11
};
