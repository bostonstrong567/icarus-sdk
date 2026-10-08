// /Script/Icarus.DataTableValidationLibrary
// Derives from: UObject
// size 0x118, declared in Icarus/Source/Icarus/IcarusGenerated/DataTableValidationLibrary.h

UCLASS()
class UDataTableValidationLibrary : public UObject
{
public:
    UPROPERTY() TMap<TSubclassOf<UObject>, TWeakObjectPtr<AActor>> TempTestActors;  // 0x00C0, size 0x50
    UPROPERTY() UWorld* TempTestWorld;  // 0x0110, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<TSharedPtr<DataValidation::FRowResult,0>,TSizedDefaultAllocator<32> > AllMessages;  // 0x0028, private
    TMap<enum DataValidation::EValidateResult,TArray<FString,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum DataValidation::EValidateResult,TArray<FString,TSizedDefaultAllocator<32> >,0> > LastMessages;  // 0x0038, private
    TArray<TSharedPtr<DataValidation::FCountResult,0>,TSizedDefaultAllocator<32> > Counts;  // 0x0088, private
    FRowHandle CurrentRowHandle;  // 0x0098, private
    DataValidation::EValidateResult LastError;  // 0x00B0, private
    DataValidation::EValidateResult RecordError;  // 0x00B4, private
    bool bRecording;  // 0x00B8, private

