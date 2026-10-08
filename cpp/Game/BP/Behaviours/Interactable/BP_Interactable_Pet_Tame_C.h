// /Game/BP/Behaviours/Interactable/BP_Interactable_Pet_Tame.BP_Interactable_Pet_Tame_C
// Derives from: UBP_Interactable_Enter_Seat_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Pet_Tame_C : public UBP_Interactable_Enter_Seat_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Pet_Tame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayEffects(FVector ParticleLocation, AIcarusPlayerCharacter* Player);  // parameters 0x18
};
