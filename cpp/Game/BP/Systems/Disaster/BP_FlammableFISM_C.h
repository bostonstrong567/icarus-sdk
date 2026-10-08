// /Game/BP/Systems/Disaster/BP_FlammableFISM.BP_FlammableFISM_C
// Derives from: UFlammableFISM > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x3A0, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FlammableFISM_C : public UFlammableFISM
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UNiagaraComponent*> FoliageEmbersNiagaraSystems;  // 0x0350, size 0x50

    UFUNCTION(BlueprintCallable) void CombustedEnter(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CombustingEnter(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CombustingExit(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_FlammableFISM(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceAttached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceDetached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusted_Enter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Enter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Exit(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnReplacedInstanceCombusted(FFLODInstanceID NewInstance, UFlammableInstanceFLOD* Instance);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TryReplaceInstanceCombusted(UFlammableInstanceFLOD* Instance);  // parameters 0x8
};
