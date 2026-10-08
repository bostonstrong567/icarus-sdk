// /Game/BP/Quests/GreatHunts/Ape/E2/BPQ_GH_Ape_E2_Track_Trail2.BPQ_GH_Ape_E2_Track_Trail2_C
// Derives from: ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4F4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_E2_Track_Trail2_C : public ABPQ_Common_MapIconOnArrival_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawner;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x04A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x04C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x04C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle Epic;  // 0x04C4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Spawned_AI;  // 0x04E0, size 0x10, named "Spawned AI"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseCount;  // 0x04F0, size 0x4

    UFUNCTION(BlueprintCallable) void AISpawnedHandler(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_E2_Track_Trail2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureKilledNotify_Event_0(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void PlayerEntered(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAI();
};
