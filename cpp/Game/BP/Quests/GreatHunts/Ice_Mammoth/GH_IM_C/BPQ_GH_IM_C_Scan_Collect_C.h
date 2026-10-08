// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C/BPQ_GH_IM_C_Scan_Collect.BPQ_GH_IM_C_Scan_Collect_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C_Scan_Collect_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C_Scan_Collect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
