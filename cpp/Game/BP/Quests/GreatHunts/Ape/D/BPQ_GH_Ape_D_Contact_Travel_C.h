// /Game/BP/Quests/GreatHunts/Ape/D/BPQ_GH_Ape_D_Contact_Travel.BPQ_GH_Ape_D_Contact_Travel_C
// Derives from: ABPQ_Travel_Medium_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_D_Contact_Travel_C : public ABPQ_Travel_Medium_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0480, size 0x8
};
