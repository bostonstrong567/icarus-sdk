// /Game/BP/Player/BP_NetworkProxyComponent.BP_NetworkProxyComponent_C
// Derives from: UNetworkProxyComponent > UActorComponent > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_NetworkProxyComponent_C : public UNetworkProxyComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* SelectedFLODTile;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFLODRecord* SelectedFLODRecord_1;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFLODRecord* SelectedFLODRecord_2;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectedFLODTileChanged SelectedFLODTileChanged;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DisabledFires;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData UnownedItem;  // 0x00F0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnownedItemIndex;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FItemsToReturnValidated ItemsToReturnValidated;  // 0x02E8, size 0x10

    UFUNCTION(BlueprintCallable, Server, Reliable) void BringPlayer(APlayerState* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheatCycleBiome();
    UFUNCTION(BlueprintCallable, Server) void CheatDealDamage(EIcarusDamageType Type, int32 Damage, AIcarusPlayerCharacter* Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatForceAdmin(ABP_IcarusPlayerControllerSurvival_C* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatGetAccountFlag(const FAccountFlagsRowHandle& Flag);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatRestoreTrees(float Radius);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSetAIRelationship(FName RowName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSetAccountFlag(const FAccountFlagsRowHandle& Flag, bool State);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server) void CheatSetMinimumTimeStep(float StepSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSetTime(float TimeOfDay);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSetTimeScale(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSkipQuestStep();
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSpawnAI(FAISetupRowHandle AISetupRow, int32 Lvl, FEpicCreaturesRowHandle Epic);  // parameters 0x34
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSpawnAIAtCursor(FAISetupRowHandle AISetupRow, int32 Level);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server) void CheatSpawnMount(FMountsRowHandle Mount, int32 Variation);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_AddInventories(int32 NumInventories);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_AddLivingItemProgress(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_AddPlayerRelativeLocation(FVector DeltaLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_AddPlayerRelativeRotation(FRotator NewWorldRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_BestiaryFishCatches(FFishDataRowHandle Fish, int32 NumCatches);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_BlockDynanicSpawns(FBiomesRowHandle Biome, bool Block);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ChangeBestiryKills(FBestiaryDataRowHandle BestiaryGroup, int32 NumPoints);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ChangeFishCatches(FFishDataRowHandle Fish, int32 NumCatches);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ClearEmptyInventories();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ClearWeather();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_CompleteAllLivingItemChallenges();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_CompleteLivingItemChallenge();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_CompleteMission();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_DamageAllAI(AController* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_DamageArmor(int32 Amount, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_DestroyAllAI();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_DestroyAllWorldBosses();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_DisableFires(bool State);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ExhaustAnExoticDeposit();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ExhaustAnExoticPlant();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODAddInstance(UFLODRecord* FLODRecord, FTransform Transform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void Cheat_FLODDebugInstances(AFLODTile* FLODTile, bool State);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Cheat_FLODDebugInstancesAdv(AFLODTile* FLODTile, bool State);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODDestroyAll(AFLODTile* FLODTile, UFLODRecord* FLODRecord);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODDestroyInstances(UFLODRecord* FLODRecord, int32 InstanceIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODRestoreAll(AFLODTile* FLODTile, UFLODRecord* FLODRecord);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODRestoreInstance(UFLODRecord* FLODRecord, int32 InstanceIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Cheat_FLODSelectRecord_1(UFLODRecord* FLODRecord);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Cheat_FLODSelectRecord_2(UFLODRecord* FLODRecord);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Cheat_FLODSelectTile(AFLODTile* FLODTile);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODSwapInstance(UFLODRecord* FLODRecord1, UFLODRecord* FLODRecord2, AFLODTile* FLODTile, int32 InstanceIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODTileDestroyAll(AFLODTile* FLODTile);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FLODTileRestoreAll(AFLODTile* FLODTile);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FinishScan();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ForceSpawnSettlementVisitor();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FreezeWorldComposition(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_GenerateWorldBosses(FProspectListEnum ForProspect);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_GetCharacterFlag(const FCharacterFlagsRowHandle& Flag);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_GrowAllCrops();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_GrowCrop(UFarmableComponent* Farmable);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_IcarusSlomo(float Dilation);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_KillPlayer();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_MakePregnant();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_MaxAnEyzmeCompletion();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_MineExoticVoxel();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_MineVoxels(FVector WorldLocation, int32 Radius);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ModifySessionTime(int32 Seconds_To_Add);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_PlayDialogue(FDialogueRowHandle Dialogue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Cheat_RandomiseMetaSpawns();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_RandomiseSeed();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_RegenerateVoxels(FVector WorldLocation, int32 Radius);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ReplenishExotics();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_RerollQuests();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ResetBossCooldowns();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ResetWorldBosses();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ReviveFriend(APlayerState* Player_State);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetBestiaryProgress(FBestiaryDataRowHandle BestiaryGroup, int32 NumPoints);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetCharacterFlag(const FCharacterFlagsRowHandle& Flag, bool State);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetDurabilityOnFocusedItem(int32 Durability);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetFactionMission(FFactionMissionsRowHandle Mission, FProspectListRowHandle ProspectRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server) void Cheat_SetFillableOnFocusItem(FIcarusResourcesEnum Resource, int32 Units);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetGOAPMotivationValue(FGOAPMotivationsEnum Motivation, int32 NewValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetGlobalEnvTemp(int32 NewTemp);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetLivingItemUpgrade(int32 Slot, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetMountSurvivalResource(ESurvivalConsumableType Resource, int32 NewValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetPlayerLocation(FVector NewWorldLocation, bool ProjectToNav);  // parameters 0xD
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetPlayerRotation(FRotator NewWorldRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetProspectDifficulty(const EMissionDifficulty& NewDifficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetVoice(AIcarusPlayerCharacter* Player, FCharacterVoicesRowHandle Voice);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server) void Cheat_Settlement_AddExperience(int32 Experiance);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ShowProspectInfo();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ShowWorldStats();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SpawnActorFromClass(TSubclassOf<AActor> ClassToSpawn, FTransform SpawnTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SpawnWorldBoss(FWorldBossesEnum WorldBoss);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SpectatorCamrea();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_StartDynamicQuest(FDynamicQuestsEnum Quest);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_StartScriptedEvent(FScriptedEventsRowHandle ScriptedEvent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_StopDialogue();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ToggleFlight(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast) void Cheat_ToggleWeather();
    UFUNCTION(BlueprintCallable, Server) void Cheat_ToggleWeatherDebug(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_TriggerWeatherEvent(FBiomesRowHandle Biome, FWeatherEventsRowHandle Event);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_UpdateWeatherForecast(FProspectForecastRowHandle ProspectForecast);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CheatingNotification();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_OnItemsToReturnValidated(const TArray<FLaunchItemReturnInfo>& OwnedItems, const TArray<FItemData>& NonReturnableItems);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_ShowConfirmationMessage(FText Description, FText OptionA);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_ShowMessage(bool Error, FText Message, float LifeTimeOverride);  // parameters 0x24
    UFUNCTION(BlueprintCallable, Server, Reliable) void DamageActor(AActor* InActor, AController* InInstigator, float InDamage);  // parameters 0x14
    UFUNCTION() void ExecuteUbergraph_BP_NetworkProxyComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetControllerFromState(APlayerState* PlayerState, APlayerController*& Controller);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPlayerController(AIcarusPlayerController*& Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void GotoActor(AActor* Actor, FVector Offset);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable) void GotoPlayer(APlayerState* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ItemsToReturnValidated__DelegateSignature(const TArray<FLaunchItemReturnInfo>& OwnedItems, const TArray<FItemData>& NonReturnableItems);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnConfirmed();
    UFUNCTION(BlueprintCallable) void OnFail_AF17C8E247D30AF201771A9111377587(const FResResetCharacter& Response);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnRep_DisabledFire();
    UFUNCTION(BlueprintCallable) void OnSuccess_AF17C8E247D30AF201771A9111377587(const FResResetCharacter& Response);  // parameters 0xD8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_AddModifier(AIcarusPlayerCharacter* Player, FModifier ModifierRow);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ArcadeMachineEndAction(ABP_Colony_Arcade_Machine_C* ArcadeMachineActor, FArcadeMachineScore ScoreResult);  // parameters 0x38
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ArmourStandBackpackToggle(ADeployable* ArmourStand, bool SwapBackpacks);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ArmourStandSwap(ADeployable* ArmourStand, AIcarusCharacter* Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_CatchFishCheat(AIcarusPlayerController* Controller, AIcarusPlayerCharacter* Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_CatchFishInZoneCheat(AIcarusPlayerController* Controller, AIcarusPlayerCharacter* Character, FFishSpawnZonesRowHandle Zone);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Server) void Proxy_Cheat_AddItemSet(AIcarusPlayerController* Controller, FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Cheat_AddRandomItems(AIcarusPlayerController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ClaimSettlement(AActor* StarterActor, FString SettlementName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ClientDropshipReady(AIcarusRocket* Dropship);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_DeconstructBuilding(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_DestroyInventoryStack(UInventory* Inventory, int32 Location, AIcarusPlayerController* Player, bool bRefundPartCost);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_DestroyMountActors(const TArray<AIcarusMountCharacter*>& Mounts);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server) void Proxy_DropAllInventoryStacks(UInventory* Inventory, int32 Location, AIcarusPlayerCharacter* FromPlayer);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_DropInventoryStack(UInventory* Inventory, int32 Location, AIcarusPlayerCharacter* FromPlayer);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_GenericActionInt(AActor* IcarusActor, int32 Data);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_IcarusActorGenericAction(AActor* IcarusActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_IcarusActorGenericActionWithCharacter(AActor* IcarusActor, AIcarusPlayerCharacter* InteractingCharacter);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_MakeCreaturesGiveBirth();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_MakeCreaturesPregnant();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Processing__AddProcessingRecipe(UProcessingComponent* Processing, FProcessorRecipesRowHandle Recipe, UInventory* PlayerInventory, UInventory* Quickbar, AIcarusPlayerCharacter* Player, int32 Multiplier);  // parameters 0x3C, named "Proxy_Processing_ AddProcessingRecipe"
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Processing_RemoveQueueElement(UProcessingComponent* Processing, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Processing_StartProcessing(UProcessingComponent* Processing);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Processing_Stop(UProcessingComponent* Processing, AIcarusPlayerCharacter* Leaving_Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Processing_StopAndClear(UProcessingComponent* Processing, AIcarusPlayerCharacter* Leaving_Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_RemoveModifier(AIcarusPlayerCharacter* Player, FModifierStatesRowHandle ModifierStateRow);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_RemoveModifierPawn(APawn* Pawn, FModifierStatesRowHandle ModifierStateRow);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server) void Proxy_RequestMissionResupply(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ResolveSettlementEvent(ASettlement* Settlement, int32 DecisionIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetFocusedCreature(AIcarusMountCharacter* NewFocusedCreature);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetGeneratorActive(UGeneratorComponent* GeneratorComponent, bool InActive, bool AlsoChangedDevice);  // parameters 0xA
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetMountCombatState(AIcarusMountCharacter* Mount, EMountCombatBehaviourState NewState);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetMountConsumptionState(AIcarusMountCharacter* Mount, EMountConsumptionBehaviourState NewState);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetMountGrazingState(AIcarusMountCharacter* Mount, EMountGrazingBehaviourState NewState);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetMountMovementState(AIcarusMountCharacter* Mount, EMountMovementBehaviourState NewState);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetMountName(AIcarusMountCharacter* Mount, FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetNearbyCreaturesCombatBehaviour(EMountCombatBehaviourState NewCombatBehaviour, int32 NearbyRadius);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetNearbyCreaturesMovementBehaviour(EMountMovementBehaviourState NewMovementBehaviour, int32 NearbyRadius);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetResourceComponentState(UResourceComponent* Component, FIcarusResourcesEnum ResourceType, bool State);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetSettlerRole(ASettlement* Settlement, const FGuid& NPCId, FSettlementNPCRolesRowHandle NewRole);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SettlementRespontToVisitor(ASettlement* Settlement, const FGuid& VisitorId, bool Accept);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SplitInventoryStack(UInventory* Inventory, int32 Location, AIcarusPlayerCharacter* FromPlayer);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_TriggerAffliction(AIcarusPlayerCharacter* Player, FAfflictionChanceRowHandle AfflictionChance);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_TriggerSettlementEvent(FSettlementEventsRowHandle NewEvent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UnclaimMount(AIcarusMountCharacter* MountCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UnloadMountActors(const TArray<AIcarusMountCharacter*>& Mounts);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateArmourStand(int32 NewPoseIndex, ADeployable* ArmourStand);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateBeaconStyle(FLinearColor Color, int32 IconIndex, ADeployable* BeaconDeployable, FString BeaconName, FString BeaconOwner, int32 MaxDisplayDistance, bool OwnerOnlySee);  // parameters 0x45
    UFUNCTION(BlueprintCallable, Server) void Proxy_UpdateBowlColor(ADeployable* Bowl, int32 Colour);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateCustomGameSettings(const TArray<FCustomGameSetting>& NewSettings);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateInteractableWhitelist(UTameInteractableComponent* TameInteractable, const TArray<int32>& AllowedActorUIDs, bool WhitelistOnly);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdatePainting(ADeployable* PaintingDeployable, FPaintingsRowHandle PaintingRowHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateRepairBench(ADeployable* RepairBench, float Threshold);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateSignText(FText Text, FLinearColor Color, ADeployable* SignDeployable, FItemableRowHandle IconRowHandle);  // parameters 0x48
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ValidateItemsToReturn();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ResetCharacter(AIcarusPlayerController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SelectedFLODTileChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RetrieveRecordersFromCave(ABaseLevelTeleport* TeleportActor, FVector TargetLocation);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ToggleAISpawning();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_Toggle_Boss_Dens();
    UFUNCTION(BlueprintCallable, Server, Reliable) void SetCheatNotifications(bool State);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void SetDeviceResourceConnectionPriority(UResourceComponent* ResourceComponent, FIcarusResourcesEnum ConnectionType, bool Priority);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ShowStillLoadingMessage();
    UFUNCTION(BlueprintCallable, Server, Reliable) void TurnDeviceOnOff(UResourceComponent* ResourceComponent, bool On);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server) void UpdateCairn(ABP_Stone_Cairn_C* Cairn, FText Title, FText Text);  // parameters 0x38
    UFUNCTION(BlueprintCallable, Server, Reliable) void UpdateCosmeticArmourOverride(FItemsStaticRowHandle Item, EArmourType ArmourType);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void UpdateItemOwnerWithinInventory(FItemData Item, AIcarusPlayerController* NewOwner, UInventory* TargetInventory);  // parameters 0x200
};
