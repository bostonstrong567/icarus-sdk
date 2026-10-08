// /Game/BP/Behaviours/Interactable/BP_Interactable_Milk.BP_Interactable_Milk_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x104, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Milk_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* InteractSound;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DelayFinished;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayTime;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTime;  // 0x0100, size 0x4

    UFUNCTION(BlueprintCallable) EViewTraceResultPriority BP_Interactable_Milk_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Milk(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
