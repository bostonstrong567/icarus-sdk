// /Game/BP/Behaviours/Interactable/BP_Interactable_Stop_Leading_Creature.BP_Interactable_Stop_Leading_Creature_C
// Derives from: UBP_Interactable_Lead_Creature_C > UBP_Interactable_Enter_Seat_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Stop_Leading_Creature_C : public UBP_Interactable_Lead_Creature_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
};
