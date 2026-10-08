// /Game/BP/Quests/Elysium/SideQuests/Lifeline/BPQ_ELY_SQ_Lifeline_Recover_Simmons.BPQ_ELY_SQ_Lifeline_Recover_Simmons_C
// Derives from: ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C > ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Lifeline_Recover_Simmons_C : public ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0498, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Lifeline_Recover_Simmons(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayersWithinRange(bool& InRange);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
