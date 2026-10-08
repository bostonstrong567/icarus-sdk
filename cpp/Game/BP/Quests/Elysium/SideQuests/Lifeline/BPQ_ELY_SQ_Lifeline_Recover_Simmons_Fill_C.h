// /Game/BP/Quests/Elysium/SideQuests/Lifeline/BPQ_ELY_SQ_Lifeline_Recover_Simmons_Fill.BPQ_ELY_SQ_Lifeline_Recover_Simmons_Fill_C
// Derives from: ABPQ_Common_Fill_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Lifeline_Recover_Simmons_Fill_C : public ABPQ_Common_Fill_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Lifeline_Recover_Simmons_Fill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
