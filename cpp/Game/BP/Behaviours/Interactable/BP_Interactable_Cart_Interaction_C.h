// /Game/BP/Behaviours/Interactable/BP_Interactable_Cart_Interaction.BP_Interactable_Cart_Interaction_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x300, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Cart_Interaction_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ADeployable* TempDeployable;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Seat_Mount_Water_C* WaterCart;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CartMissingWater;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* SaddleInventory;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData SaddleData;  // 0x0110, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Cart_Interaction(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
