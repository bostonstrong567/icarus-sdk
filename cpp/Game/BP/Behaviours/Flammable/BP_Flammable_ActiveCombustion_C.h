// /Game/BP/Behaviours/Flammable/BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C
// Derives from: UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_ActiveCombustion_C : public UFlammableActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0100, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPropagate(EFlammablePropagationType PropagationType) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPropagateToTarget(FFlammableTargetIgnite Target) const;  // parameters 0x31
    UFUNCTION() void ExecuteUbergraph_BP_Flammable_ActiveCombustion(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FBoxSphereBounds GetLocalBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsTargetDeployableFoundation(FFlammableTargetIgnite Target, bool& IsDeployableFoundation) const;  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsTargetHeldByPlayer(FFlammableTargetIgnite Target, bool& IsOwningPlayer) const;  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnActiveStateChanged(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceAttached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceDetached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Enter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Exit(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
