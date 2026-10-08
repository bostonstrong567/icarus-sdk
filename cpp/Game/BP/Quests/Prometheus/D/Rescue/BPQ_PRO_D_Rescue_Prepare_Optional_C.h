// /Game/BP/Quests/Prometheus/D/Rescue/BPQ_PRO_D_Rescue_Prepare_Optional.BPQ_PRO_D_Rescue_Prepare_Optional_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x46C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Rescue_Prepare_Optional_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0468, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
