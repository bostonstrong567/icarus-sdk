// /Game/BP/Quests/Olympus/Canyon/Expedition/BPQ_OLY_Canyon_Expedition_Locate.BPQ_OLY_Canyon_Expedition_Locate_C
// Derives from: ABP_BW5_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Canyon_Expedition_Locate_C : public ABP_BW5_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0488, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Canyon_Expedition_Locate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
