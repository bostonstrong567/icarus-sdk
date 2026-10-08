// /Game/BP/Quests/Elysium/SideQuests/Lifeline/BPQ_ELY_SQ_Lifeline_Recover_Tucker.BPQ_ELY_SQ_Lifeline_Recover_Tucker_C
// Derives from: ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C > ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Lifeline_Recover_Tucker_C : public ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFiredFlare;  // 0x04A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedNPCs;  // 0x04B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> NPCSpawnLocations;  // 0x04C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnemyIsHit;  // 0x04D0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Lifeline_Recover_Tucker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCreatureSpawned(AActor* Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PlayersWithinRange(bool& InRange);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
