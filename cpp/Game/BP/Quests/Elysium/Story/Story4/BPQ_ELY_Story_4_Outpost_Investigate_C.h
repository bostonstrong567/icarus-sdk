// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Outpost_Investigate.BPQ_ELY_Story_4_Outpost_Investigate_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x473, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Outpost_Investigate_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x0472, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Outpost_Investigate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
