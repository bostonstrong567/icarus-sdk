// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Rescue_StasisBag_Deliver.BPQ_ELY_Story_4_Rescue_StasisBag_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Rescue_StasisBag_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Rescue_StasisBag_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
