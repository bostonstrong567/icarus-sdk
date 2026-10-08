// /Game/BP/Behaviours/Interactable/BP_Interactable_NPC_Pickup_Vehicle_Heavy.BP_Interactable_NPC_Pickup_Vehicle_Heavy_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_NPC_Pickup_Vehicle_Heavy_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Vehicle;  // 0x00F8, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_NPC_Pickup_Vehicle_Heavy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItemisedVehicle(FItemData& Vehicle);  // parameters 0x1F0
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
