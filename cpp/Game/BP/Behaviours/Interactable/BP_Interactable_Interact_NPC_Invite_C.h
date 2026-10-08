// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_NPC_Invite.BP_Interactable_Interact_NPC_Invite_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_NPC_Invite_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployableBase_C* Deployable;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Trader_C* As_BP_NPC_Trader;  // 0x0100, size 0x8, named "As BP NPC Trader"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Interact_NPC_Invite(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
