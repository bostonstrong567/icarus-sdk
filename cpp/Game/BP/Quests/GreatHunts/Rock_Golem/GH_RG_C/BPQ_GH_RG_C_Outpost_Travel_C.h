// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C/BPQ_GH_RG_C_Outpost_Travel.BPQ_GH_RG_C_Outpost_Travel_C
// Derives from: ABPQ_Travel_Large_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C_Outpost_Travel_C : public ABPQ_Travel_Large_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C_Outpost_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
