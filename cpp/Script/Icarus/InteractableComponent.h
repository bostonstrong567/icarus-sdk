// /Script/Icarus.InteractableComponent
// Derives from: UTraitBehaviours > UTraitComponent > UActorComponent > UObject
// size 0x138, declared in Icarus/Source/Icarus/Traits/InteractableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UInteractableComponent : public UTraitBehaviours
{
public:
    UPROPERTY(BlueprintReadOnly) TMap<EInteractType, FInteractStack> WorldInteracts;  // 0x00E8, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanInteract() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UInteractableBehaviour* GetCurrentDisabledInteractForType(EInteractType InteractType, AActor* Instigator, FHitResult HitResult) const;  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) UInteractableBehaviour* GetCurrentInteractForType(EInteractType InteractType, AActor* Instigator, FHitResult HitResult) const;  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInteractData(FInteractionsRowHandle InteractionsRowHandle, FInteractData& OutData) const;  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInteractableData(FInteractableData& OutData) const;  // parameters 0x69
    UFUNCTION(BlueprintCallable) void WorldAltHeldInteract(AActor* Instigator, FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void WorldAltInteract(AActor* Instigator, FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void WorldHeldInteract(AActor* Instigator, FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void WorldInteract(AActor* Instigator, FHitResult& HitResult);  // parameters 0x90
};
