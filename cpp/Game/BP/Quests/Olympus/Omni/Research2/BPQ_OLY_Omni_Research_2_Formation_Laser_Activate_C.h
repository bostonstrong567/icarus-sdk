// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Formation_Laser_Activate.BPQ_OLY_Omni_Research_2_Formation_Laser_Activate_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Formation_Laser_Activate_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
