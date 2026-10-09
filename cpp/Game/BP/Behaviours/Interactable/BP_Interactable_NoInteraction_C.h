// /Game/BP/Behaviours/Interactable/BP_Interactable_NoInteraction.BP_Interactable_NoInteraction_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_NoInteraction_C : public UInteractableBehaviour
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
};
