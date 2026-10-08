// /Game/BP/Quests/Olympus/Riverlands/Expedition/BPQ_Riverlands_OLY_To_Landing_Zone.BPQ_Riverlands_OLY_To_Landing_Zone_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Riverlands_OLY_To_Landing_Zone_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
