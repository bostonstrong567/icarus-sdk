// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle.BP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle_C
// Derives from: UBP_Interactable_WorldObject_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle_C : public UBP_Interactable_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0100, size 0x18, named "Session Flag"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Interact_Mission_Laser_Utility_Electric_Toggle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
