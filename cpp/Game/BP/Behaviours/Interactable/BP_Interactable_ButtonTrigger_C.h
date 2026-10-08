// /Game/BP/Behaviours/Interactable/BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x111, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_ButtonTrigger_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnButtonInteract OnButtonInteract;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnButtonHold OnButtonHold;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsButtonInteractable;  // 0x0110, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_ButtonTrigger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void OnButtonHold__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnButtonInteract__DelegateSignature();
};
