// /Game/BP/Quests/Olympus/Riverlands/Expedition/BPQ_OLY_Riverlands_Blocker_Travel.BPQ_OLY_Riverlands_Blocker_Travel_C
// Derives from: ABPQ_Travel_Large_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Blocker_Travel_C : public ABPQ_Travel_Large_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
