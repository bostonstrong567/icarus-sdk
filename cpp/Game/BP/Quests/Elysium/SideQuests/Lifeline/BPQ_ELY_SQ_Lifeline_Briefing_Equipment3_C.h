// /Game/BP/Quests/Elysium/SideQuests/Lifeline/BPQ_ELY_SQ_Lifeline_Briefing_Equipment3.BPQ_ELY_SQ_Lifeline_Briefing_Equipment3_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Lifeline_Briefing_Equipment3_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Lifeline_Briefing_Equipment3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
