// /Game/BP/Quests/Prometheus/Story/Story6/BPQ_PRO_Story6_Evidence_Travel.BPQ_PRO_Story6_Evidence_Travel_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story6_Evidence_Travel_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0480, size 0x8
};
