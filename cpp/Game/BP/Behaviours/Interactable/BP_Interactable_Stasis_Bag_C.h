// /Game/BP/Behaviours/Interactable/BP_Interactable_Stasis_Bag.BP_Interactable_Stasis_Bag_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Stasis_Bag_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemTemplate;  // 0x00F8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Stasis_Bag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetItem(FItemTemplateRowHandle& Value);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_Play_Pickup_NPC_Stasis_Audio();
};
