// /Game/BP/Player/BP_NetworkProxyComponentSurvival.BP_NetworkProxyComponentSurvival_C
// Derives from: UBP_NetworkProxyComponent_C > UNetworkProxyComponent > UActorComponent > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_NetworkProxyComponentSurvival_C : public UBP_NetworkProxyComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item_Template;  // 0x0300, size 0x1F0, named "Item Template"

    UFUNCTION(BlueprintCallable, Server, Reliable) void BringPlayer(APlayerState* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheatCycleBiome();
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatForceAdmin(ABP_IcarusPlayerControllerSurvival_C* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatRestoreTrees(float Radius);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSetAIRelationship(FName RowName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSpawnAI(FAISetupRowHandle AISetupRow, int32 Lvl, FEpicCreaturesRowHandle Epic);  // parameters 0x34
    UFUNCTION(BlueprintCallable, Server, Reliable) void CheatSpawnAIAtCursor(FAISetupRowHandle AISetupRow, int32 Level);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server) void CheatSpawnMount(FMountsRowHandle Mount, int32 Variation);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_AddPlayerRelativeLocation(FVector DeltaLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_AddPlayerRelativeRotation(FRotator NewWorldRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_BestiaryFishCatches(FFishDataRowHandle Fish, int32 NumCatches);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_BlockDynanicSpawns(FBiomesRowHandle Biome, bool Block);  // parameters 0x19
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ChangeBestiryKills(FBestiaryDataRowHandle BestiaryGroup, int32 NumPoints);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ChangeFishCatches(FFishDataRowHandle Fish, int32 NumCatches);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ClearWeather();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_DisableFires(bool State);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ExhaustAnExoticDeposit();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ExhaustAnExoticPlant();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_FinishScan();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_GrowAllCrops();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_GrowCrop(UFarmableComponent* Farmable);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_IcarusSlomo(float Dilation);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_MaxAnEyzmeCompletion();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_MineExoticVoxel();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ModifySessionTime(int32 Seconds_To_Add);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Cheat_RandomiseMetaSpawns();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ReplenishExotics();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ReviveFriend(APlayerState* Player_State);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetBestiaryProgress(FBestiaryDataRowHandle BestiaryGroup, int32 NumPoints);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetDurabilityOnFocusedItem(int32 Durability);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server) void Cheat_SetFillableOnFocusItem(FIcarusResourcesEnum Resource, int32 Units);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetGlobalEnvTemp(int32 NewTemp);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetPlayerLocation(FVector NewWorldLocation, bool ProjectToNav);  // parameters 0xD
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SetPlayerRotation(FRotator NewWorldRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_SpectatorCamrea();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_ToggleFlight(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast) void Cheat_ToggleWeather();
    UFUNCTION(BlueprintCallable, Server) void Cheat_ToggleWeatherDebug(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_TriggerWeatherEvent(FBiomesRowHandle Biome, FWeatherEventsRowHandle Event);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server, Reliable) void Cheat_UpdateWeatherForecast(FProspectForecastRowHandle ProspectForecast);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Even_Cheat_Clear_Open_World_Mission_History();  // named "Even Cheat Clear Open World Mission History"
    UFUNCTION(BlueprintCallable, Server, Reliable) void Event_Cheat_Clear_Specific_Mission_History(FFactionMissionsRowHandle MissionsRowHandle);  // parameters 0x18, named "Event Cheat Clear Specific Mission History"
    UFUNCTION() void ExecuteUbergraph_BP_NetworkProxyComponentSurvival(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void GotoActor(AActor* Actor, FVector Offset);  // parameters 0x14
    UFUNCTION(BlueprintCallable, Server, Reliable) void GotoPlayer(APlayerState* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ArmourStandBackpackToggle(ADeployable* ArmourStand, bool SwapBackpacks);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ArmourStandSwap(ADeployable* ArmourStand, AIcarusCharacter* Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_AssessGenetics(AActor* Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_CancelQuest();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_CatchFishCheat(AIcarusPlayerController* Controller, AIcarusPlayerCharacter* Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_CatchFishInZoneCheat(AIcarusPlayerController* Controller, AIcarusPlayerCharacter* Character, FFishSpawnZonesRowHandle Zone);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Server) void Proxy_Cheat_AddItemSet(AIcarusPlayerController* Controller, FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_Cheat_AddRandomItems(AIcarusPlayerController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server) void Proxy_CheckGraveStoneLinkageServerSide(ABP_Gravestone_C* GravestoneToCheck, UBP_Interactable_Revive_Grave_C* Interactable);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ClaimSettlement(AActor* StarterActor, FString SettlementName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_ClientDropshipReady(AIcarusRocket* Dropship);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_MakeCreaturesGiveBirth();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SelectDynamicFactionMission(const FFactionMissionsRowHandle& Mission, const FProspectListRowHandle& MissionProspect);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SelectDynamicQuest(FDynamicQuestsRowHandle DynamicQuest, ABP_Mission_Communication_T2_C* Communicator);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SelectDynamicQuestReward(FDynamicQuestRewardsRowHandle QuestRewardRow, ABP_Reward_Transport_Pod_Selection_C* RewardPod);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SelectQuestUpgradable(FDynamicQuestsRowHandle DynamicQuest, ABP_Mission_Communication_Upgradeable_C* Communicator);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server) void Proxy_SelectedElyReward(ABP_Mission_NPC_Reward_C* NPC, FDynamicQuestRewardsRowHandle Reward);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_SetFocusedCreature(AIcarusMountCharacter* NewFocusedCreature);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateArmourStand(int32 NewPoseIndex, ADeployable* ArmourStand);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateBeaconStyle(FLinearColor Color, int32 IconIndex, ADeployable* BeaconDeployable, FString BeaconName, FString BeaconOwner, int32 MaxDisplayDistance, bool OwnerOnlySee);  // parameters 0x45
    UFUNCTION(BlueprintCallable, Server) void Proxy_UpdateBowlColor(ADeployable* Bowl, int32 Colour);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdatePainting(ADeployable* PaintingDeployable, FPaintingsRowHandle PaintingRowHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateRepairBench(ADeployable* RepairBench, float Threshold);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Proxy_UpdateSignText(FText Text, FLinearColor Color, ADeployable* SignDeployable, FItemableRowHandle IconRowHandle);  // parameters 0x48
    UFUNCTION(BlueprintCallable, Server) void SERVER_RefillInteract(UBP_Interactable_Refill_WaterSource_C* RefillInteractable);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_WaterInteract(UBP_Interactable_Drink_WaterSource_C* WaterInteractable);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ToggleAISpawning();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_Toggle_Boss_Dens();
    UFUNCTION(BlueprintCallable, Client) void SetCanInteractOverride(bool GraveFound, UBP_Interactable_Revive_Grave_C* interactable);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ToggleBossDens();
};
