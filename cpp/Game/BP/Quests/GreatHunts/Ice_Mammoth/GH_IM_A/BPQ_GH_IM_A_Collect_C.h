// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_A/BPQ_GH_IM_A_Collect.BPQ_GH_IM_A_Collect_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_A_Collect_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04A0, size 0x8
};
