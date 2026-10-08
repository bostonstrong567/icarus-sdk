// /Game/BP/Quests/Common/BPQ_Common_Object_Health.BPQ_Common_Object_Health_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Object_Health_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ObjectMissionError;  // 0x0468, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
