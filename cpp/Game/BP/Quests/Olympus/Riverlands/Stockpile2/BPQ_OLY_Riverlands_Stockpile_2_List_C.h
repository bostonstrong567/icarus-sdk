// /Game/BP/Quests/Olympus/Riverlands/Stockpile2/BPQ_OLY_Riverlands_Stockpile_2_List.BPQ_OLY_Riverlands_Stockpile_2_List_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Stockpile_2_List_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool corpsefound;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool headfoundplayer;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float lastHeadSpawnedTime;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Required_Stats;  // 0x0478, size 0x10, named "Required Stats"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Stockpile_2_List(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
