// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_PRO_Story1_Mini_Quest_Grow.BPQ_PRO_Story1_Mini_Quest_Grow_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story1_Mini_Quest_Grow_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Check_for_Tomato();  // named "Check for Tomato"
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story1_Mini_Quest_Grow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
