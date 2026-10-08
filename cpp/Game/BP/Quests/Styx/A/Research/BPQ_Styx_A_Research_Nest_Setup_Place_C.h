// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Setup_Place.BPQ_Styx_A_Research_Nest_Setup_Place_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Setup_Place_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0490, size 0x8
};
