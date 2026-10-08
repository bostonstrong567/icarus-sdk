// /Game/BP/Quests/Styx/B/Expedition/BP_STYX_B_Expedition_Travel_Blocker.BP_STYX_B_Expedition_Travel_Blocker_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_STYX_B_Expedition_Travel_Blocker_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
