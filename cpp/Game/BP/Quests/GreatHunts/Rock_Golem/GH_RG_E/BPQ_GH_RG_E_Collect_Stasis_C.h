// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_E/BPQ_GH_RG_E_Collect_Stasis.BPQ_GH_RG_E_Collect_Stasis_C
// Derives from: ABPQ_GH_IM_O1_Craft_Stasis_C > ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_E_Collect_Stasis_C : public ABPQ_GH_IM_O1_Craft_Stasis_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_E_Collect_Stasis(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
