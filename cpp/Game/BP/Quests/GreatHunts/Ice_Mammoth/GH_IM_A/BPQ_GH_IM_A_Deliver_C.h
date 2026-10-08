// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_A/BPQ_GH_IM_A_Deliver.BPQ_GH_IM_A_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_A_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_A_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
