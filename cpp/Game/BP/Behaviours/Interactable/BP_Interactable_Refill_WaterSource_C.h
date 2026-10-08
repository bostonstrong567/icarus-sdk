// /Game/BP/Behaviours/Interactable/BP_Interactable_Refill_WaterSource.BP_Interactable_Refill_WaterSource_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Refill_WaterSource_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifier WaterCoolingBuff;  // 0x00F0, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* InteractSound;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Water_Purity_Alteration;  // 0x0118, size 0x10, named "Water Purity Alteration"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Cooling_Alteration;  // 0x0128, size 0x10, named "Cooling Alteration"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Refill_WaterSource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayInteractFX(ABP_IcarusPlayerCharacterSurvival_C* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayInteractFX(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RefillInteract(ABP_IcarusPlayerCharacterSurvival_C* Player);  // parameters 0x8
};
