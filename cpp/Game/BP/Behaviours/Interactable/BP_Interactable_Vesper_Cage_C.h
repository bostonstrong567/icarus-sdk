// /Game/BP/Behaviours/Interactable/BP_Interactable_Vesper_Cage.BP_Interactable_Vesper_Cage_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x160, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Vesper_Cage_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSubclassOf<AActor>, FItemTemplateRowHandle> NPC;  // 0x00F8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemTemplate;  // 0x0148, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Vesper_Cage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_Play_Pickup_NPC_Stasis_Audio();
};
