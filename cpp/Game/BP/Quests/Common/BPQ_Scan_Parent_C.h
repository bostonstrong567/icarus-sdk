// /Game/BP/Quests/Common/BPQ_Scan_Parent.BPQ_Scan_Parent_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Scan_Parent_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HostileTargetLocationKey;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnZOffset;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle CreatureToSpawn;  // 0x0484, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuest* Quest;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UObject> SpawnClass;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> SpawnedAI;  // 0x04B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle MovementSpeedUpdateTimer;  // 0x04C0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Scan_Parent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnAnimalSpawned(AIcarusNPCGOAPCharacter* Animal);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintCallable) void TriggerAnimalSpawnEvent(AQuest* Quest, FAISetupRowHandle Creature, int32 Count);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void UpdateSpawnedAIMovementSpeed();
};
