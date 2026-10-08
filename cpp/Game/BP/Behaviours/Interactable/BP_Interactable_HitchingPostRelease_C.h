// /Game/BP/Behaviours/Interactable/BP_Interactable_HitchingPostRelease.BP_Interactable_HitchingPostRelease_C
// Derives from: UBP_Interactable_SnareTrapRelease_C > UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x2EC, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_HitchingPostRelease_C : public UBP_Interactable_SnareTrapRelease_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x00F8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumHitchedCreatures;  // 0x02E8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_HitchingPostRelease(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
