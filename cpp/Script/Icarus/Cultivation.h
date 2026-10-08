// /Script/Icarus.Cultivation
// Derives from: UTraitBehaviour > UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/Traits/Behaviours/Farmable/Cultivation.h

UCLASS(Transient, Config=Engine)
class UCultivation : public UTraitBehaviour
{
public:
    UPROPERTY(BlueprintAssignable) FSeedUpdated OnSeedUpdated;  // 0x00C0, size 0x1
    UPROPERTY(BlueprintAssignable) FGrowthStateUpdated OnGrowthStateUpdated;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FFarmingSeedsRowHandle CurrentSeed;  // 0x00C4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FFarmableRowHandle FarmingData;  // 0x00DC, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) EPlantGrowthStates CurrentGrowthState;  // 0x00F4, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float CurrentGrowthTime;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) bool bIsCorrectPlantingBiome;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWasKilled;  // 0x00FD, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanHarvestCultivation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool CanStartCultivation(FFarmingSeedsRowHandle Seed);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void Cheat_InstantGrow();
    UFUNCTION(BlueprintCallable) void ClearCultivation();
    UFUNCTION(BlueprintCallable) bool ForceSetCultivation(FFarmingSeedsRowHandle Seed, EPlantGrowthStates GrowthState);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) FCultivationSaveData GetSaveData();  // parameters 0x14
    UFUNCTION(BlueprintCallable) bool HarvestCultivation(AActor* HarvestActor, bool bUsingSickle, TArray<FItemData>& HarvestedItems);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void KillCultivation();
    UFUNCTION(BlueprintCallable) void LoadSaveData(FCultivationSaveData& SaveData);  // parameters 0x14
    UFUNCTION() void OnRep_CurrentGrowthState();
    UFUNCTION() void OnRep_CurrentSeed();
    UFUNCTION(BlueprintCallable) void RemoveFatigue();
    UFUNCTION(BlueprintCallable) void ReseedCultivation();
    UFUNCTION(BlueprintCallable) void ResetCultivation();
    UFUNCTION(BlueprintCallable) bool StartCultivation(FFarmingSeedsRowHandle Seed);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void TriggerFatigue();
};
