// /Game/BP/Quests/Prometheus/A/Extraction/BPQ_PRO_A_Extraction_Extract.BPQ_PRO_A_Extraction_Extract_C
// Derives from: ABPQ_Common_Extract_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_A_Extraction_Extract_C : public ABPQ_Common_Extract_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
