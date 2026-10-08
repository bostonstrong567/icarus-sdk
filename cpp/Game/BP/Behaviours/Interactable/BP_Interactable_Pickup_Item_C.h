// /Game/BP/Behaviours/Interactable/BP_Interactable_Pickup_Item.BP_Interactable_Pickup_Item_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Pickup_Item_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* CurrentItem;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastInstigator;  // 0x0100, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Pickup_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForcedInteraction(AActor* Instigator, FHitResult HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void GetPickupAnimationHand(AIcarusPlayerCharacter* ForCharacter, bool& ShouldPlayAnim, EHandedness& Handedness);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayPickupFX(AIcarusPlayerCharacter* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Pickup_Item(bool& PickedUp);  // parameters 0x1, named "Pickup Item"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
