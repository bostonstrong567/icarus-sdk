// /Game/BP/Behaviours/Interactable/BP_Interactable_Stasis_Bag_Stabalized.BP_Interactable_Stasis_Bag_Stabalized_C
// Derives from: UBP_Interactable_Stasis_Bag_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Stasis_Bag_Stabalized_C : public UBP_Interactable_Stasis_Bag_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
};
