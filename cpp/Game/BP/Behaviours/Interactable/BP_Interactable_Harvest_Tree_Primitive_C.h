// /Game/BP/Behaviours/Interactable/BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x101, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Harvest_Tree_Primitive_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* CurrentPlayer;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_StaticItem_TreePrimitive_C* StaticItemTreePrimitive;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHandedness Handedness;  // 0x0100, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Harvest_Tree_Primitive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void Interact_Harvest(FHitResult Hit);  // parameters 0x88, named "Interact Harvest"
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayPickupFX(AIcarusPlayerCharacter* Target);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
