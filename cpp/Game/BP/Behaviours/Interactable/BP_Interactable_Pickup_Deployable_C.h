// /Game/BP/Behaviours/Interactable/BP_Interactable_Pickup_Deployable.BP_Interactable_Pickup_Deployable_C
// Derives from: UBP_Interactable_Pickup_Item_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Pickup_Deployable_C : public UBP_Interactable_Pickup_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployableBase_C* Deployable;  // 0x0110, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Pickup_Deployable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Pickup_Item(bool& PickedUp);  // parameters 0x1, named "Pickup Item"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
