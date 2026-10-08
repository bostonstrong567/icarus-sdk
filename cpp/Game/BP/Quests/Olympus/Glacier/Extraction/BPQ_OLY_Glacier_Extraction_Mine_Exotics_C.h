// /Game/BP/Quests/Olympus/Glacier/Extraction/BPQ_OLY_Glacier_Extraction_Mine_Exotics.BPQ_OLY_Glacier_Extraction_Mine_Exotics_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Glacier_Extraction_Mine_Exotics_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
