// /Game/BP/Quests/Implementations/Bw6_Survey/BP_BW6_Survey_CollectTransmitter.BP_BW6_Survey_CollectTransmitter_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Survey_CollectTransmitter_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
