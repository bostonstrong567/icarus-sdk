// /Game/BP/Behaviours/Interactable/BP_Interactable_ToggleArmourStand.BP_Interactable_ToggleArmourStand_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x538, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_ToggleArmourStand_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGameplayTag, FAISetupRowHandle> Children;  // 0x00F0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> InventorySlotsToSwap;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* ArmourStandInventory;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ArmourStandItem;  // 0x0158, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData PlayerItem;  // 0x0348, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_ToggleArmourStand(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
