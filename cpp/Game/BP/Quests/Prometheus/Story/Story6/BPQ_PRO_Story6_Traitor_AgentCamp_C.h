// /Game/BP/Quests/Prometheus/Story/Story6/BPQ_PRO_Story6_Traitor_AgentCamp.BPQ_PRO_Story6_Traitor_AgentCamp_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story6_Traitor_AgentCamp_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AdvancedAnimalSwarm_C* BPQC_AdvancedAnimalSwarm;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TrackedCreature;  // 0x0480, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Creature_Killed_Tracker();  // named "Creature Killed Tracker"
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story6_Traitor_AgentCamp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SearchCamp();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
