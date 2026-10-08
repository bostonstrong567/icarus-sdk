// /Game/BP/Behaviours/Flammable/BP_Flammable_Deployable.BP_Flammable_Deployable_C
// Derives from: UBP_Flammable_Actor_C > UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x12C, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_Deployable_C : public UBP_Flammable_Actor_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPropagate(EFlammablePropagationType PropagationType) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FBoxSphereBounds GetLocalBounds() const;  // parameters 0x1C
};
