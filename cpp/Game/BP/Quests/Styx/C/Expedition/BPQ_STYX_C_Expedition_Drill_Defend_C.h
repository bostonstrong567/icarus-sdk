// /Game/BP/Quests/Styx/C/Expedition/BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_C_Expedition_Drill_Defend_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Sp3;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Sp1;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Sp6;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Sp5;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Sp4;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Sp2;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_PawnSwarm_C* BPQC_TeenageWormSwarm;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_PawnSwarm_C* BPQC_CaveWormSwarm;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_PersistantBlocker_C* BPQC_PersistantBlocker;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnerBasic_C*> Spawners;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* WormSpawnTime;  // 0x04C8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_C_Expedition_Drill_Defend(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ManualWormSpawn();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Spawn_Spawer(USceneComponent* Target);  // parameters 0x8, named "Spawn Spawer"
};
