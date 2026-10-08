// /Game/BP/Behaviours/Interactable/BP_Interactable_Security_Door.BP_Interactable_Security_Door_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Security_Door_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifier WaterCoolingBuff;  // 0x00F0, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* InteractSound;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Water_Purity_Alteration;  // 0x0118, size 0x10, named "Water Purity Alteration"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Cooling_Alteration;  // 0x0128, size 0x10, named "Cooling Alteration"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x0138, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Security_Door(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
};
