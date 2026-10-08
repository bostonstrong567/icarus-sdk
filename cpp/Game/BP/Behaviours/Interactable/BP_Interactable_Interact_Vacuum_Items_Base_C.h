// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_Vacuum_Items_Base.BP_Interactable_Interact_Vacuum_Items_Base_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x12C, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_Vacuum_Items_Base_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployableBase_C* Deployable;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_Id;  // 0x0118, size 0x10, named "Inventory Id"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Max;  // 0x0128, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Interact_Vacuum_Items_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
