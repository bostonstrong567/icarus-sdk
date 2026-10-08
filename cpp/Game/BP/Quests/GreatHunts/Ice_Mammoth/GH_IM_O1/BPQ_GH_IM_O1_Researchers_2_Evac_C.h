// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O1/BPQ_GH_IM_O1_Researchers_2_Evac.BPQ_GH_IM_O1_Researchers_2_Evac_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O1_Researchers_2_Evac_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusMapIconComponent* MapIcon;  // 0x04A0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
