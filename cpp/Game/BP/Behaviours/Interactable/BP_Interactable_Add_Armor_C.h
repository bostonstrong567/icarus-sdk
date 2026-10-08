// /Game/BP/Behaviours/Interactable/BP_Interactable_Add_Armor.BP_Interactable_Add_Armor_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x302, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Add_Armor_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData FocusedItem;  // 0x00F8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTag> ValidTags;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag ItemTag;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StandAlreadyHasItem;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHoldingSupportedItem;  // 0x0301, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Add_Armor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
