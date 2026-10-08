// /Game/BP/Behaviours/Interactable/BP_Interactable_Salvage.BP_Interactable_Salvage_C
// Derives from: UBP_Interactable_Pickup_Item_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Salvage_C : public UBP_Interactable_Pickup_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0108, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Salvage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
