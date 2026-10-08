// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Formation_Melt_Progress.BPQ_OLY_Omni_Research_2_Formation_Melt_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4D4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Formation_Melt_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTime;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxHeatMultiplier;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool NearbyPlayers;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_FrozenFormation_C* IceFormation;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EventTime;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_EventTime;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnedWorms;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxWorms;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BossAlive;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GoTime;  // 0x0499, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle Dialogue_Pool;  // 0x049C, size 0x18, named "Dialogue Pool"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialoguePoolRowHandle Dialogue_Pool_0;  // 0x04B4, size 0x18, named "Dialogue Pool_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberOfPlayers;  // 0x04CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WormSpawnTime;  // 0x04D0, size 0x4

    UFUNCTION(BlueprintCallable) void AiKilled(AActor* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AiSpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CustomEvent_2(AActor* Spawner);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Formation_Melt_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_AI_Agression_Location(AActor* Origin, AActor*& Location);  // parameters 0x10, named "Get AI Agression Location"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHeatMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxHeat();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetNearbyHeat();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnAI(FEpicCreaturesRowHandle EpicCreature, FAISetupRowHandle AIToSpawn, FTransform SpawnTransform);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SpawnBoss(FEpicCreaturesRowHandle EpicCreature, FAISetupRowHandle AIToSpawn, FTransform SpawnTransform);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void TheCalmBeforeTheStorm();
    UFUNCTION(BlueprintCallable) void TriggerSpawn();
    UFUNCTION(BlueprintCallable) void WormDeath(UActorState* ActorState);  // parameters 0x8
};
