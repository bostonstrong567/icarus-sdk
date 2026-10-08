// /Script/Icarus.InteractableBehaviour
// Derives from: UTraitBehaviour > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/InteractableBehaviour.h

UCLASS(Transient, EditInlineNew, Config=Engine)
class UInteractableBehaviour : public UTraitBehaviour
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) EInteractType InteractType;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 InteractIndex;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FName RequiredInteractTag;  // 0x00C8, size 0x8
    UPROPERTY(Replicated) FInteractionsRowHandle InteractionsRowHandle;  // 0x00D0, size 0x18

    UFUNCTION(BlueprintNativeEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInteractData(FInteractData& OutData) const;  // parameters 0x81
    UFUNCTION(BlueprintCallable, BlueprintPure) UInteractableComponent* GetInteractableComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) FText GetInteractionText(AActor* Instigator, const FHitResult& HitResult);  // parameters 0xA8
    UFUNCTION(BlueprintNativeEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90

    // Virtual functions that start here:
    //   CanInteract_Implementation, GetInteractionText_Implementation, Interact_Implementation
};
