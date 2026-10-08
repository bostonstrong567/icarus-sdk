// /Game/BP/Quests/Elysium/SideQuests/Fish/BPQ_ELY_SQ_Fish_Travel.BPQ_ELY_SQ_Fish_Travel_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Fish_Travel_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
