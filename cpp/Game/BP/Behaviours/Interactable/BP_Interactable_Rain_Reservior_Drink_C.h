// /Game/BP/Behaviours/Interactable/BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Rain_Reservior_Drink_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AmountToDrink;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AmountAllowedToDrink;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredUnits;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* InteractSound;  // 0x0100, size 0x8

    UFUNCTION(BlueprintCallable) void AddAlterations(AActor* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Rain_Reservior_Drink(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayInteractFX(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayInteractSound(AActor* Instigator);  // parameters 0x8
};
