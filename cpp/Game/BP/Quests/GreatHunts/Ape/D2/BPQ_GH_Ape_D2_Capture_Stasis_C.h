// /Game/BP/Quests/GreatHunts/Ape/D2/BPQ_GH_Ape_D2_Capture_Stasis.BPQ_GH_Ape_D2_Capture_Stasis_C
// Derives from: ABPQ_PRO_D_Rescue_NPC_Collect_C > ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_D2_Capture_Stasis_C : public ABPQ_PRO_D_Rescue_NPC_Collect_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_D2_Capture_Stasis(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
