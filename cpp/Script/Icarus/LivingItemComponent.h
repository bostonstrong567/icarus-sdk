// /Script/Icarus.LivingItemComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x1C8, declared in Icarus/Source/Icarus/Traits/LivingItemComponent.h

UCLASS(EditInlineNew, Config=Engine)
class ULivingItemComponent : public UTraitComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UStaticMeshComponent*> AttachedStaticMeshes;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<UStaticMeshComponent*, FMeshCustomisationData> AppliedMeshCustomisations;  // 0x00E0, size 0x50
private:
    int32 CurrentUnlockingSlot;  // 0x0130, not reflected
    FChallenge CurrentUnlockingChallenge;  // 0x0138, not reflected
    TArray<FMeshCustomisationData,TSizedDefaultAllocator<32> > PendingMeshCustomisations;  // 0x01A8, not reflected
    TSharedPtr<FStreamableHandle,0> PendingMeshCustomisationsStreamingHandle;  // 0x01B8, not reflected
public:
    UFUNCTION(BlueprintCallable) void Cheat_AddChallengeProgress(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Cheat_CompleteActiveChallenge();
    UFUNCTION(BlueprintCallable) void Cheat_CompleteAllChallenges();
    UFUNCTION(BlueprintCallable) void Cheat_SetUpgradeInSlot(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void FinaliseMeshCustomisations();
    UFUNCTION(BlueprintCallable, BlueprintPure) FChallenge GetActiveChallengeData() const;  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLivingItemData(FLivingItemData& OutData) const;  // parameters 0x91
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasActiveChallenge() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAsyncLoadingMeshes() const;  // parameters 0x1
    UFUNCTION() void OnCorpseItemRemovedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION() void OnCreatureKilledNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPlayer);  // parameters 0x20
    UFUNCTION() void OnCreatureSkinnedNotify(AIcarusPlayerCharacter* Player, AIcarusCorpse* Corpse);  // parameters 0x10
    UFUNCTION() void OnItemHarvestedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION() void OnPlayerPerformedCriticalHitNotify(AIcarusPlayerCharacter* Player, FVector HitLocation, FCriticalHitAreasEnum CriticalHitArea);  // parameters 0x28
    UFUNCTION() void OnPlayerPerformedStealthAttackNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void OnTreeFelledNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void OnTreeResourceCollectedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION() void OnVoxelCompletedNotify(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION() void OnVoxelResourceMinedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void RebuildMesh();

    // Virtual functions that start here:
    //   FinaliseMeshCustomisations_Implementation
};
