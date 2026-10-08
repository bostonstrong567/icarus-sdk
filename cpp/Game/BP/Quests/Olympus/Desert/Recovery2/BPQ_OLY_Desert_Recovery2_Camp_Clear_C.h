// /Game/BP/Quests/Olympus/Desert/Recovery2/BPQ_OLY_Desert_Recovery2_Camp_Clear.BPQ_OLY_Desert_Recovery2_Camp_Clear_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Recovery2_Camp_Clear_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TrackedCreature;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCreatures;  // 0x0488, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
