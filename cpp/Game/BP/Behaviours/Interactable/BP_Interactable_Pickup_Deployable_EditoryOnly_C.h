// /Game/BP/Behaviours/Interactable/BP_Interactable_Pickup_Deployable_EditoryOnly.BP_Interactable_Pickup_Deployable_EditoryOnly_C
// Derives from: UBP_Interactable_Pickup_Deployable_C > UBP_Interactable_Pickup_Item_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Pickup_Deployable_EditoryOnly_C : public UBP_Interactable_Pickup_Deployable_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
};