    UFUNCTION(BlueprintCallable) void Detail(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Error(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Fatal(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) AActor* GetOrSpawnTempTestActor(TSubclassOf<UObject> ActorClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Info(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Validate_AIAudioData_RowHandle(const FAIAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AICreatureType_RowHandle(const FAICreatureTypeRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AIDescriptors_RowHandle(const FAIDescriptorsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AIEvents_RowHandle(const FAIEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AIGrowth_RowHandle(const FAIGrowthRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AIRelationships_RowHandle(const FAIRelationshipsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AISetup_RowHandle(const FAISetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AISpawnConfig_RowHandle(const FAISpawnConfigRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AISpawnRules_RowHandle(const FAISpawnRulesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AISpawnZones_RowHandle(const FAISpawnZonesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Accolades_RowHandle(const FAccoladesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AccountFlags_RowHandle(const FAccountFlagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Actionable_RowHandle(const FActionableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Actions_RowHandle(const FActionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AfflictionChance_RowHandle(const FAfflictionChanceRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AlterationModifiers_RowHandle(const FAlterationModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Alterations_RowHandle(const FAlterationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AmmoTypes_RowHandle(const FAmmoTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ArmourSetBonus_RowHandle(const FArmourSetBonusRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ArmourSets_RowHandle(const FArmourSetsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Armour_RowHandle(const FArmourRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AssetReferences_RowHandle(const FAssetReferencesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Atmospheres_RowHandle(const FAtmospheresRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AttachmentIcons_RowHandle(const FAttachmentIconsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_AutonomousSpawns_RowHandle(const FAutonomousSpawnsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BagPriority_RowHandle(const FBagPriorityRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Ballistic_RowHandle(const FBallisticRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BestiaryData_RowHandle(const FBestiaryDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BestiaryPoints_RowHandle(const FBestiaryPointsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BestiaryTraitTypes_RowHandle(const FBestiaryTraitTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BestiaryTraits_RowHandle(const FBestiaryTraitsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BiomeAudioData_RowHandle(const FBiomeAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Biomes_RowHandle(const FBiomesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BlueprintUnlocks_RowHandle(const FBlueprintUnlocksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BreakableRockData_RowHandle(const FBreakableRockDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BuildableAudioData_RowHandle(const FBuildableAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Buildable_RowHandle(const FBuildableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BuildingLookup_RowHandle(const FBuildingLookupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BuildingPieces_RowHandle(const FBuildingPiecesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BuildingSkins_RowHandle(const FBuildingSkinsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BuildingStability_RowHandle(const FBuildingStabilityRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_BuildingTypes_RowHandle(const FBuildingTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Challenges_RowHandle(const FChallengesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterCreationData_RowHandle(const FCharacterCreationDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterFlags_RowHandle(const FCharacterFlagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterGrowth_RowHandle(const FCharacterGrowthRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterPerks_RowHandle(const FCharacterPerksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterStartingStats_RowHandle(const FCharacterStartingStatsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterTimeline_RowHandle(const FCharacterTimelineRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CharacterVoices_RowHandle(const FCharacterVoicesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ChargedModifiers_RowHandle(const FChargedModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CollectableNotes_RowHandle(const FCollectableNotesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Combustible_RowHandle(const FCombustibleRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Consumable_RowHandle(const FConsumableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ContextMenuGroupTypes_RowHandle(const FContextMenuGroupTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CraftingAudioData_RowHandle(const FCraftingAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CraftingModifications_RowHandle(const FCraftingModificationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CraftingTags_RowHandle(const FCraftingTagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CreatureAudioThreatData_RowHandle(const FCreatureAudioThreatDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CriticalHitAreaAudioData_RowHandle(const FCriticalHitAreaAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CriticalHitAreas_RowHandle(const FCriticalHitAreasRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CriticalHitSetup_RowHandle(const FCriticalHitSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CrudeOil_RowHandle(const FCrudeOilRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CurrencyConversions_RowHandle(const FCurrencyConversionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_CustomGameStats_RowHandle(const FCustomGameStatsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DLCPackageData_RowHandle(const FDLCPackageDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DamageTypeInfo_RowHandle(const FDamageTypeInfoRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DataTable(UIcarusDataTable* DataTable);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void Validate_Decayable_RowHandle(const FDecayableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DeployableSetup_RowHandle(const FDeployableSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DeployableTypes_RowHandle(const FDeployableTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Deployable_RowHandle(const FDeployableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DialoguePool_RowHandle(const FDialoguePoolRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DialogueSpeaker_RowHandle(const FDialogueSpeakerRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Dialogue_RowHandle(const FDialogueRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DirtMoundModifications_RowHandle(const FDirtMoundModificationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DropGroups_RowHandle(const FDropGroupsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DropShipActions_RowHandle(const FDropShipActionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DropShipSequences_RowHandle(const FDropShipSequencesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Durable_RowHandle(const FDurableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DynamicQuestRewardItems_RowHandle(const FDynamicQuestRewardItemsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DynamicQuestRewards_RowHandle(const FDynamicQuestRewardsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_DynamicQuests_RowHandle(const FDynamicQuestsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Energy_RowHandle(const FEnergyRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_EpicCreatures_RowHandle(const FEpicCreaturesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Equippable_RowHandle(const FEquippableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ErrorCodes_RowHandle(const FErrorCodesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ExoticSpawn_RowHandle(const FExoticSpawnRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ExperienceEvents_RowHandle(const FExperienceEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Experience_RowHandle(const FExperienceRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FLODDescriptions_RowHandle(const FFLODDescriptionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FactionInfo_RowHandle(const FFactionInfoRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FactionMissions_RowHandle(const FFactionMissionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Farmable_RowHandle(const FFarmableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FarmingGrowthStates_RowHandle(const FFarmingGrowthStatesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FarmingSeeds_RowHandle(const FFarmingSeedsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FeatureLevels_RowHandle(const FFeatureLevelsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FieldGuideCategories_RowHandle(const FFieldGuideCategoriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FieldGuideMetaData_RowHandle(const FFieldGuideMetaDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FieldGuideRedirect_RowHandle(const FFieldGuideRedirectRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FieldGuideSets_RowHandle(const FFieldGuideSetsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FieldGuideSubcategories_RowHandle(const FFieldGuideSubcategoriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Fillable_RowHandle(const FFillableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FirearmAudioData_RowHandle(const FFirearmAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FirearmData_RowHandle(const FFirearmDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FirearmScopeData_RowHandle(const FFirearmScopeDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FishData_RowHandle(const FFishDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FishSetup_RowHandle(const FFishSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FishSpawnConfig_RowHandle(const FFishSpawnConfigRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FishSpawnZones_RowHandle(const FFishSpawnZonesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Flammable_RowHandle(const FFlammableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Floatable_RowHandle(const FFloatableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Focusable_RowHandle(const FFocusableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_FoodTypes_RowHandle(const FFoodTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Fuel_RowHandle(const FFuelRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GOAPActions_RowHandle(const FGOAPActionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GOAPGoals_RowHandle(const FGOAPGoalsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GOAPMotivations_RowHandle(const FGOAPMotivationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GOAPProperties_RowHandle(const FGOAPPropertiesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GOAPSetup_RowHandle(const FGOAPSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GameplayConfig_RowHandle(const FGameplayConfigRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Generator_RowHandle(const FGeneratorRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GeneticLineages_RowHandle(const FGeneticLineagesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GeneticValues_RowHandle(const FGeneticValuesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GrantedAuras_RowHandle(const FGrantedAurasRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GraphicsTierDescriptionMods_RowHandle(const FGraphicsTierDescriptionModsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GraphicsTierDescription_RowHandle(const FGraphicsTierDescriptionRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GreatHuntCreatureInfo_RowHandle(const FGreatHuntCreatureInfoRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GreatHunts_RowHandle(const FGreatHuntsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_GroupedInstancedMapData_RowHandle(const FGroupedInstancedMapDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Highlightable_RowHandle(const FHighlightableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Hints_RowHandle(const FHintsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Hitable_RowHandle(const FHitableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_HordeWave_RowHandle(const FHordeWaveRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Horde_RowHandle(const FHordeRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_HuntingClueSetup_RowHandle(const FHuntingClueSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_HuntingSetup_RowHandle(const FHuntingSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_IcarusAttachments_RowHandle(const FIcarusAttachmentsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_IcarusResources_RowHandle(const FIcarusResourcesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_InstancedMapData_RowHandle(const FInstancedMapDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Interactable_RowHandle(const FInteractableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Interactions_RowHandle(const FInteractionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_InventoryContainer_RowHandle(const FInventoryContainerRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_InventoryID_RowHandle(const FInventoryIDRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_InventoryInfo_RowHandle(const FInventoryInfoRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Inventory_RowHandle(const FInventoryRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemAnimations_RowHandle(const FItemAnimationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemAttachment_RowHandle(const FItemAttachmentRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemAudioData_RowHandle(const FItemAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemClassificationsIcons_RowHandle(const FItemClassificationsIconsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemRanks_RowHandle(const FItemRanksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemRewards_RowHandle(const FItemRewardsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemTemplate_RowHandle(const FItemTemplateRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemTraitMasks_RowHandle(const FItemTraitMasksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemWeightStatQueries_RowHandle(const FItemWeightStatQueriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Itemable_RowHandle(const FItemableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ItemsStatic_RowHandle(const FItemsStaticRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_KeyIcons_RowHandle(const FKeyIconsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_KeybindContexts_RowHandle(const FKeybindContextsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Keybindings_RowHandle(const FKeybindingsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Keys_RowHandle(const FKeysRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Languages_RowHandle(const FLanguagesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_LevelSequences_RowHandle(const FLevelSequencesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_LivingItemShopItems_RowHandle(const FLivingItemShopItemsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_LivingItemUpgrades_RowHandle(const FLivingItemUpgradesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_LivingItem_RowHandle(const FLivingItemRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_LogCategories_RowHandle(const FLogCategoriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MapIcons_RowHandle(const FMapIconsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MapSearchArea_RowHandle(const FMapSearchAreaRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Meshable_RowHandle(const FMeshableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MetaCurrency_RowHandle(const FMetaCurrencyRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MetaResourceNodes_RowHandle(const FMetaResourceNodesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MissionNPC_RowHandle(const FMissionNPCRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MissionTypes_RowHandle(const FMissionTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ModifierStateAudioData_RowHandle(const FModifierStateAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ModifierStates_RowHandle(const FModifierStatesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Mounts_RowHandle(const FMountsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MusicLocationConditions_RowHandle(const FMusicLocationConditionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MusicQuestConditions_RowHandle(const FMusicQuestConditionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MusicTrackStateGroups_RowHandle(const FMusicTrackStateGroupsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_MusicTracks_RowHandle(const FMusicTracksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_NPCWeapon_RowHandle(const FNPCWeaponRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_NationalFlags_RowHandle(const FNationalFlagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_OptionalResourceFlows_RowHandle(const FOptionalResourceFlowsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_OrchestrationEvents_RowHandle(const FOrchestrationEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_OrchestrationStateFlags_RowHandle(const FOrchestrationStateFlagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_OreDeposit_RowHandle(const FOreDepositRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Outposts_RowHandle(const FOutpostsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Oxygen_RowHandle(const FOxygenRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Paintings_RowHandle(const FPaintingsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PlayerAccoladeCategories_RowHandle(const FPlayerAccoladeCategoriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PlayerFootstepAudioData_RowHandle(const FPlayerFootstepAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PlayerIdentity_RowHandle(const FPlayerIdentityRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PlayerTalentModifiers_RowHandle(const FPlayerTalentModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PlayerTrackerCategories_RowHandle(const FPlayerTrackerCategoriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PlayerTrackers_RowHandle(const FPlayerTrackersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PrebuiltStructures_RowHandle(const FPrebuiltStructuresRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_PreviewCameraSettings_RowHandle(const FPreviewCameraSettingsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Processing_RowHandle(const FProcessingRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ProcessorRecipes_RowHandle(const FProcessorRecipesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ProjectileTypes_RowHandle(const FProjectileTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ProspectForecast_RowHandle(const FProspectForecastRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ProspectList_RowHandle(const FProspectListRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ProspectStats_RowHandle(const FProspectStatsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_QuestEnemyModifiers_RowHandle(const FQuestEnemyModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_QuestEvents_RowHandle(const FQuestEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_QuestQueries_RowHandle(const FQuestQueriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_QuestVocalisationModifiers_RowHandle(const FQuestVocalisationModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_QuestWeatherModifiers_RowHandle(const FQuestWeatherModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Quests_RowHandle(const FQuestsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_QuickMove_RowHandle(const FQuickMoveRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RCONCommand_RowHandle(const FRCONCommandRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RTXGIVolumes_RowHandle(const FRTXGIVolumesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RadialMenuData_RowHandle(const FRadialMenuDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RadialOptions_RowHandle(const FRadialOptionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RangedWeaponData_RowHandle(const FRangedWeaponDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RecipeSets_RowHandle(const FRecipeSetsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RecoveryBeacons_RowHandle(const FRecoveryBeaconsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RefinedOil_RowHandle(const FRefinedOilRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RepGraphClassPolicies_RowHandle(const FRepGraphClassPoliciesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RepGraphClassSettings_RowHandle(const FRepGraphClassSettingsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ResourceNodeAudioData_RowHandle(const FResourceNodeAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Resource_RowHandle(const FResourceRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RiverAudioData_RowHandle(const FRiverAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Rocketable_RowHandle(const FRocketableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_RowHandle(const FRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Rulesets_RowHandle(const FRulesetsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Saddles_RowHandle(const FSaddlesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ScalingRules_RowHandle(const FScalingRulesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ScriptedEvents_RowHandle(const FScriptedEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SeedModifications_RowHandle(const FSeedModificationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SessionFlags_RowHandle(const FSessionFlagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementBuildings_RowHandle(const FSettlementBuildingsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementEventTypes_RowHandle(const FSettlementEventTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementEvents_RowHandle(const FSettlementEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementNPCClothing_RowHandle(const FSettlementNPCClothingRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementNPCItems_RowHandle(const FSettlementNPCItemsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementNPCRoles_RowHandle(const FSettlementNPCRolesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementNPCSkills_RowHandle(const FSettlementNPCSkillsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementNPCTaskTypes_RowHandle(const FSettlementNPCTaskTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementNPCTraits_RowHandle(const FSettlementNPCTraitsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SettlementRaids_RowHandle(const FSettlementRaidsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Slotable_RowHandle(const FSlotableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SortTypePriority_RowHandle(const FSortTypePriorityRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_StaminaActionCosts_RowHandle(const FStaminaActionCostsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_StasisBag_RowHandle(const FStasisBagRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_StatAfflictions_RowHandle(const FStatAfflictionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_StatCategories_RowHandle(const FStatCategoriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_StatGameplayTags_RowHandle(const FStatGameplayTagsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Statistics_RowHandle(const FStatisticsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Stats_RowHandle(const FStatsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Surfaces_RowHandle(const FSurfacesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_SurvivalTriggers_RowHandle(const FSurvivalTriggersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TagQueries_RowHandle(const FTagQueriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TalentArchetypes_RowHandle(const FTalentArchetypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TalentModelViews_RowHandle(const FTalentModelViewsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TalentModels_RowHandle(const FTalentModelsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TalentRanks_RowHandle(const FTalentRanksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TalentTrees_RowHandle(const FTalentTreesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TalentViews_RowHandle(const FTalentViewsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Talents_RowHandle(const FTalentsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TamedCreatureModifiers_RowHandle(const FTamedCreatureModifiersRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Tames_RowHandle(const FTamesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TerrainZoneAudioData_RowHandle(const FTerrainZoneAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Terrains_RowHandle(const FTerrainsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Thermal_RowHandle(const FThermalRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TimeOfDay_RowHandle(const FTimeOfDayRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TimelineRanks_RowHandle(const FTimelineRanksRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ToolDamage_RowHandle(const FToolDamageRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ToolTypes_RowHandle(const FToolTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Transmutable_RowHandle(const FTransmutableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_TreeAudioData_RowHandle(const FTreeAudioDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Turret_RowHandle(const FTurretRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Usable_RowHandle(const FUsableRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Uses_RowHandle(const FUsesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ValidAmmoTypes_RowHandle(const FValidAmmoTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ValidHitQueries_RowHandle(const FValidHitQueriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ValidHitTypes_RowHandle(const FValidHitTypesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_ValidInteractQueries_RowHandle(const FValidInteractQueriesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_VocalisationSettings_RowHandle(const FVocalisationSettingsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Vocalisations_RowHandle(const FVocalisationsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_VoxelDistributionRegion_RowHandle(const FVoxelDistributionRegionRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_VoxelMaterialMap_RowHandle(const FVoxelMaterialMapRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_VoxelSetupData_RowHandle(const FVoxelSetupDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WaterSetup_RowHandle(const FWaterSetupRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Water_RowHandle(const FWaterRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WeatherActions_RowHandle(const FWeatherActionsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WeatherBiomeGroups_RowHandle(const FWeatherBiomeGroupsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WeatherEvents_RowHandle(const FWeatherEventsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WeatherPools_RowHandle(const FWeatherPoolsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WeatherTierIcon_RowHandle(const FWeatherTierIconRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_Weight_RowHandle(const FWeightRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WorkshopItems_RowHandle(const FWorkshopItemsRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WorldBosses_RowHandle(const FWorldBossesRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void Validate_WorldData_RowHandle(const FWorldDataRowHandle& RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Warn(FString Message);  // parameters 0x10

    // Virtual functions that start here:
    //   Generate_AIAudioData_RowHandle, Generate_AICreatureType_RowHandle, Generate_AIDescriptors_RowHandle
    //   Generate_AIEvents_RowHandle, Generate_AIGrowth_RowHandle, Generate_AIRelationships_RowHandle
    //   Generate_AISetup_RowHandle, Generate_AISpawnConfig_RowHandle, Generate_AISpawnRules_RowHandle
    //   Generate_AISpawnZones_RowHandle, Generate_Accolades_RowHandle, Generate_AccountFlags_RowHandle
    //   Generate_Actionable_RowHandle, Generate_Actions_RowHandle, Generate_AfflictionChance_RowHandle
    //   Generate_AlterationModifiers_RowHandle, Generate_Alterations_RowHandle
    //   Generate_AmmoTypes_RowHandle, Generate_ArmourSetBonus_RowHandle, Generate_ArmourSets_RowHandle
    //   Generate_Armour_RowHandle, Generate_AssetReferences_RowHandle, Generate_Atmospheres_RowHandle
    //   Generate_AttachmentIcons_RowHandle, Generate_AutonomousSpawns_RowHandle
    //   Generate_BagPriority_RowHandle, Generate_Ballistic_RowHandle, Generate_BestiaryData_RowHandle
    //   Generate_BestiaryPoints_RowHandle, Generate_BestiaryTraitTypes_RowHandle
    //   Generate_BestiaryTraits_RowHandle, Generate_BiomeAudioData_RowHandle, Generate_Biomes_RowHandle
    //   Generate_BlueprintUnlocks_RowHandle, Generate_BreakableRockData_RowHandle
    //   Generate_BuildableAudioData_RowHandle, Generate_Buildable_RowHandle
    //   Generate_BuildingLookup_RowHandle, Generate_BuildingPieces_RowHandle
    //   Generate_BuildingSkins_RowHandle, Generate_BuildingStability_RowHandle
    //   Generate_BuildingTypes_RowHandle, Generate_Challenges_RowHandle
    //   Generate_CharacterCreationData_RowHandle, Generate_CharacterFlags_RowHandle
    //   Generate_CharacterGrowth_RowHandle, Generate_CharacterPerks_RowHandle
    //   Generate_CharacterStartingStats_RowHandle, Generate_CharacterTimeline_RowHandle
    //   Generate_CharacterVoices_RowHandle, Generate_ChargedModifiers_RowHandle
    //   Generate_CollectableNotes_RowHandle, Generate_Combustible_RowHandle, Generate_Consumable_RowHandle
    //   Generate_ContextMenuGroupTypes_RowHandle, Generate_CraftingAudioData_RowHandle
    //   Generate_CraftingModifications_RowHandle, Generate_CraftingTags_RowHandle
    //   Generate_CreatureAudioThreatData_RowHandle, Generate_CriticalHitAreaAudioData_RowHandle
    //   Generate_CriticalHitAreas_RowHandle, Generate_CriticalHitSetup_RowHandle
    //   Generate_CrudeOil_RowHandle, Generate_CurrencyConversions_RowHandle
    //   Generate_CustomGameStats_RowHandle, Generate_DLCPackageData_RowHandle
    //   Generate_DamageTypeInfo_RowHandle, Generate_Decayable_RowHandle, Generate_DeployableSetup_RowHandle
    //   Generate_DeployableTypes_RowHandle, Generate_Deployable_RowHandle, Generate_DialoguePool_RowHandle
    //   Generate_DialogueSpeaker_RowHandle, Generate_Dialogue_RowHandle
    //   Generate_DirtMoundModifications_RowHandle, Generate_DropGroups_RowHandle
    //   Generate_DropShipActions_RowHandle, Generate_DropShipSequences_RowHandle
    //   Generate_Durable_RowHandle, Generate_DynamicQuestRewardItems_RowHandle
    //   Generate_DynamicQuestRewards_RowHandle, Generate_DynamicQuests_RowHandle, Generate_Energy_RowHandle
    //   Generate_EpicCreatures_RowHandle, Generate_Equippable_RowHandle, Generate_ErrorCodes_RowHandle
    //   Generate_ExoticSpawn_RowHandle, Generate_ExperienceEvents_RowHandle, Generate_Experience_RowHandle
    //   Generate_FLODDescriptions_RowHandle, Generate_FactionInfo_RowHandle
    //   Generate_FactionMissions_RowHandle, Generate_Farmable_RowHandle
    //   Generate_FarmingGrowthStates_RowHandle, Generate_FarmingSeeds_RowHandle
    //   Generate_FeatureLevels_RowHandle, Generate_FieldGuideCategories_RowHandle
    //   Generate_FieldGuideMetaData_RowHandle, Generate_FieldGuideRedirect_RowHandle
    //   Generate_FieldGuideSets_RowHandle, Generate_FieldGuideSubcategories_RowHandle
    //   Generate_Fillable_RowHandle, Generate_FirearmAudioData_RowHandle, Generate_FirearmData_RowHandle
    //   Generate_FirearmScopeData_RowHandle, Generate_FishData_RowHandle, Generate_FishSetup_RowHandle
    //   Generate_FishSpawnConfig_RowHandle, Generate_FishSpawnZones_RowHandle, Generate_Flammable_RowHandle
    //   Generate_Floatable_RowHandle, Generate_Focusable_RowHandle, Generate_FoodTypes_RowHandle
    //   Generate_Fuel_RowHandle, Generate_GOAPActions_RowHandle, Generate_GOAPGoals_RowHandle
    //   Generate_GOAPMotivations_RowHandle, Generate_GOAPProperties_RowHandle, Generate_GOAPSetup_RowHandle
    //   Generate_GameplayConfig_RowHandle, Generate_Generator_RowHandle, Generate_GeneticLineages_RowHandle
    //   Generate_GeneticValues_RowHandle, Generate_GrantedAuras_RowHandle
    //   Generate_GraphicsTierDescriptionMods_RowHandle, Generate_GraphicsTierDescription_RowHandle
    //   Generate_GreatHuntCreatureInfo_RowHandle, Generate_GreatHunts_RowHandle
    //   Generate_GroupedInstancedMapData_RowHandle, Generate_Highlightable_RowHandle
    //   Generate_Hints_RowHandle, Generate_Hitable_RowHandle, Generate_HordeWave_RowHandle
    //   Generate_Horde_RowHandle, Generate_HuntingClueSetup_RowHandle, Generate_HuntingSetup_RowHandle
    //   Generate_IcarusAttachments_RowHandle, Generate_IcarusResources_RowHandle
    //   Generate_InstancedMapData_RowHandle, Generate_Interactable_RowHandle
    //   Generate_Interactions_RowHandle, Generate_InventoryContainer_RowHandle
    //   Generate_InventoryID_RowHandle, Generate_InventoryInfo_RowHandle, Generate_Inventory_RowHandle
    //   Generate_ItemAnimations_RowHandle, Generate_ItemAttachment_RowHandle
    //   Generate_ItemAudioData_RowHandle, Generate_ItemClassificationsIcons_RowHandle
    //   Generate_ItemRanks_RowHandle, Generate_ItemRewards_RowHandle, Generate_ItemTemplate_RowHandle
    //   Generate_ItemTraitMasks_RowHandle, Generate_ItemWeightStatQueries_RowHandle
    //   Generate_Itemable_RowHandle, Generate_ItemsStatic_RowHandle, Generate_KeyIcons_RowHandle
    //   Generate_KeybindContexts_RowHandle, Generate_Keybindings_RowHandle, Generate_Keys_RowHandle
    //   Generate_Languages_RowHandle, Generate_LevelSequences_RowHandle
    //   Generate_LivingItemShopItems_RowHandle, Generate_LivingItemUpgrades_RowHandle
    //   Generate_LivingItem_RowHandle, Generate_LogCategories_RowHandle, Generate_MapIcons_RowHandle
    //   Generate_MapSearchArea_RowHandle, Generate_Meshable_RowHandle, Generate_MetaCurrency_RowHandle
    //   Generate_MetaResourceNodes_RowHandle, Generate_MissionNPC_RowHandle
    //   Generate_MissionTypes_RowHandle, Generate_ModifierStateAudioData_RowHandle
    //   Generate_ModifierStates_RowHandle, Generate_Mounts_RowHandle
    //   Generate_MusicLocationConditions_RowHandle, Generate_MusicQuestConditions_RowHandle
    //   Generate_MusicTrackStateGroups_RowHandle, Generate_MusicTracks_RowHandle
    //   Generate_NPCWeapon_RowHandle, Generate_NationalFlags_RowHandle
    //   Generate_OptionalResourceFlows_RowHandle, Generate_OrchestrationEvents_RowHandle
    //   Generate_OrchestrationStateFlags_RowHandle, Generate_OreDeposit_RowHandle
    //   Generate_Outposts_RowHandle, Generate_Oxygen_RowHandle, Generate_Paintings_RowHandle
    //   Generate_PlayerAccoladeCategories_RowHandle, Generate_PlayerFootstepAudioData_RowHandle
    //   Generate_PlayerIdentity_RowHandle, Generate_PlayerTalentModifiers_RowHandle
    //   Generate_PlayerTrackerCategories_RowHandle, Generate_PlayerTrackers_RowHandle
    //   Generate_PrebuiltStructures_RowHandle, Generate_PreviewCameraSettings_RowHandle
    //   Generate_Processing_RowHandle, Generate_ProcessorRecipes_RowHandle
    //   Generate_ProjectileTypes_RowHandle, Generate_ProspectForecast_RowHandle
    //   Generate_ProspectList_RowHandle, Generate_ProspectStats_RowHandle
    //   Generate_QuestEnemyModifiers_RowHandle, Generate_QuestEvents_RowHandle
    //   Generate_QuestQueries_RowHandle, Generate_QuestVocalisationModifiers_RowHandle
    //   Generate_QuestWeatherModifiers_RowHandle, Generate_Quests_RowHandle, Generate_QuickMove_RowHandle
    //   Generate_RCONCommand_RowHandle, Generate_RTXGIVolumes_RowHandle, Generate_RadialMenuData_RowHandle
    //   Generate_RadialOptions_RowHandle, Generate_RangedWeaponData_RowHandle
    //   Generate_RecipeSets_RowHandle, Generate_RecoveryBeacons_RowHandle, Generate_RefinedOil_RowHandle
    //   Generate_RepGraphClassPolicies_RowHandle, Generate_RepGraphClassSettings_RowHandle
    //   Generate_ResourceNodeAudioData_RowHandle, Generate_Resource_RowHandle
    //   Generate_RiverAudioData_RowHandle, Generate_Rocketable_RowHandle, Generate_RowHandle
    //   Generate_Rulesets_RowHandle, Generate_Saddles_RowHandle, Generate_ScalingRules_RowHandle
    //   Generate_ScriptedEvents_RowHandle, Generate_SeedModifications_RowHandle
    //   Generate_SessionFlags_RowHandle, Generate_SettlementBuildings_RowHandle
    //   Generate_SettlementEventTypes_RowHandle, Generate_SettlementEvents_RowHandle
    //   Generate_SettlementNPCClothing_RowHandle, Generate_SettlementNPCItems_RowHandle
    //   Generate_SettlementNPCRoles_RowHandle, Generate_SettlementNPCSkills_RowHandle
    //   Generate_SettlementNPCTaskTypes_RowHandle, Generate_SettlementNPCTraits_RowHandle
    //   Generate_SettlementRaids_RowHandle, Generate_Slotable_RowHandle
    //   Generate_SortTypePriority_RowHandle, Generate_StaminaActionCosts_RowHandle
    //   Generate_StasisBag_RowHandle, Generate_StatAfflictions_RowHandle, Generate_StatCategories_RowHandle
    //   Generate_StatGameplayTags_RowHandle, Generate_Statistics_RowHandle, Generate_Stats_RowHandle
    //   Generate_Surfaces_RowHandle, Generate_SurvivalTriggers_RowHandle, Generate_TagQueries_RowHandle
    //   Generate_TalentArchetypes_RowHandle, Generate_TalentModelViews_RowHandle
    //   Generate_TalentModels_RowHandle, Generate_TalentRanks_RowHandle, Generate_TalentTrees_RowHandle
    //   Generate_TalentViews_RowHandle, Generate_Talents_RowHandle
    //   Generate_TamedCreatureModifiers_RowHandle, Generate_Tames_RowHandle
    //   Generate_TerrainZoneAudioData_RowHandle, Generate_Terrains_RowHandle, Generate_Thermal_RowHandle
    //   Generate_TimeOfDay_RowHandle, Generate_TimelineRanks_RowHandle, Generate_ToolDamage_RowHandle
    //   Generate_ToolTypes_RowHandle, Generate_Transmutable_RowHandle, Generate_TreeAudioData_RowHandle
    //   Generate_Turret_RowHandle, Generate_Usable_RowHandle, Generate_Uses_RowHandle
    //   Generate_ValidAmmoTypes_RowHandle, Generate_ValidHitQueries_RowHandle
    //   Generate_ValidHitTypes_RowHandle, Generate_ValidInteractQueries_RowHandle
    //   Generate_VocalisationSettings_RowHandle, Generate_Vocalisations_RowHandle
    //   Generate_VoxelDistributionRegion_RowHandle, Generate_VoxelMaterialMap_RowHandle
    //   Generate_VoxelSetupData_RowHandle, Generate_WaterSetup_RowHandle, Generate_Water_RowHandle
    //   Generate_WeatherActions_RowHandle, Generate_WeatherBiomeGroups_RowHandle
    //   Generate_WeatherEvents_RowHandle, Generate_WeatherPools_RowHandle
    //   Generate_WeatherTierIcon_RowHandle, Generate_Weight_RowHandle, Generate_WorkshopItems_RowHandle
    //   Generate_WorldBosses_RowHandle, Generate_WorldData_RowHandle
};
