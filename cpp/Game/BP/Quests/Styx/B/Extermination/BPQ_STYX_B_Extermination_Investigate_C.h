// /Game/BP/Quests/Styx/B/Extermination/BPQ_STYX_B_Extermination_Investigate.BPQ_STYX_B_Extermination_Investigate_C
// Derives from: ABPQ_Travel_Large_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_B_Extermination_Investigate_C : public ABPQ_Travel_Large_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0480, size 0x8
};
