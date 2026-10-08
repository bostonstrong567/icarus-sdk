// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_A/BPQ_GH_RG_A_Miners_Explore.BPQ_GH_RG_A_Miners_Explore_C
// Derives from: ABPQ_Travel_Small_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_A_Miners_Explore_C : public ABPQ_Travel_Small_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
