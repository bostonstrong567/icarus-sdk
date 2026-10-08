// /Game/BP/Quests/GreatHunts/Ape/C2/BPQ_GH_Ape_C2_Kill.BPQ_GH_Ape_C2_Kill_C
// Derives from: ABPQ_Common_Clear_Area_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C2_Kill_C : public ABPQ_Common_Clear_Area_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TrackedCreature;  // 0x049C, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
