// /Game/BP/Quests/Elysium/Story/Story2/BPQ_ELY_Story_2_Search_Station1.BPQ_ELY_Story_2_Search_Station1_C
// Derives from: ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_2_Search_Station1_C : public ABPQ_Common_MapIconOnArrival_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedAI;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TrackedCreature;  // 0x04A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x04C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_2_Search_Station1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAISpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureKilled(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayerEntered(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
