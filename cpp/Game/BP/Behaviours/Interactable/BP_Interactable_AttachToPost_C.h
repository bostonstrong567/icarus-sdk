// /Game/BP/Behaviours/Interactable/BP_Interactable_AttachToPost.BP_Interactable_AttachToPost_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_AttachToPost_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle BaitQuery;  // 0x00F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CurrentlyHeldBaitName;  // 0x0108, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Needs_Linked_Character;  // 0x0120, size 0x1, named "Needs Linked Character"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Needs_Linked_Hitching_Post;  // 0x0121, size 0x1, named "Needs Linked Hitching Post"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_StaticItem_HitchingRope_C* HitchingRopeRef;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* PlayerRef;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* InstigatingPlayer;  // 0x0138, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_AttachToPost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FText GetInteractionText(AActor* Instigator, const FHitResult& HitResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void GetLinkRequirements(AIcarusPlayerCharacter* Player, bool& NeedsLinkedCharacter, bool& NeedsLinkedHitchingPost);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void GetTameDataForOwningNPC(TScriptInterface<ISpawnableAI> Target, FTamesRowHandle& RowHandle, bool& Success);  // parameters 0x29
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void LeadJuvenile(AActor* Instigator);  // parameters 0x8
};
