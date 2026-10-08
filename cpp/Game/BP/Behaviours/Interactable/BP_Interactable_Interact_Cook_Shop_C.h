// /Game/BP/Behaviours/Interactable/BP_Interactable_Interact_Cook_Shop.BP_Interactable_Interact_Cook_Shop_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Interact_Cook_Shop_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployableBase_C* Deployable;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_NPC_DH_EDEN_Cook_C* As_BP_Mission_NPC_DH_EDEN_Cook;  // 0x0100, size 0x8, named "As BP Mission NPC DH EDEN Cook"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Interact_Cook_Shop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
