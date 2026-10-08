// /Game/BP/Quests/Olympus/Riverlands/Scan/BPQ_OLY_Riverlands_Scan.BPQ_OLY_Riverlands_Scan_C
// Derives from: ABPQ_Scan_Parent_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Scan_C : public ABPQ_Scan_Parent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Scan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
