// /Game/BP/Quests/Elysium/SideQuests/Trails/BPQ_ELY_SQ_Trials_Race_Progress.BPQ_ELY_SQ_Trials_Race_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Trials_Race_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _1;  // 0x0470, size 0x1, named "1"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _2;  // 0x0471, size 0x1, named "2"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _3;  // 0x0472, size 0x1, named "3"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _4;  // 0x0473, size 0x1, named "4"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _5;  // 0x0474, size 0x1, named "5"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _6;  // 0x0475, size 0x1, named "6"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _7;  // 0x0476, size 0x1, named "7"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _8;  // 0x0477, size 0x1, named "8"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Trials_Race_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
