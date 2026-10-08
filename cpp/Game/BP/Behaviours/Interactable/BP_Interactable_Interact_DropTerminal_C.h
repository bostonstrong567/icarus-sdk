// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_DropTerminal.BP_Interactable_Interact_DropTerminal_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_DropTerminal_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Interact_DropTerminal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
