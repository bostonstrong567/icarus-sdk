// /Game/BP/Behaviours/Interactable/BP_Interactable_Pickup_Item_FLOD.BP_Interactable_Pickup_Item_FLOD_C
// Derives from: UBP_Interactable_Pickup_Item_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Pickup_Item_FLOD_C : public UBP_Interactable_Pickup_Item_C
{
public:

    UFUNCTION(BlueprintCallable) void Pickup_Item(bool& PickedUp);  // parameters 0x1, named "Pickup Item"
};
