// /Game/BP/Quests/Styx/D/Expedition/BPQ_STYX_D_Travel_Lake.BPQ_STYX_D_Travel_Lake_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Travel_Lake_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8
};
