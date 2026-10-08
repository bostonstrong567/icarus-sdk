// /Game/BP/Quests/Prometheus/D/Rescue/BPQ_PRO_D_Rescue_NPC2_Collect.BPQ_PRO_D_Rescue_NPC2_Collect_C
// Derives from: ABPQ_PRO_D_Rescue_NPC_Collect_C > ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Rescue_NPC2_Collect_C : public ABPQ_PRO_D_Rescue_NPC_Collect_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Rescue_NPC2_Collect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
