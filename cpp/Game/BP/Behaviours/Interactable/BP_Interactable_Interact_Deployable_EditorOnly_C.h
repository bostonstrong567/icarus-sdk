// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_Deployable_EditorOnly.BP_Interactable_Interact_Deployable_EditorOnly_C
// Derives from: UBP_Interactable_Interact_Deployable_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_Deployable_EditorOnly_C : public UBP_Interactable_Interact_Deployable_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
};
