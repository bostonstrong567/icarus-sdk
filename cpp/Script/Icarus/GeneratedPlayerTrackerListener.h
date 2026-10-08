// /Script/Icarus.GeneratedPlayerTrackerListener
// Derives from: UObject
// size 0x30, declared in Icarus/Source/Icarus/IcarusGenerated/PlayerTracker/GeneratedPlayerTrackerListener.h

UCLASS()
class UGeneratedPlayerTrackerListener : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) UPlayerTrackerSubsystem* PlayerTrackerSubsystem;  // 0x0028, size 0x8

    UFUNCTION(BlueprintNativeEvent) void OnArmorBrokenNotify(AActor* Creature, FIcarusDamagePacket DamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintNativeEvent) void OnBiomeUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnBlueprintTalentsUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnBuildingPiecePlacedNotify(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnBuildingPieceRepairedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnCorpseItemRemovedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnCreatureGrownUpNotify(AIcarusMountCharacter* Adult, AIcarusNPCGOAPCharacter* Juvenile);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnCreatureKilledNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnCreatureScannedNotify(AIcarusPlayerCharacter* Player, AActor* Creature);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnCreatureSkinnedNotify(AIcarusPlayerCharacter* Player, AIcarusCorpse* Corpse);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnCreatureStartedTamingNotify(UIcarusTamingComponent* TamingComponent);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnCreatureTamedNotify(AIcarusMountCharacter* TamedMount, UIcarusTamingComponent* TamingComponent);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnCropMaturedNotify(FFarmingSeedsRowHandle Seed);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void OnDeployNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnDeployableDestroyedNotify(ADeployable* Deployable, FIcarusDamagePacket LastDamagePacket, AIcarusPlayerCharacter* InstigatingPlayer);  // parameters 0xE8
    UFUNCTION(BlueprintNativeEvent) void OnDistanceTraveledNotify(AIcarusPlayerCharacter* Player, int32 Distance, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintNativeEvent) void OnFactionDeployableActivatedNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnFallDamageAppliedNotify(AIcarusCharacter* Player, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void OnFireExtinguishedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnFoliageResourceCollectedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnItemAlteredNotify(AIcarusPlayerCharacter* Player, FItemData Item, FIcarusAttachmentsRowHandle Attachment);  // parameters 0x210
    UFUNCTION(BlueprintNativeEvent) void OnItemConsumedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnItemCraftedNotify(AIcarusPlayerCharacter* Player, FItemData Item, FProcessorRecipesRowHandle RecipeRow);  // parameters 0x210
    UFUNCTION(BlueprintNativeEvent) void OnItemHarvestedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnLevelUpdatedNotify(AIcarusPlayerCharacter* Player, int32 CurrentLevel);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void OnLivingItemSlotUnlockedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnLocalTimeSurvivedNotify(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintNativeEvent) void OnMissionCompletedNotify(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnNightSkippedNotify(AIcarusPlayerCharacter* Player, int32 ComfortLevel);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void OnOtherPlayerRevivedNotify(AIcarusPlayerCharacter* Player, AIcarusPlayerCharacter* OtherPlayer);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnPlayerBestiaryMaxRankNotify(AIcarusPlayerCharacter* Player, FBestiaryDataRowHandle BestiaryGroup);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnPlayerCaughtFishNotify(AIcarusPlayerCharacter* Player, FFishDataRowHandle FishType);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnPlayerCompletedDynamicMissionNotify(AIcarusPlayerCharacter* Player, FFactionMissionsRowHandle FactionMission);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnPlayerDownedNotify(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintNativeEvent) void OnPlayerEarnedCurrencyNotify(AIcarusPlayerCharacter* Player, FMetaCurrencyRowHandle Currency, int32 Amount);  // parameters 0x24
    UFUNCTION(BlueprintNativeEvent) void OnPlayerEquipmentChangedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPlayerIgnitedBuildingPieceNotify(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnPlayerModifierUpdatedNotify(AIcarusPlayerCharacter* Player, FModifierStatesRowHandle Modifier, bool WasRemoved);  // parameters 0x21
    UFUNCTION(BlueprintNativeEvent) void OnPlayerPerformedCriticalHitNotify(AIcarusPlayerCharacter* Player, FVector HitLocation, FCriticalHitAreasEnum CriticalHitArea);  // parameters 0x28
    UFUNCTION(BlueprintNativeEvent) void OnPlayerPerformedStealthAttackNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPlayerRespawnedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPlayerRevivedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPlayerSawMeteorsNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPlayerTalentsUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnPrepareLoadoutNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnProjectileFiredNotify(AIcarusPlayerCharacter* Player, AIcarusItem* Projectile);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnProspectMissionCompleteNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnProspectTalentsUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnRespawnPodNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnSeedPlantedNotify(AIcarusPlayerCharacter* Player, FFarmingSeedsRowHandle Seed);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnShieldResistNotify(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintNativeEvent) void OnSledgehammerBreakNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnStruckByLightningNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnTamedCreatureClaimedNotify(AIcarusPlayerCharacter* Player, AIcarusMountCharacter* TamedCreature);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnTamedCreatureLevelUpdatedNotify(AIcarusMountCharacter* Creature, int32 CurrentLevel);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void OnTamedCreatureSpawnedFromPodNotify(AIcarusMountCharacter* Creature);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnThumperActivatedNotify(ADeployable* Thumper);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnThumperEventCompletedNotify(ADeployable* Thumper, int32 OresRegenerated, int32 VoxelsRegenerated);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnTimeSurvivedNotify(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintNativeEvent) void OnTrackDialoguePlayNotify(FDialogueRowHandle DialogRow);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void OnTreeFelledNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnTreeResourceCollectedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnVoxelCompletedNotify(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnVoxelHitNotify(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnVoxelResourceMinedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintNativeEvent) void OnWorkshopPurchaseNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8

    // Virtual functions that start here:
    //   OnArmorBrokenNotify_Implementation, OnBiomeUpdatedNotify_Implementation
    //   OnBlueprintTalentsUpdatedNotify_Implementation, OnBuildingPiecePlacedNotify_Implementation
    //   OnBuildingPieceRepairedNotify_Implementation, OnCorpseItemRemovedNotify_Implementation
    //   OnCreatureGrownUpNotify_Implementation, OnCreatureKilledNotify_Implementation
    //   OnCreatureScannedNotify_Implementation, OnCreatureSkinnedNotify_Implementation
    //   OnCreatureStartedTamingNotify_Implementation, OnCreatureTamedNotify_Implementation
    //   OnCropMaturedNotify_Implementation, OnDeployNotify_Implementation
    //   OnDeployableDestroyedNotify_Implementation, OnDistanceTraveledNotify_Implementation
    //   OnFactionDeployableActivatedNotify_Implementation, OnFallDamageAppliedNotify_Implementation
    //   OnFireExtinguishedNotify_Implementation, OnFoliageResourceCollectedNotify_Implementation
    //   OnItemAlteredNotify_Implementation, OnItemConsumedNotify_Implementation
    //   OnItemCraftedNotify_Implementation, OnItemHarvestedNotify_Implementation
    //   OnLevelUpdatedNotify_Implementation, OnLivingItemSlotUnlockedNotify_Implementation
    //   OnLocalTimeSurvivedNotify_Implementation, OnMissionCompletedNotify_Implementation
    //   OnNightSkippedNotify_Implementation, OnOtherPlayerRevivedNotify_Implementation
    //   OnPlayerBestiaryMaxRankNotify_Implementation, OnPlayerCaughtFishNotify_Implementation
    //   OnPlayerCompletedDynamicMissionNotify_Implementation, OnPlayerDownedNotify_Implementation
    //   OnPlayerEarnedCurrencyNotify_Implementation, OnPlayerEquipmentChangedNotify_Implementation
    //   OnPlayerIgnitedBuildingPieceNotify_Implementation, OnPlayerModifierUpdatedNotify_Implementation
    //   OnPlayerPerformedCriticalHitNotify_Implementation
    //   OnPlayerPerformedStealthAttackNotify_Implementation, OnPlayerRespawnedNotify_Implementation
    //   OnPlayerRevivedNotify_Implementation, OnPlayerSawMeteorsNotify_Implementation
    //   OnPlayerTalentsUpdatedNotify_Implementation, OnPrepareLoadoutNotify_Implementation
    //   OnProjectileFiredNotify_Implementation, OnProspectMissionCompleteNotify_Implementation
    //   OnProspectTalentsUpdatedNotify_Implementation, OnRespawnPodNotify_Implementation
    //   OnSeedPlantedNotify_Implementation, OnShieldResistNotify_Implementation
    //   OnSledgehammerBreakNotify_Implementation, OnStruckByLightningNotify_Implementation
    //   OnTamedCreatureClaimedNotify_Implementation, OnTamedCreatureLevelUpdatedNotify_Implementation
    //   OnTamedCreatureSpawnedFromPodNotify_Implementation, OnThumperActivatedNotify_Implementation
    //   OnThumperEventCompletedNotify_Implementation, OnTimeSurvivedNotify_Implementation
    //   OnTrackDialoguePlayNotify_Implementation, OnTreeFelledNotify_Implementation
    //   OnTreeResourceCollectedNotify_Implementation, OnVoxelCompletedNotify_Implementation
    //   OnVoxelHitNotify_Implementation, OnVoxelResourceMinedNotify_Implementation
    //   OnWorkshopPurchaseNotify_Implementation
};
