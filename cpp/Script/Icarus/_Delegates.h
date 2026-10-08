DELEGATE() EViewTraceResultPriority ViewTraceResultPriorityDelegate(const FViewTraceResult& Result);  // parameters 0x8D
DELEGATE() UWidget* GenerateWidgetForText(FText Item);  // parameters 0x20
DELEGATE() void AccountFlagsSynced();
DELEGATE() void AccountFlagsUpdatedSignature(AIcarusPlayerState* PlayerState);  // parameters 0x8
DELEGATE() void AccountTalentsSynced();
DELEGATE() void ActionAssociatedItemUpdated();
DELEGATE() void ActionHitSignature(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
DELEGATE() void ActionRowUpdatedSignature();
DELEGATE() void ActionSignature(AActor* InvokingActor, const EActionableEventType& ActionType, const EActionableTrigger& ActionTrigger);  // parameters 0xA
DELEGATE() void ActorBroken();
DELEGATE() void ActorDamagedSignature(AActor* DamagedActor);  // parameters 0x8
DELEGATE() void ActorDeath(UActorState* ActorState);  // parameters 0x8
DELEGATE() void ActorPreDestroy();
DELEGATE() void ActorStateReady(UActorState* ActorState);  // parameters 0x8
DELEGATE() void AliveStateChangedSignature(UActorState* ActorState);  // parameters 0x8
DELEGATE() void ArmorBrokenNotifySignature(AActor* Creature, FIcarusDamagePacket DamagePacket);  // parameters 0xE0
DELEGATE() void ArmourEquipmentUpdatedSignature();
DELEGATE() void AudioContextEnteredCave(AActor* Cave);  // parameters 0x8
DELEGATE() void AudioContextExitedCave();
DELEGATE() void AudioShelterUpdated(float NewShelter);  // parameters 0x4
DELEGATE() void BackToHabResult(bool Success, APlayerController* PlayerController);  // parameters 0x10
DELEGATE() void BaseLevelTeleportCooldownStateChanged(bool bCooldownActive);  // parameters 0x1
DELEGATE() void BindToOrchestrationDel();
DELEGATE() void BiomeUpdated();
DELEGATE() void BiomeUpdatedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void BlueprintTalentsUpdatedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void BounceItem(const FItemData& Item);  // parameters 0x1F0
DELEGATE() void BuildingPiecePlacedNotifySignature(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
DELEGATE() void BuildingPieceRemovedNotifySignature(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
DELEGATE() void BuildingPieceRepairedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void CaughtFishNotifySignature(AActor* Fisher, FItemData Fish);  // parameters 0x1F8
DELEGATE() void CharacterFlagsUpdatedSignature(AIcarusPlayerState* PlayerState);  // parameters 0x8
DELEGATE() void CharacterLoadoutUpdated();
DELEGATE() void CharacterLoggedOut(AIcarusPlayerController* PlayerController, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x10
DELEGATE() void CharacterModifierStateUpdatedSignature(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
DELEGATE() void CharacterMontageNotifySignature(FName NotifyName, USkeletalMeshComponent* Component, UAnimSequenceBase* Anim);  // parameters 0x18
DELEGATE() void CharacterProgressionSynced();
DELEGATE() void CharacterSlidingUpdatedSignature();
DELEGATE() void CharacterStanceUpdatedSignature(EGOAPCharacterStance PreviousStance, EGOAPCharacterStance NewStance);  // parameters 0x2
DELEGATE() void CharacterTalentsSynced();
DELEGATE() void ClaimedProspectResult(bool Success, const FProspectInfo& ProspectInfo);  // parameters 0xA8
DELEGATE() void ClearDialogues();
DELEGATE() void ConfirmationDelegate();
DELEGATE() void ConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
DELEGATE() void ConnectedPlayerRemoved(const FPlayerCharacterID& RemovedPlayerID);  // parameters 0x18
DELEGATE() void ConnectionUpdated();
DELEGATE() void ConsumedFood();
DELEGATE() void ConsumedOxygen();
DELEGATE() void ConsumedWater();
DELEGATE() void ContextMenuItemClickedDelegate(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
DELEGATE() void CooldownElapsedDelegate(EActionableEventType ActionType);  // parameters 0x1
DELEGATE() void CorpseItemRemovedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void CraftedItemNotifySignature(AActor* Player, AActor* Device, FItemData Item);  // parameters 0x200
DELEGATE() void CraftedRecipeNotifySignature(AActor* Player, AActor* Device, FProcessorRecipesRowHandle Recipe);  // parameters 0x28
DELEGATE() void CreatureGeneticsUpdated();
DELEGATE() void CreatureGrownUpNotifySignature(AIcarusMountCharacter* Adult, AIcarusNPCGOAPCharacter* Juvenile);  // parameters 0x10
DELEGATE() void CreatureKilledNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
DELEGATE() void CreatureLevelUpdated(int32 Level);  // parameters 0x4
DELEGATE() void CreatureLineageUpdated();
DELEGATE() void CreatureParentsUpdated();
DELEGATE() void CreatureScannedNotifySignature(AIcarusPlayerCharacter* Player, AActor* Creature);  // parameters 0x10
DELEGATE() void CreatureSexUpdated();
DELEGATE() void CreatureSkinUpdated();
DELEGATE() void CreatureSkinnedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusCorpse* Corpse);  // parameters 0x10
DELEGATE() void CreatureStartedTamingNotifySignature(UIcarusTamingComponent* TamingComponent);  // parameters 0x8
DELEGATE() void CreatureTamedNotifySignature(AIcarusMountCharacter* TamedMount, UIcarusTamingComponent* TamingComponent);  // parameters 0x10
DELEGATE() void CreditsUpdated();
DELEGATE() void CropMaturedNotifySignature(FFarmingSeedsRowHandle Seed);  // parameters 0x18
DELEGATE() void CurrentTargetUpdated(AActor* NewTarget);  // parameters 0x8
DELEGATE() void CursorCleared();
DELEGATE() void CursorUpdated(FItemData Item);  // parameters 0x1F0
DELEGATE() void CustomProspectStatsUpdatedSignature();
DELEGATE() void DedicatedSessionsUpdated();
DELEGATE() void DefendLeftAreaNotifySignature(AIcarusActor* Actor);  // parameters 0x8
DELEGATE() void DeployNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
DELEGATE() void DeployableDestroyedNotifySignature(ADeployable* Deployable, FIcarusDamagePacket LastDamagePacket, AIcarusPlayerCharacter* InstigatingPlayer);  // parameters 0xE8
DELEGATE() void DeployableInteractedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
DELEGATE() void DeployablePickedUpNotifySignature(AIcarusPlayerCharacter* Player, ADeployable* Deployable);  // parameters 0x10
DELEGATE() void DismountedSignature();
DELEGATE() void DistanceTraveledNotifySignature(AIcarusPlayerCharacter* Player, int32 Distance, EProspectLocation Biome);  // parameters 0xD
DELEGATE() void DistanceTravelledEvent(FString PlayerID, int32 Distance);  // parameters 0x14
DELEGATE() void DropShipEnterNotifySignature(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
DELEGATE() void DropShipExitNotifySignature(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
DELEGATE() void DropShipInteractNotifySignature(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
DELEGATE() void DropShipLaunchNotifySignature(AIcarusRocket* DropShip);  // parameters 0x8
DELEGATE() void DroppingOverflowItem(const FItemData& Item);  // parameters 0x1F0
DELEGATE() void DropshipCreationResult(bool Success);  // parameters 0x1
DELEGATE() void DropshipDeletionResult(bool Success);  // parameters 0x1
DELEGATE() void DropshipModificationResult(bool Success);  // parameters 0x1
DELEGATE() void DropshipSpawnFound(AIcarusRocketSpawnBase* RocketSpawn, AIcarusPlayerControllerSurvival* Player);  // parameters 0x10
DELEGATE() void DropshipsUpdated();
DELEGATE() void DynamicDataUpdated();
DELEGATE() void DynamicDataUpdatedSignature();
DELEGATE() void EnteredWaterNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void ExchangeCurrencyResult(bool Success, const TArray<FMetaResource>& ResourceDeltas);  // parameters 0x18
DELEGATE() void ExperienceGainedEvent(FString PlayerID, int32 Distance);  // parameters 0x14
DELEGATE() void ExperienceModified(FExperienceEventsRowHandle ExperienceEvent, int32 ExperienceGained);  // parameters 0x1C
DELEGATE() void ExperienceUpdated();
DELEGATE() void ExternalTemperatureUpdated(int32 NewTemperature);  // parameters 0x4
DELEGATE() void FactionDeployableActivatedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
DELEGATE() void FactionEnterAreaNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Actor);  // parameters 0x10
DELEGATE() void FactionItemRemovedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void FactionMissionUpdateResult(bool Success);  // parameters 0x1
DELEGATE() void FallDamageAppliedNotifySignature(AIcarusCharacter* Player, int32 Amount);  // parameters 0xC
DELEGATE() void FireExtinguishedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void FloatableUpdated(bool Floating);  // parameters 0x1
DELEGATE() void FocusChangedSignature();
DELEGATE() void FocusedItemUpdated();
DELEGATE() void FoliageResourceCollectedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void FoodUpdated(int32 NewFood);  // parameters 0x4
DELEGATE() void ForceStop(EProcessorStoppedReason Reason);  // parameters 0x1
DELEGATE() void ForecastItemsUpdated();
DELEGATE() void ForecastRestoredFromDatabase();
DELEGATE() void FriendSessionsUpdated();
DELEGATE() void FrozenStateUpdatedSignature();
DELEGATE() void GOAPAbortSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
DELEGATE() void GOAPInteractionCompleteSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
DELEGATE() void GOAPInteractionSignature(UIcarusGOAPInteractableComponent* Component);  // parameters 0x8
DELEGATE() void GOAPMovementBlockedSignature(FVector CurrentLocation, FVector TargetLocation);  // parameters 0x18
DELEGATE() void GOAPNewActionSet(UIcarusGOAPAction* Action);  // parameters 0x8
DELEGATE() void GOAPStateUpdatedSignature(FGOAPPropertiesRowHandle Property, bool Value);  // parameters 0x19
DELEGATE() void GenerationCompleteSignature();
DELEGATE() void GeneratorActivatedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
DELEGATE() void GeneratorActiveStateUpdated(bool IsActive);  // parameters 0x1
DELEGATE() void GeneratorDeactivatedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
DELEGATE() void GeneratorOutOfFuel();
DELEGATE() void GenericPlayerEvent(FString PlayerID);  // parameters 0x10
DELEGATE() void GenericWorldEvent(FString PlayerID);  // parameters 0x10
DELEGATE() void GetCharacterLoadoutResult(bool Success, const FCharacterLoadout& CharacterLoadout);  // parameters 0x140
DELEGATE() void GetCharacterProfileResult(bool Success, const FOnlineProfileCharacter& CharacterProfile);  // parameters 0xF8
DELEGATE() void GetUserProfileResult(bool Success, const FOnlineProfileUser& CharacterProfile);  // parameters 0x50
DELEGATE() void GrowthStateUpdated(UCultivation* Cultivation, EPlantGrowthStates GrowthState);  // parameters 0x9
DELEGATE() void HighlightChangedSignature(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
DELEGATE() void HitEffectsSpawnedSignature(const FTransform& SpawnTransform, TEnumAsByte<EPhysicalSurface> HitSurface, AActor* HitActor);  // parameters 0x40
DELEGATE() void IcarusLogEntryAddedDelegate(const FIcarusLogEntry& LogEntry);  // parameters 0x30
DELEGATE() void IcarusSessionResult(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
DELEGATE() void InventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void InventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void InventoryItemRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void InventoryItemRemovedVerbose(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
DELEGATE() void InventoryWeightUpdated();
DELEGATE() void ItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void ItemAddedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void ItemAlteredNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item, FIcarusAttachmentsRowHandle Attachment);  // parameters 0x210
DELEGATE() void ItemBounce(FItemData Item, bool Input);  // parameters 0x1F1
DELEGATE() void ItemBroke(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void ItemConsumedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void ItemCraftedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item, FProcessorRecipesRowHandle RecipeRow);  // parameters 0x210
DELEGATE() void ItemExtractedNotifySignature(AActor* Device, FItemData Item);  // parameters 0x1F8
DELEGATE() void ItemGained(FItemData Item, int32 TotalCount);  // parameters 0x1F4
DELEGATE() void ItemHarvestedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void ItemRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void ItemRemovedVerbose(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
DELEGATE() void ItemShiftedNotifySignature(AIcarusPlayerCharacter* Player, UInventory* SourceInventory, int32 SourceLocation, UInventory* DestinationInventory, int32 DestinationLocation, int32 Amount);  // parameters 0x28
DELEGATE() void ItemsUpdated();
DELEGATE() void LargeScaleActorDestroyedSignature(AActor* DestroyedActor);  // parameters 0x8
DELEGATE() void LevelStreamingStateUpdatedSignature(ULevelStreaming* UpdatedStreamingLevel, bool bIsVisible);  // parameters 0x9
DELEGATE() void LevelUpdated();
DELEGATE() void LevelUpdatedNotifySignature(AIcarusPlayerCharacter* Player, int32 CurrentLevel);  // parameters 0xC
DELEGATE() void LinkDestroyed();
DELEGATE() void LinkEstablished();
DELEGATE() void LivingItemSlotUnlockedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void LoadingScreenChangedSignature(bool bLoadingScreenIsShowing);  // parameters 0x1
DELEGATE() void LoadoutInventorySlotUpdated(FString DatabaseGUID, const FMetaItem& MetaItem);  // parameters 0x50
DELEGATE() void LoadoutInventoryUpdated();
DELEGATE() void LoadoutPackaged();
DELEGATE() void LobbyLoginQueueUpdated();
DELEGATE() void LocalTimeSurvivedNotifySignature(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
DELEGATE() void LocalWeatherEventUpdatedSignature(FWeatherEventsRowHandle LocalWeatherEvent);  // parameters 0x18
DELEGATE() void MaintenanceStatusUpdated();
DELEGATE() void MapIconVisibilityChanged(UUserWidget* Icon, UIcarusMapIconComponent* Component, bool bNewVisibility);  // parameters 0x11
DELEGATE() void MapIconsUpdatedSignature();
DELEGATE() void MetaInventorySlotUpdated(FString DatabaseGUID, const FMetaItem& MetaItem);  // parameters 0x50
DELEGATE() void MetaInventoryUpdated();
DELEGATE() void MetaResourcesUpdated();
DELEGATE() void MigrationUpdatedSignature(bool bEnabled, FString HostPlayerName);  // parameters 0x18
DELEGATE() void MissionAbandonedNotifySignature(FFactionMissionsRowHandle Mission);  // parameters 0x18
DELEGATE() void MissionCompletedNotifySignature(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
DELEGATE() void MissionFailedNotifySignature(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
DELEGATE() void MissionStartedNotifySignature(FFactionMissionsRowHandle Mission);  // parameters 0x18
DELEGATE() void ModifierLifetimeUpdated();
DELEGATE() void ModifierStateUpdatedSignature(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
DELEGATE() void MountWeightUpdated();
DELEGATE() void MountedSignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void NightSkippedNotifySignature(AIcarusPlayerCharacter* Player, int32 ComfortLevel);  // parameters 0xC
DELEGATE() void NoteCollectedNotifySignature(AActor* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void NoteReadNotifySignature(AActor* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void NotificationsRefreshed();
DELEGATE() void NotificationsUpdated();
DELEGATE() void ObstacleJumpFinishedSignature();
DELEGATE() void ObstacleJumpStartedSignature();
DELEGATE() void OnAccoladeCompleted(FAccoladeCompletedState Accolade);  // parameters 0x30
DELEGATE() void OnAccoladeUpdated(FAccoladesRowHandle Accolade);  // parameters 0x18
DELEGATE() void OnActorConceal(UFLODActorComponent* Component, AActor* Actor);  // parameters 0x10
DELEGATE() void OnActorConcealing(UFLODActorComponent* Component, AActor* Actor);  // parameters 0x10
DELEGATE() void OnActorDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
DELEGATE() void OnActorRecordAssigned(UFLODActorComponent* Component, const FFLODActorRecordInstance& Current, const FFLODActorRecordInstance& Previous);  // parameters 0x40
DELEGATE() void OnActorReveal(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
DELEGATE() void OnActorRevealing(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
DELEGATE() void OnAimSensitivityApplied(float Value);  // parameters 0x4
DELEGATE() void OnAllInventoryItemsChanged(UInventory* Inventory);  // parameters 0x8
DELEGATE() void OnAmbientOcclusionApplied(bool Value);  // parameters 0x1
DELEGATE() void OnAmbientVolumeApplied(float Value);  // parameters 0x4
DELEGATE() void OnAntiAliasingApplied(EAntiAliasingSetting Value);  // parameters 0x1
DELEGATE() void OnArmorUpdated(UActorState* ActorState, float NewArmor);  // parameters 0xC
DELEGATE() void OnAttachedSeatChanged();
DELEGATE() void OnBeastLinkClicked(const FItemsStaticRowHandle& BeastRow);  // parameters 0x18
DELEGATE() void OnBlueprintTooltipOpenAnimationsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnBrownOutStrengthChanged(FIcarusResourcesEnum ResourceType, int32 Strength);  // parameters 0x14
DELEGATE() void OnBuildProgressChanged(float Progress);  // parameters 0x4
DELEGATE() void OnBuildStateChanged(ESettlementBuildState NewState);  // parameters 0x1
DELEGATE() void OnBuildingDestroyed(ABuildingBase* Building, EBuildingDestroyReason DestroyReason);  // parameters 0x9
DELEGATE() void OnBuildingReplaced(ABuildingBase* NewBuilding);  // parameters 0x8
DELEGATE() void OnCharacterVoiceVolumeApplied(float Value);  // parameters 0x4
DELEGATE() void OnChatMessageReceived(const FIcarusPlayerChatMessage& Message);  // parameters 0x40
DELEGATE() void OnCheatScriptFinished(FName Name);  // parameters 0x8
DELEGATE() void OnClientLeaveProspectSessionComplete();
DELEGATE() void OnCloseEvent();
DELEGATE() void OnClothSimulationApplied(bool Value);  // parameters 0x1
DELEGATE() void OnConcaveHullMeshGenerated();
DELEGATE() void OnContactShadowsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnControllerIconsApplied(EControllerIconsSetting Value);  // parameters 0x1
DELEGATE() void OnCreatureIKApplied(bool Value);  // parameters 0x1
DELEGATE() void OnCrosshairColorApplied(ECrosshairColorSetting Value);  // parameters 0x1
DELEGATE() void OnCrosshairStyleApplied(ECrosshairStyleSetting Value);  // parameters 0x1
DELEGATE() void OnCrouchLedgeSafetyApplied(bool Value);  // parameters 0x1
DELEGATE() void OnDNTDebugForceOpaqueApplied(bool Value);  // parameters 0x1
DELEGATE() void OnDamageReturned(int32 ReturnedAmount, AActor* ActorReceivingDamage);  // parameters 0x10
DELEGATE() void OnDamagedSignature(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
DELEGATE() void OnDedicatedSessionsCleared();
DELEGATE() void OnDeployedSignature(ADeployable* SpawnedDeployable);  // parameters 0x8
DELEGATE() void OnDeviceConnectionChanged(FIcarusResourcesEnum ResourceType, bool bNewConnected);  // parameters 0x11
DELEGATE() void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
DELEGATE() void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
DELEGATE() void OnDeviceResourceFlowActiveStateChanged(FIcarusResourcesEnum ResourceType, bool bNewActive);  // parameters 0x11
DELEGATE() void OnDialogueVolumeApplied(float Value);  // parameters 0x4
DELEGATE() void OnDisableDeployableCameraRotationApplied(bool Value);  // parameters 0x1
DELEGATE() void OnDisableGrassShadowsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnDisableMapSelectionWarningApplied(bool Value);  // parameters 0x1
DELEGATE() void OnDisplayHealthNumbersApplied(bool Value);  // parameters 0x1
DELEGATE() void OnDisplayTemperatureApplied(EDisplayTemperatureSetting Value);  // parameters 0x1
DELEGATE() void OnEffectivenessUpdated(UModifierStateComponent* Component);  // parameters 0x8
DELEGATE() void OnEffectsApplied(EEffectsSetting Value);  // parameters 0x1
DELEGATE() void OnFSRModeApplied(EFSRModeSetting Value);  // parameters 0x1
DELEGATE() void OnFSRSharpnessApplied(float Value);  // parameters 0x4
DELEGATE() void OnFactionMissionChanged(FFactionMissionsRowHandle FactionMission);  // parameters 0x18
DELEGATE() void OnFiberFoliageRespawnApplied(bool Value);  // parameters 0x1
DELEGATE() void OnFieldOfViewApplied(float Value);  // parameters 0x4
DELEGATE() void OnFindFriendInstance(UIcarusSessionResult* Session);  // parameters 0x8
DELEGATE() void OnFindServerInstance(UIcarusSessionResult* Session);  // parameters 0x8
DELEGATE() void OnFishBoardScoresUpdated();
DELEGATE() void OnFishLinkClicked(const FItemsStaticRowHandle& FishRow);  // parameters 0x18
DELEGATE() void OnFlagsChanged();
DELEGATE() void OnFlammableStateEnter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
DELEGATE() void OnFlammableStateExit(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
DELEGATE() void OnFlammableStateInit(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
DELEGATE() void OnFlammableStateTick(UFlammableInstance* Instance, UFlammableState* State, float DeltaSeconds);  // parameters 0x14
DELEGATE() void OnFoliageApplied(EFoliageSetting Value);  // parameters 0x1
DELEGATE() void OnFrameGenerationApplied(bool Value);  // parameters 0x1
DELEGATE() void OnFrameLimitApplied(float Value);  // parameters 0x4
DELEGATE() void OnFriendSessionsCleared();
DELEGATE() void OnGammaApplied(float Value);  // parameters 0x4
DELEGATE() void OnGenerationDepositFailed(ASettlementBuilding* Building);  // parameters 0x8
DELEGATE() void OnGenerationInputsMissing(ASettlementBuilding* Building);  // parameters 0x8
DELEGATE() void OnGetResourceGeneratedAlterationsResponse(const TArray<FItemResourceGeneratedAlterationResult>& Results);  // parameters 0x10
DELEGATE() void OnGlobalIlluminationApplied(bool Value);  // parameters 0x1
DELEGATE() void OnHealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
DELEGATE() void OnIconVisibilityChanged();
DELEGATE() void OnInputTypeApplied(EInputTypeSetting Value);  // parameters 0x1
DELEGATE() void OnInteractTimerLengthApplied(float Value);  // parameters 0x4
DELEGATE() void OnInventoriesUpdated();
DELEGATE() void OnInventoryAvailable();
DELEGATE() void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
DELEGATE() void OnInventoryWeightChanged(int32 CurrentWeight);  // parameters 0x4
DELEGATE() void OnInvertYAxisApplied(bool Value);  // parameters 0x1
DELEGATE() void OnItemBounced(const FItemData& ItemData);  // parameters 0x1F0
DELEGATE() void OnItemSet(FString NameString, UUserWidget* Widget);  // parameters 0x18
DELEGATE() void OnKillcamApplied(bool Value);  // parameters 0x1
DELEGATE() void OnLanguageApplied(FString Value);  // parameters 0x10
DELEGATE() void OnLargeStonesRespawnApplied(bool Value);  // parameters 0x1
DELEGATE() void OnLightShadowsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnLimitPoolsizeToVRAMApplied(bool Value);  // parameters 0x1
DELEGATE() void OnLivingItemChallengeCompleted(const FItemData& ItemData);  // parameters 0x1F0
DELEGATE() void OnLivingItemChallengeUpdated(const FItemData& ItemData, int32 ProgressAmount);  // parameters 0x1F4
DELEGATE() void OnLocalMessageReceived(FString Message);  // parameters 0x10
DELEGATE() void OnLockedMissionsUpdated(const TArray<FTimeLockedMissionInfo>& NewLockedMissions, const TArray<FTimeLockedMissionInfo>& RemovedLockedMissions);  // parameters 0x20
DELEGATE() void OnMasterVolumeApplied(float Value);  // parameters 0x4
DELEGATE() void OnMaxShadowCascadesApplied(float Value);  // parameters 0x4
DELEGATE() void OnMetaCurrencyChanged();
DELEGATE() void OnMetaInventoryChanged();
DELEGATE() void OnMeteorsIncoming(FVector2D Direction);  // parameters 0x8
DELEGATE() void OnMigrationFailed(FString FailureMessage);  // parameters 0x10
DELEGATE() void OnMigrationSuccess();
DELEGATE() void OnMissionHistoryUpdated();
DELEGATE() void OnModelStateChanged(UTalentModelInterface_Const* Model);  // parameters 0x8
DELEGATE() void OnModelTalentStateChanged(UTalentModelInterface_Const* Model, const FTalentsRowHandle& Talent, const FTalentModelData& TalentData);  // parameters 0x30
DELEGATE() void OnModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
DELEGATE() void OnModifiedSignature(ATreeBase* ModifiedTree);  // parameters 0x8
DELEGATE() void OnModifierUpdated(UModifierStateComponent* Component, bool bRemoved);  // parameters 0x9
DELEGATE() void OnMotionBlurApplied(float Value);  // parameters 0x4
DELEGATE() void OnMouseSensitivityChanged();
DELEGATE() void OnMouseSensitivityXApplied(float Value);  // parameters 0x4
DELEGATE() void OnMouseSensitivityYApplied(float Value);  // parameters 0x4
DELEGATE() void OnMultiplayerGhostBuildingApplied(bool Value);  // parameters 0x1
DELEGATE() void OnMusicVolumeApplied(float Value);  // parameters 0x4
DELEGATE() void OnNVIDIAReflexLowLatencyApplied(ENVIDIAReflexLowLatencySetting Value);  // parameters 0x1
DELEGATE() void OnNetworkDataReceived(const FResourceNetworkInspectorData& Data);  // parameters 0x60
DELEGATE() void OnNewHighScore();
DELEGATE() void OnNewQuestStarted(AQuest* InitialQuest);  // parameters 0x8
DELEGATE() void OnOpeningEvent();
DELEGATE() void OnOrchestrationEvent();
DELEGATE() void OnOverallApplied(EOverallSetting Value);  // parameters 0x1
DELEGATE() void OnPauseGameinEscapeMenuApplied(bool Value);  // parameters 0x1
DELEGATE() void OnPermissionChanged(bool bNewPermissionState);  // parameters 0x1
DELEGATE() void OnPerspectiveUpdated();
DELEGATE() void OnPlayerMarkerApplied(bool Value);  // parameters 0x1
DELEGATE() void OnPlayersSlept();
DELEGATE() void OnPostProcessingApplied(EPostProcessingSetting Value);  // parameters 0x1
DELEGATE() void OnPreEndProspectSession(EEndProspectSessionContext Context);  // parameters 0x1
DELEGATE() void OnPrePendingBoundsUpdateClearedSignature();
DELEGATE() void OnPreStatContainerUpdateCompleteSignature();
DELEGATE() void OnPrebuiltStructureReady(APrebuiltStructure* Structure);  // parameters 0x8
DELEGATE() void OnPrepareProspect(const FProspectInfo& PendingProspect);  // parameters 0xA0
DELEGATE() void OnProxyMeshVisibilityChanged(USceneComponent* Component, bool bIsNowVisible);  // parameters 0x9
DELEGATE() void OnQuestAbandoned(AQuest* InitialQuest);  // parameters 0x8
DELEGATE() void OnQuestComplete(AQuest* InitialQuest);  // parameters 0x8
DELEGATE() void OnQuestEnded();
DELEGATE() void OnQuestFailed(AQuest* InitialQuest);  // parameters 0x8
DELEGATE() void OnQuestManagerSet();
DELEGATE() void OnQuestStarted();
DELEGATE() void OnRTShadowsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnRTXEnabledApplied(bool Value);  // parameters 0x1
DELEGATE() void OnReceivedPlayerBestiary();
DELEGATE() void OnReceivedPlayerLoadout(const FPlayerLoadoutData& LoadoutData);  // parameters 0x3E0
DELEGATE() void OnReceivedPlayerLoadoutExtension(const TArray<FItemData>& Items, const TArray<FMountSaveData>& Mounts);  // parameters 0x20
DELEGATE() void OnReceivedReturnedItems(const TArray<FItemData>& Items);  // parameters 0x10
DELEGATE() void OnRecordFISMChanged(UFLODRecord* Record);  // parameters 0x8
DELEGATE() void OnReflectionsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnRemoteUserSettingChanged(ERemoteUserSetting UserSetting, int32 Value);  // parameters 0x8
DELEGATE() void OnReplicateWorkshopItemCompleteMC(bool bSuccess, const FItemData& Item);  // parameters 0x1F8
DELEGATE() void OnResearchWorkshopItemCompleteMC(bool bSuccess);  // parameters 0x1
DELEGATE() void OnResolutionScaleApplied(float Value);  // parameters 0x4
DELEGATE() void OnResourceClicked(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
DELEGATE() void OnResourceNetworkSubsystemTickComplete();
DELEGATE() void OnRestartRequested(FName SettingName);  // parameters 0x8
DELEGATE() void OnRetrievedActorDestroyed(UFLODActorPool* ActorPool, AActor* DestroyedActor);  // parameters 0x10
DELEGATE() void OnRoundComplete();
DELEGATE() void OnSFXVolumeApplied(float Value);  // parameters 0x4
DELEGATE() void OnSaveGameFrequencyApplied(float Value);  // parameters 0x4
DELEGATE() void OnScoreIncreased();
DELEGATE() void OnScreenHitEffectsStrengthApplied(float Value);  // parameters 0x4
DELEGATE() void OnScriptQueueFinished();
DELEGATE() void OnSearchBoxChangedEvent(const FText& Text);  // parameters 0x18
DELEGATE() void OnSearchBoxCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
DELEGATE() void OnSelectionChangedEvent(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
DELEGATE() void OnServerMessageReceived(FString Message);  // parameters 0x10
DELEGATE() void OnSettlementActiveEventChanged();
DELEGATE() void OnSettlementEventResolved(const FSettlementEventOutcomeData& Outcome);  // parameters 0xF0
DELEGATE() void OnSettlementEventStarted(const FRowHandle& EventRow);  // parameters 0x18
DELEGATE() void OnSettlementLevelUpdated(int32 NewLevel);  // parameters 0x4
DELEGATE() void OnSettlementNPCAdded(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementNPCAilmentChanged(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementNPCDeparted(const FSettlementNPC& NPC);  // parameters 0x110
DELEGATE() void OnSettlementNPCDepartureWarning(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementNPCDied(const FSettlementNPC& NPC);  // parameters 0x110
DELEGATE() void OnSettlementNPCIncapacitated(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementNPCRemoved(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementNPCTaskingUpdated(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementPendingVisitorsChanged();
DELEGATE() void OnSettlementRaidReadyToResolve(const FSettlementEventsRowHandle& EventRow);  // parameters 0x18
DELEGATE() void OnSettlementRaidResolved(float DefenseScore, float RaidStrength, float Shortfall);  // parameters 0xC
DELEGATE() void OnSettlementTaskCompleted(const FSettlementNPCTask& Task);  // parameters 0x54
DELEGATE() void OnSettlementVisitorArrived(const FSettlementVisitor& Visitor);  // parameters 0x118
DELEGATE() void OnSettlementVisitorLeft(const FSettlementVisitor& Visitor, ESettlementVisitorLeaveReason Reason);  // parameters 0x119
DELEGATE() void OnSettlementVisitorRecruited(FGuid NpcId);  // parameters 0x10
DELEGATE() void OnSettlementXPUpdated();
DELEGATE() void OnShadingApplied(EShadingSetting Value);  // parameters 0x1
DELEGATE() void OnShadowFilterMethodApplied(EShadowFilterMethodSetting Value);  // parameters 0x1
DELEGATE() void OnShadowsApplied(EShadowsSetting Value);  // parameters 0x1
DELEGATE() void OnSharpnessApplied(float Value);  // parameters 0x4
DELEGATE() void OnShowAimCrosshairApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowBloodEffectsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowDamageNumbersApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowDeployableShelterWarningApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowItemHighlightsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowLightningEffectsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowOnlyMyDamageNumbersApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowScreenshakeApplied(bool Value);  // parameters 0x1
DELEGATE() void OnShowTutorialProspectApplied(bool Value);  // parameters 0x1
DELEGATE() void OnSkipStartupMoviesApplied(bool Value);  // parameters 0x1
DELEGATE() void OnSkyboxQualityApplied(ESkyboxQualitySetting Value);  // parameters 0x1
DELEGATE() void OnSkylightShadowsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnSprintCancelReloadApplied(bool Value);  // parameters 0x1
DELEGATE() void OnStaminaDepletedSignature(UCharacterState* ActorState, float Stamina);  // parameters 0xC
DELEGATE() void OnStaminaUpdatedSignature(UCharacterState* ActorState, float Stamina);  // parameters 0xC
DELEGATE() void OnStatContainerCategoryUpdatedSignature(FStatCategoriesEnum Category);  // parameters 0x10
DELEGATE() void OnStatContainerUpdateCompleteSignature();
DELEGATE() void OnStatContainerUpdatedSignature();
DELEGATE() void OnStructureBuildComplete();
DELEGATE() void OnSuperResolutionApplied(ESuperResolutionSetting Value);  // parameters 0x1
DELEGATE() void OnTalentControllersSetup();
DELEGATE() void OnTalentsChanged();
DELEGATE() void OnTargetHit(APlayerController* Player, int32 Score);  // parameters 0xC
DELEGATE() void OnTerrainAchorStateChanged();
DELEGATE() void OnTerrainDeformationExperimentalApplied(bool Value);  // parameters 0x1
DELEGATE() void OnTessellationApplied(bool Value);  // parameters 0x1
DELEGATE() void OnTextureStreamingPoolsizeApplied(float Value);  // parameters 0x4
DELEGATE() void OnTexturesApplied(ETexturesSetting Value);  // parameters 0x1
DELEGATE() void OnTimerElapsed();
DELEGATE() void OnToggleAimApplied(bool Value);  // parameters 0x1
DELEGATE() void OnToggleCrouchApplied(bool Value);  // parameters 0x1
DELEGATE() void OnToggleSprintApplied(bool Value);  // parameters 0x1
DELEGATE() void OnTraitDataSetSignature();
DELEGATE() void OnTreePrimitivePair(UStaticMeshComponent* Old, UTreePrimitiveComponent* New);  // parameters 0x10
DELEGATE() void OnUITimeUpdated();
DELEGATE() void OnUseSimpleBuildingShadowsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnVSyncApplied(bool Value);  // parameters 0x1
DELEGATE() void OnViewDistanceApplied(EViewDistanceSetting Value);  // parameters 0x1
DELEGATE() void OnViewTraceResultsUpdatedDelegate(AIcarusPlayerController* RegisteredController);  // parameters 0x8
DELEGATE() void OnVolumetricCloudsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnVoxelLive();
DELEGATE() void OnVoxelMined(int32 MinedSpheres);  // parameters 0x4
DELEGATE() void OnWorkshopTooltipOpenAnimationsApplied(bool Value);  // parameters 0x1
DELEGATE() void OnWorldTalentManagerSet();
DELEGATE() void OtherPlayerRevivedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusPlayerCharacter* OtherPlayer);  // parameters 0x10
DELEGATE() void OutOfBoundsNotifySignature(AIcarusPlayerCharacter* Player, bool OutOfBounds);  // parameters 0x9
DELEGATE() void OxygenUpdated(int32 NewOxygen);  // parameters 0x4
DELEGATE() void PackageLoadoutResult();
DELEGATE() void PawnLevelUpdated(int32 Level);  // parameters 0x4
DELEGATE() void PickedUp(AIcarusItem* Item);  // parameters 0x8
DELEGATE() void PlayDialogue(const FDialogueRowHandle& Dialogue);  // parameters 0x18
DELEGATE() void PlayIcarusAnimNotifyDelegate(FName NotifyName);  // parameters 0x8
DELEGATE() void PlayerActionFailedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerAttackCausedAfflictionsNotifySignature(AIcarusPlayerCharacter* Player, TSet<FStatAfflictionsRowHandle> Afflictions);  // parameters 0x58
DELEGATE() void PlayerBestiaryMaxRankNotifySignature(AIcarusPlayerCharacter* Player, FBestiaryDataRowHandle BestiaryGroup);  // parameters 0x20
DELEGATE() void PlayerBestiaryProgressed(FBestiaryDataRowHandle Group, int32 NowPoints, int32 MaxPoints);  // parameters 0x20
DELEGATE() void PlayerBestiaryUnlocked(FBestiaryDataRowHandle Group, EBestiaryUnlockPopup PopType);  // parameters 0x19
DELEGATE() void PlayerBestiaryUnlockedNotifySignature(AIcarusPlayerCharacter* Player, FBestiaryDataRowHandle BestiaryGroup);  // parameters 0x20
DELEGATE() void PlayerCaughtFishNotifySignature(AIcarusPlayerCharacter* Player, FFishDataRowHandle FishType);  // parameters 0x20
DELEGATE() void PlayerCompletedDynamicMissionNotifySignature(AIcarusPlayerCharacter* Player, FFactionMissionsRowHandle FactionMission);  // parameters 0x20
DELEGATE() void PlayerCrouchUpdatedSignature(bool bIsCrouched);  // parameters 0x1
DELEGATE() void PlayerDownedNotifySignature(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
DELEGATE() void PlayerEarnedCurrencyNotifySignature(AIcarusPlayerCharacter* Player, FMetaCurrencyRowHandle Currency, int32 Amount);  // parameters 0x24
DELEGATE() void PlayerEquipmentChangedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerFishUnlocked(FFishTypeTracking Tracking, int32 PopType);  // parameters 0x2C
DELEGATE() void PlayerIgnitedBuildingPieceNotifySignature(AIcarusPlayerCharacter* Player, ABuildingBase* Building);  // parameters 0x10
DELEGATE() void PlayerInitialisationFailed(AIcarusPlayerController* Player);  // parameters 0x8
DELEGATE() void PlayerModifierUpdatedNotifySignature(AIcarusPlayerCharacter* Player, FModifierStatesRowHandle Modifier, bool WasRemoved);  // parameters 0x21
DELEGATE() void PlayerPerformedCriticalHitNotifySignature(AIcarusPlayerCharacter* Player, FVector HitLocation, FCriticalHitAreasEnum CriticalHitArea);  // parameters 0x28
DELEGATE() void PlayerPerformedStealthAttackNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerPostLoginSignature(APlayerController* Player);  // parameters 0x8
DELEGATE() void PlayerRespawnedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerRevivedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerSawMeteorsNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerTalentsUpdatedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PlayerTrackerUpdatedSignature(FPlayerTrackersRowHandle PlayerTracker, int32 OldValue, int32 NewValue);  // parameters 0x20
DELEGATE() void PlayersSleptNotifySignature();
DELEGATE() void PostDirtyNavmeshSignature();
DELEGATE() void PreDirtyNavmeshSignature();
DELEGATE() void PrepareLoadoutNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void PreparedLoadoutUpdated();
DELEGATE() void ProcessingItemCompleted(FProcessingItem Item);  // parameters 0x24
DELEGATE() void ProcessingItemUpdated(FProcessingItem Item);  // parameters 0x24
DELEGATE() void ProcessorStateUpdated(bool bIsActive);  // parameters 0x1
DELEGATE() void ProjectileFireSignature(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters);  // parameters 0x28
DELEGATE() void ProjectileFiredNotifySignature(AIcarusPlayerCharacter* Player, AIcarusItem* Projectile);  // parameters 0x10
DELEGATE() void ProjectileHitSignature(FHitResult Hit);  // parameters 0x88
DELEGATE() void ProspectForecastUpdated(FProspectForecastRowHandle NewForecast);  // parameters 0x18
DELEGATE() void ProspectLocationChanged(EProspectLocation NewProspectLocation);  // parameters 0x1
DELEGATE() void ProspectMissionCompleteNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void ProspectTalentsUpdatedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void ProspectsUpdated();
DELEGATE() void QueryFinishedDelegate(const TArray<FVector>& EQSResults);  // parameters 0x10
DELEGATE() void QuestEndedNotifySignature(AQuest* Quest);  // parameters 0x8
DELEGATE() void QuestStartedNotifySignature(AQuest* Quest);  // parameters 0x8
DELEGATE() void RadiationUpdated(int32 NewRadiation);  // parameters 0x4
DELEGATE() void RagdollSettledSignature();
DELEGATE() void RandomStreamUpdatedSignature();
DELEGATE() void ReplicatedStackMultipliersUpdatedSignature();
DELEGATE() void RepopulateDynamicQuestsSignature();
DELEGATE() void RequestPlayerPersonaResult(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
DELEGATE() void RequestResupplyNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void ResourceNetworkUpdated(FIcarusResourcesEnum ResourceType, bool bConnected);  // parameters 0x11
DELEGATE() void ResourceTypeUpdated();
DELEGATE() void RespawnPodNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void RocketAssembled();
DELEGATE() void ScriptedEventFinishedSignature(EEventEndReason EndReason);  // parameters 0x1
DELEGATE() void SearchBoxReply(const FKeyEvent& KeyEvent);  // parameters 0x38
DELEGATE() void SeedInitialisedSignature(int32 Seed);  // parameters 0x4
DELEGATE() void SeedPlantedNotifySignature(AIcarusPlayerCharacter* Player, FFarmingSeedsRowHandle Seed);  // parameters 0x20
DELEGATE() void SeedUpdated(UCultivation* Cultivation, FFarmingSeedsRowHandle FarmingSeed);  // parameters 0x20
DELEGATE() void ServerFriendsUpdated(AIcarusPlayerController* RegisteredController);  // parameters 0x8
DELEGATE() void ServerProspectListChanged();
DELEGATE() void ServerProspectListResponse(const TArray<FAssociatedProspectInfo>& ProspectList);  // parameters 0x10
DELEGATE() void ServerProspectListResponseMulti(const TArray<FAssociatedProspectInfo>& ProspectList);  // parameters 0x10
DELEGATE() void SessionFlagsUpdatedSignature();
DELEGATE() void SessionInfoUpdatedSignature();
DELEGATE() void SettleProspectResult(bool Success, const FProspectInfo& ProspectInfo);  // parameters 0xA8
DELEGATE() void SetupCompleteSignature();
DELEGATE() void ShelterUpdated(float NewShelter);  // parameters 0x4
DELEGATE() void ShieldResistNotifySignature(AIcarusPlayerCharacter* Player, FIcarusDamagePacket LastDamagePacket);  // parameters 0xE0
DELEGATE() void SledgehammerBreakNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void SlotCountChange(UInventory* Inventory);  // parameters 0x8
DELEGATE() void SlotsUpdated();
DELEGATE() void SpawnCompleteSignature(AActor* SpawnedAI);  // parameters 0x8
DELEGATE() void SpawnedBossKilledSignature(AWorldBossSpawner* Spawner);  // parameters 0x8
DELEGATE() void SpawnedBossWantsCleanupSignature(AWorldBossSpawner* Spawner);  // parameters 0x8
DELEGATE() void SpawnerBecomeIrrelevantSignature();
DELEGATE() void SpawnerBecomeRelevantSignature();
DELEGATE() void SpawnerWorldTransformUpdatedSignature(AWorldBossSpawner* Spawner);  // parameters 0x8
DELEGATE() void SprintUpdatedSignature(bool Sprinting);  // parameters 0x1
DELEGATE() void StaminaDepletedDuringActionSignature(UActorState* ActorState, int32 ActionUID);  // parameters 0xC
DELEGATE() void StatChanceRollSuccessNotifySignature(AIcarusPlayerCharacter* Player, FStatsRowHandle Stat);  // parameters 0x20
DELEGATE() void StomachContentsUpdated();
DELEGATE() void StoredUnitsEmpty();
DELEGATE() void StoredUnitsUpdated();
DELEGATE() void StruckByLightningNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void SubtitleCallbackSignature(const FSubtitle& Subtitle);  // parameters 0x38
DELEGATE() void SuitSlotUpdatedNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void SyncAccountFlagsResult(bool Success, const TArray<int32>& Flags);  // parameters 0x18
DELEGATE() void SyncAccountTalentsResult(bool Success, const TArray<FBackendTalent>& BackendTalents);  // parameters 0x18
DELEGATE() void SyncCharacterTalentsResult(bool Success, const TArray<FBackendTalent>& BackendTalents);  // parameters 0x18
DELEGATE() void TalentUnlocked(FTalentsRowHandle Talent, int32 Rank);  // parameters 0x1C
DELEGATE() void TamedCreatureClaimedNotifySignature(AIcarusPlayerCharacter* Player, AIcarusMountCharacter* TamedCreature);  // parameters 0x10
DELEGATE() void TamedCreatureLevelUpdatedNotifySignature(AIcarusMountCharacter* Creature, int32 CurrentLevel);  // parameters 0xC
DELEGATE() void TamedCreatureSpawnedFromPodNotifySignature(AIcarusMountCharacter* Creature);  // parameters 0x8
DELEGATE() void TeleportInteracted();
DELEGATE() void TeleportStateChangedEvent();
DELEGATE() void TemperatureUpdated(int32 NewTemperature);  // parameters 0x4
DELEGATE() void TestCompleteSignature();
DELEGATE() void ThermalComponentsUpdatedSignature();
DELEGATE() void ThreadStateChanged(int32 Flags);  // parameters 0x4
DELEGATE() void ThumperActivatedNotifySignature(ADeployable* Thumper);  // parameters 0x8
DELEGATE() void ThumperEventCompletedNotifySignature(ADeployable* Thumper, int32 OresRegenerated, int32 VoxelsRegenerated);  // parameters 0x10
DELEGATE() void TimeOfDayDayChangedSignature(int32 NewDay);  // parameters 0x4
DELEGATE() void TimeOfDayHourChangedSignature(int32 NewHour);  // parameters 0x4
DELEGATE() void TimeOfDayMinuteChangedSignature(int32 NewMinute);  // parameters 0x4
DELEGATE() void TimeSurvivedNotifySignature(AIcarusPlayerCharacter* Player, int32 SecondsSurvived, EProspectLocation Biome);  // parameters 0xD
DELEGATE() void ToggleThirdPersonSignature(bool bIsThirdPerson);  // parameters 0x1
DELEGATE() void TrackDialoguePlayNotifySignature(FDialogueRowHandle DialogRow);  // parameters 0x18
DELEGATE() void TrackedStatisticsUpdateResult(bool Success);  // parameters 0x1
DELEGATE() void TraitAnimNotifySignature(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
DELEGATE() void TreeFelledNotifySignature(AIcarusPlayerCharacter* Player);  // parameters 0x8
DELEGATE() void TreeResourceCollectedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void TriggerRange();
DELEGATE() void UpdateCharacterProgressResult(bool Success);  // parameters 0x1
DELEGATE() void UpdateCharacterProspectLocationResult(bool Success);  // parameters 0x1
DELEGATE() void UsedFromMenuSignature(AActor* InvokingActor);  // parameters 0x8
DELEGATE() void VoxelCompletedNotifySignature(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
DELEGATE() void VoxelHitNotifySignature(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
DELEGATE() void VoxelResourceMinedNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void WaterSourceInteractNotifySignature(AIcarusPlayerCharacter* Player, AIcarusActor* WaterSource);  // parameters 0x10
DELEGATE() void WaterUpdated(int32 NewWater);  // parameters 0x4
DELEGATE() void WeatherActionComplete(UIcarusWeatherAction* WeatherAction);  // parameters 0x8
DELEGATE() void WeatherEventCompletedSignature(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event);  // parameters 0x30
DELEGATE() void WeatherEventStartedSignature(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event);  // parameters 0x30
DELEGATE() void WeatherGameplayUpdated();
DELEGATE() void WeatherUpdated();
DELEGATE() void WeatherVisualUpdated();
DELEGATE() void WeightUpdated(int32 Weight);  // parameters 0x4
DELEGATE() void WorkshopPurchaseNotifySignature(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
DELEGATE() void WorkshopPurchaseResult(bool Success);  // parameters 0x1
DELEGATE() void WorkshopRepairResult(bool Success);  // parameters 0x1
DELEGATE() void WorkshopReplicationResult(bool Success, const FMetaItem& Item);  // parameters 0x48
DELEGATE() void WorkshopResearchResult(bool Success);  // parameters 0x1
DELEGATE() void WorldBossKilledSignature(AWorldBossSpawner* Spawner);  // parameters 0x8
DELEGATE() void WorldPickupSignature(UItemableComponent* Interactable, AActor* Instigator, const FHitResult& HitResult);  // parameters 0x98
DELEGATE() void WorldStatsUpdatedSignature();
