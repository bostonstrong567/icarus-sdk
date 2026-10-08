// /Game/BP/Accolades/BP_PlayerTrackerListener.BP_PlayerTrackerListener_C
// Derives from: UPlayerTrackerListener > UGeneratedPlayerTrackerListener > UObject
// size 0x1B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerTrackerListener_C : public UPlayerTrackerListener
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresRowHandle LastBiomeAtmosphere;  // 0x0138, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBiomesRowHandle> NullSecBiomes;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FDialogueRowHandle, FAccoladesRowHandle> DialogAchievements;  // 0x0160, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle LavaSwimTimer;  // 0x01B0, size 0x8

    UFUNCTION(BlueprintCallable) void CheckArmourEquippedOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckBiomeOneOffs(AIcarusPlayerCharacter* Player, FBiomesRowHandle Biome);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CheckBlueprintTalentOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckBossKillOneOff(AActor*& Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckBuildingOneOffs(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckCraftingOneOffs(AIcarusPlayerCharacter*& PlayerCharacter, FItemData& ItemData, FProcessorRecipesRowHandle RecipeRow);  // parameters 0x210
    UFUNCTION(BlueprintCallable) void CheckCreatureKill(AIcarusPlayerCharacter*& PlayerCharacter, AIcarusActor*& Causer, AActor*& Creature, bool PlayerWasKiller);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void CheckCreatureKillOneOffs(AIcarusPlayerCharacter*& PlayerCharacter, AIcarusActor*& Causer, AActor*& Creature, bool PlayerWasKiller, APawn* KillingBlowPawn);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void CheckCurrencyEarned(AIcarusPlayerCharacter* Player, FMetaCurrencyRowHandle Currency, int32 Amount);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void CheckDangerousHorizonsMissions(FFactionMissionsRowHandle& Mission);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CheckDeployableDestroyedOneOffs(ADeployable* Deployable, AIcarusPlayerCharacter* Character, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE8
    UFUNCTION(BlueprintCallable) void CheckDeployableOneOffs(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckDialogOneOffs(FDialogueRowHandle Dialog);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CheckFactionDeployableActivatedOneOff(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckFallDamageOneOffs(AIcarusCharacter* Player, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CheckFishCaughtOneOff(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckFoliageCollectionOneOffs(AIcarusPlayerCharacter*& PlayerCharacter, FItemData& ItemData);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void CheckForEmergencyPodOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckForTameSpawnedOneOff(AIcarusMountCharacter* Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckForWorkshopOneOffs(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void CheckGreatHuntMissions(FFactionMissionsRowHandle& Mission);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CheckItemAlteredOneOff(AIcarusPlayerCharacter* Player, FItemData ItemData);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void CheckItemFromCategory(AIcarusPlayerCharacter*& PlayerCharacter, FItemData& ItemData, FPlayerTrackerCategoriesRowHandle Category);  // parameters 0x210
    UFUNCTION(BlueprintCallable) void CheckLocalTimeEpoch(AIcarusPlayerCharacter* Player, int32 Seconds, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void CheckMissionsOneOff(FFactionMissionsRowHandle Mission);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CheckNightSkippedOneOffs(AIcarusPlayerCharacter* Player, int32 ComfortLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CheckOffTaskRowToAllPlayers(FAccoladesRowHandle Accolade, FRowHandle TaskRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void CheckPlayerDynamicMissions(AIcarusPlayerCharacter* Player, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CheckPlayerKilledOneOffs(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamageInstance);  // parameters 0xE0
    UFUNCTION(BlueprintCallable) void CheckPlayerModifierOneOffs(AIcarusPlayerCharacter* Player, FModifierStatesRowHandle Modifier, bool WasRemoved);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void CheckPlayerSawMeteorOnOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckPlayerTalentOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckPrepareLoadoutOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckProjectileFired(AIcarusPlayerCharacter*& PlayerCharacter, AIcarusItem*& Projectile);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckProspectTalentOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckRepairOneOff(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckReviveOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckShieldResist(AIcarusPlayerCharacter* Player, int32 ResistAmount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CheckSledgehammerBreakOneOffs(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckTamedCreatureClaimedOneOffs(AIcarusMountCharacter* Creature, AIcarusPlayerCharacter* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckTamedCreatureLevelOneOffs(AIcarusMountCharacter* Target, int32 NewLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CheckTreeFelledOneOff(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckVoxelHitOneOff(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckVoxelResourceCollectionOneOffs(AIcarusPlayerCharacter*& PlayerCharacter, FItemData& ItemData);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void DistanceEpochCheck(AIcarusPlayerCharacter*& Player, int32& Distance, EProspectLocation& Biome);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void Error(FString Message);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_PlayerTrackerListener(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantOneOffToAllPlayers(FAccoladesRowHandle Accolade);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnBiomeUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnBlueprintTalentsUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnBuildingPiecePlacedNotify(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnBuildingPieceRepairedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnCorpseItemRemovedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnCreatureKilledNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnCreatureSkinnedNotify(AIcarusPlayerCharacter* Player, AIcarusCorpse* Corpse);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnDeployNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnDeployableDestroyedNotify(ADeployable* Deployable, FIcarusDamagePacket LastDamagePacket, AIcarusPlayerCharacter* InstigatingPlayer);  // parameters 0xE8
    UFUNCTION(BlueprintImplementableEvent) void OnDistanceTraveledNotify(AIcarusPlayerCharacter* Player, int32 Distance, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void OnFactionDeployableActivatedNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnFallDamageAppliedNotify(AIcarusCharacter* Player, int32 Amount);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnFireExtinguishedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnFoliageResourceCollectedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnItemAlteredNotify(AIcarusPlayerCharacter* Player, FItemData Item, FIcarusAttachmentsRowHandle Attachment);  // parameters 0x210
    UFUNCTION(BlueprintImplementableEvent) void OnItemConsumedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnItemCraftedNotify(AIcarusPlayerCharacter* Player, FItemData Item, FProcessorRecipesRowHandle RecipeRow);  // parameters 0x210
    UFUNCTION(BlueprintImplementableEvent) void OnItemHarvestedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnLevelUpdatedNotify(AIcarusPlayerCharacter* Player, int32 CurrentLevel);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnLocalTimeSurvivedNotify(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void OnMissionCompletedNotify(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnNightSkippedNotify(AIcarusPlayerCharacter* Player, int32 ComfortLevel);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnOtherPlayerRevivedNotify(AIcarusPlayerCharacter* Player, AIcarusPlayerCharacter* OtherPlayer);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerBestiaryMaxRankNotify(AIcarusPlayerCharacter* Player, FBestiaryDataRowHandle BestiaryGroup);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerCaughtFishNotify(AIcarusPlayerCharacter* Player, FFishDataRowHandle FishType);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerCompletedDynamicMissionNotify(AIcarusPlayerCharacter* Player, FFactionMissionsRowHandle FactionMission);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerDownedNotify(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerEarnedCurrencyNotify(AIcarusPlayerCharacter* Player, FMetaCurrencyRowHandle Currency, int32 Amount);  // parameters 0x24
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerEquipmentChangedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerIgnitedBuildingPieceNotify(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerModifierUpdatedNotify(AIcarusPlayerCharacter* Player, FModifierStatesRowHandle Modifier, bool WasRemoved);  // parameters 0x21
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerPerformedCriticalHitNotify(AIcarusPlayerCharacter* Player, FVector HitLocation, FCriticalHitAreasEnum CriticalHitArea);  // parameters 0x28
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerPerformedStealthAttackNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerRespawnedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerRevivedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerSawMeteorsNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerTalentsUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPrepareLoadoutNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileFiredNotify(AIcarusPlayerCharacter* Player, AIcarusItem* Projectile);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnProspectMissionCompleteNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnProspectTalentsUpdatedNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnRespawnPodNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnShieldResistNotify(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
    UFUNCTION(BlueprintImplementableEvent) void OnSledgehammerBreakNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnStruckByLightningNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnTamedCreatureClaimedNotify(AIcarusPlayerCharacter* Player, AIcarusMountCharacter* TamedCreature);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTamedCreatureLevelUpdatedNotify(AIcarusMountCharacter* Creature, int32 CurrentLevel);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnTamedCreatureSpawnedFromPodNotify(AIcarusMountCharacter* Creature);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnThumperActivatedNotify(ADeployable* Thumper);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnThumperEventCompletedNotify(ADeployable* Thumper, int32 OresRegenerated, int32 VoxelsRegenerated);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTimeSurvivedNotify(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void OnTrackDialoguePlayNotify(FDialogueRowHandle DialogRow);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTreeFelledNotify(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnTreeResourceCollectedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnVoxelCompletedNotify(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnVoxelHitNotify(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnVoxelResourceMinedNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OnWorkshopPurchaseNotify(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void TimeEpochCheck(AIcarusPlayerCharacter*& Player, int32 Seconds, EProspectLocation& Biome);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void TryAwardLavaSwimOneOff();
};
