// /Game/BP/Behaviours/Interactable/BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_Harvest_Animal_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Current_Player;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SkinningEfficiency;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseSkinningDuration;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* FPMontage;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* TPMontage;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SkinningTimer;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsHarvested;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* HarvestingPlayer;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* PreviousHarvester;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_GOAP_Corpse_C* OwningCorpse;  // 0x0130, size 0x8

    UFUNCTION(BlueprintCallable) int32 CalculateDurabilityDamage();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION(BlueprintCallable) void ConsumeFuel();
    UFUNCTION(BlueprintCallable) void EndHarvestMontage(ABP_IcarusPlayerCharacterSurvival_C* Harvester);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_Harvest_Animal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHarvestSpeedModifier();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantBestiaryProgress();
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void OnInteractionAborted();
    UFUNCTION(BlueprintCallable) void OnRep_HarvestingPlayer();
    UFUNCTION(BlueprintCallable) void OnRep_IsHarvested();
    UFUNCTION(BlueprintCallable) void OnSkinningComplete();
    UFUNCTION(BlueprintCallable) void ProcessDurability();
};
