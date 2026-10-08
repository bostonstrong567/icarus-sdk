// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Setup_Craft.BPQ_Styx_A_Research_Nest_Setup_Craft_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Setup_Craft_C : public ABPQ_Common_Craft_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0490, size 0x8
};
