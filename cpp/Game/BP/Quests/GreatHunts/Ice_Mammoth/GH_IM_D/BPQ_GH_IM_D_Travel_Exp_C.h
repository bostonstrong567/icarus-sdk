// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D/BPQ_GH_IM_D_Travel_Exp.BPQ_GH_IM_D_Travel_Exp_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D_Travel_Exp_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
