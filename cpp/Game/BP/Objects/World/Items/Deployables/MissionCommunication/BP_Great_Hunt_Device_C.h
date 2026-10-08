// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/BP_Great_Hunt_Device.BP_Great_Hunt_Device_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Great_Hunt_Device_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioLoop;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_3;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_4;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_1;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_2;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* GreatHunt;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* WorldBoss_5;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0788, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x07A0, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBossSpawnsUpdated BossSpawnsUpdated;  // 0x07B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UWidgetComponent*> ScreenWidgets;  // 0x07C8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FBossRespawnData> BossData;  // 0x07D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentIndex;  // 0x07E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FillerBosses;  // 0x07EC, size 0x4

    UFUNCTION(BlueprintCallable) void BossSpawnsUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BossUpdate();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Great_Hunt_Device(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetBossInfo(FWorldBossesRowHandle Boss, bool& bFound, int32& Spawned, int32& Total, float& TimeUntillRespawn);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GrantBestiaryProgress(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_BossData();
    UFUNCTION(BlueprintCallable) void PrepareBossData();
    UFUNCTION(BlueprintCallable) void Radio_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SelectWidgetsForProspect();
    UFUNCTION(BlueprintCallable) void SetupInWorldBossWidget(UWidgetComponent* Target, FWorldBossesRowHandle Boss);  // parameters 0x20
};
