// /Game/BP/Quests/Prometheus/E/Story/BPQ_PRO_Icesheet_Story_Beacon.BPQ_PRO_Icesheet_Story_Beacon_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Icesheet_Story_Beacon_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0498, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Icesheet_Story_Beacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
