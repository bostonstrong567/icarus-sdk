// /Game/BP/Behaviours/Interactable/BP_Interactable_BaitSnareTrap.BP_Interactable_BaitSnareTrap_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_BaitSnareTrap_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle BaitQuery;  // 0x00F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CurrentlyHeldBaitName;  // 0x0108, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData BaitItems;  // 0x0120, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_BaitSnareTrap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FText GetInteractionText(AActor* Instigator, const FHitResult& HitResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintPure) UInventory* GetTrapInventory();  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
