// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x898, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Communication_Upgradeable_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight8;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight7;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight6;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight5;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight4;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight3;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight1;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* GH;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* T4_SKMesh;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* T4;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* T2_SKMesh;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* T3;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* T2;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* GH_SKMesh;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* GreatHunt;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_3;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_4;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_1;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_2;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_5;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* CommunicatorAudio;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Seed;  // 0x0808, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FDynamicQuestsRowHandle> AvailableQuests;  // 0x0810, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<EDynamicQuestDifficulty> Difficulty;  // 0x0820, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) EOnProspectAvailability UpgradeStatus;  // 0x0830, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpgradeStatusUpdated UpgradeStatusUpdated;  // 0x0838, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool EnergyIsActive;  // 0x0848, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UWidgetComponent*> ScreenWidgets;  // 0x0850, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FillerBosses;  // 0x0860, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FBossRespawnData> BossData;  // 0x0868, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBossSpawnsUpdated BossSpawnsUpdated;  // 0x0878, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_GH_DenEntrance_C*> CachedDens;  // 0x0888, size 0x10

    UFUNCTION(BlueprintCallable) void BossSpawnsUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BossUpdate();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Deployable_RadioInteract(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Communication_Upgradeable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetBossInfo(FWorldBossesRowHandle Boss, FGreatHuntCreatureInfoRowHandle CreatureInfo, bool& bFound, int32& Spawned, int32& Total, float& TimeUntillRespawn);  // parameters 0x40
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION() void OnEnergyStateUpdated(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_BossData();
    UFUNCTION(BlueprintCallable) void OnRep_UpgradeStatus();
    UFUNCTION(BlueprintCallable) void PopulateQuests(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PrepareBossData();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RollQuest(int32 Seed, FDynamicQuestsRowHandle& Quest);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SelectQuest(FDynamicQuestsRowHandle Quest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SelectWidgetsForProspect();
    UFUNCTION(BlueprintCallable) void SetupInWorldBossWidget(UWidgetComponent* Target, FWorldBossesRowHandle Boss);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TriggerBossEvent();
    UFUNCTION(BlueprintCallable) void UpdateCommunicatorUpgradeAudio();
    UFUNCTION(BlueprintCallable) void UpdateDynamicQuests();
    UFUNCTION(BlueprintCallable) void UpdateSeed();
    UFUNCTION(BlueprintCallable) void UpgradeStatusUpdated__DelegateSignature(EOnProspectAvailability UpgradeStatus);  // parameters 0x1
};
