// /Game/BP/Behaviours/Interactable/BP_Interactable_Cancel_Taming.BP_Interactable_Cancel_Taming_C
// Derives from: UBP_Interactable_Enter_Seat_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Cancel_Taming_C : public UBP_Interactable_Enter_Seat_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ParentCharacterKey;  // 0x00F8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Cancel_Taming(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTameDataForOwningNPC(TScriptInterface<ISpawnableAI> Target, FTamesRowHandle& RowHandle, bool& Success);  // parameters 0x29
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
