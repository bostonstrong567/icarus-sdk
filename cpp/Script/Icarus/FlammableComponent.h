// /Script/Icarus.FlammableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/FlammableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFlammableComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFlammableInstance* CurrentFlammableInstance;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugFlammableInstances;  // 0x00D8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanIgnite() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanPropagate(EFlammablePropagationType PropagationType) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanPropagateToTarget(FFlammableTargetIgnite Target) const;  // parameters 0x31
    UFUNCTION(BlueprintNativeEvent) TArray<FFlammableTargetIgnite> GatherPropagationIgnitions(UFlammableInstance* Instance) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCombustionMaximumTemperature() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCombustionTemperature() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFlammableData(FFlammableData& OutData) const;  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FBoxSphereBounds GetLocalBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FTransform GetWorldTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool HasStaticMovement() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnFlammableInstanceAttached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnFlammableInstanceDetached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION() void OnFlammableInstanceState_Any_Enter(UFlammableInstance* Instance, UFlammableState* FlammableState);  // parameters 0x10

    // Virtual functions that start here:
    //   CanIgnite_Implementation, CanPropagateToTarget_Implementation, CanPropagate_Implementation
    //   GatherPropagationIgnitions_Implementation, GetLocalBounds_Implementation
    //   GetWorldTransform_Implementation, HasStaticMovement_Implementation
    //   OnFlammableInstanceAttached_Implementation, OnFlammableInstanceDetached_Implementation
    //   OnFlammableInstanceState_Any_Enter
};
