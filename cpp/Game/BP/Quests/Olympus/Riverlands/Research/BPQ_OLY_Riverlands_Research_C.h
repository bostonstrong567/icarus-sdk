// /Game/BP/Quests/Olympus/Riverlands/Research/BPQ_OLY_Riverlands_Research.BPQ_OLY_Riverlands_Research_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Research_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Research(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
