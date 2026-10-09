// /Game/BP/Quests/Prometheus/A/Extraction/BPQ_PRO_A_Extraction_Craft_Coco.BPQ_PRO_A_Extraction_Craft_Coco_C
// Derives from: ABPQ_Common_Craft_TagModifier_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_A_Extraction_Craft_Coco_C : public ABPQ_Common_Craft_TagModifier_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
