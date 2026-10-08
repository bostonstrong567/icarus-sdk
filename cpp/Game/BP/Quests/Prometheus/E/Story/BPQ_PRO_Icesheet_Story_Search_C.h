// /Game/BP/Quests/Prometheus/E/Story/BPQ_PRO_Icesheet_Story_Search.BPQ_PRO_Icesheet_Story_Search_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Icesheet_Story_Search_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AdvancedAnimalSwarm_C* BPQC_AdvancedAnimalSwarm;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Creature_Killed_Tracker();  // named "Creature Killed Tracker"
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Icesheet_Story_Search(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
