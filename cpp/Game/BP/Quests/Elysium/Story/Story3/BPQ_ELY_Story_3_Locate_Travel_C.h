// /Game/BP/Quests/Elysium/Story/Story3/BPQ_ELY_Story_3_Locate_Travel.BPQ_ELY_Story_3_Locate_Travel_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_3_Locate_Travel_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
