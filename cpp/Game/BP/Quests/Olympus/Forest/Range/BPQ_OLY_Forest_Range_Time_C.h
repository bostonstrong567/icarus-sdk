// /Game/BP/Quests/Olympus/Forest/Range/BPQ_OLY_Forest_Range_Time.BPQ_OLY_Forest_Range_Time_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Range_Time_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxScore;  // 0x0468, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentHighScore;  // 0x046C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
