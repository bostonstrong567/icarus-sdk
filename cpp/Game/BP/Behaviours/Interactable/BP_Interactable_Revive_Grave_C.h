// /Game/BP/Behaviours/Interactable/BP_Interactable_Revive_Grave.BP_Interactable_Revive_Grave_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xF9, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Revive_Grave_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ServerSideProxyCheckOverride;  // 0x00F8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Revive_Grave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
