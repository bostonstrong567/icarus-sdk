// /Game/BP/Quests/Styx/A/Expedition/BPQ_Styx_A_Expedition_Place_Beacon.BPQ_Styx_A_Expedition_Place_Beacon_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Expedition_Place_Beacon_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Expedition_Place_Beacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestStarted();
};
