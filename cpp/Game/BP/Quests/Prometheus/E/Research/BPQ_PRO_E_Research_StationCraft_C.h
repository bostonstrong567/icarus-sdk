// /Game/BP/Quests/Prometheus/E/Research/BPQ_PRO_E_Research_StationCraft.BPQ_PRO_E_Research_StationCraft_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_E_Research_StationCraft_C : public ABPQ_Common_Craft_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_E_Research_StationCraft(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
