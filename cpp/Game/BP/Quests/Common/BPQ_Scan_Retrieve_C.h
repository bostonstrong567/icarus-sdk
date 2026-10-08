// /Game/BP/Quests/Common/BPQ_Scan_Retrieve.BPQ_Scan_Retrieve_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x469, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Scan_Retrieve_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasRadar;  // 0x0468, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
