// /Game/BP/Quests/Elysium/SideQuests/Fish/BPQ_ELY_SQ_Fish_Supply.BPQ_ELY_SQ_Fish_Supply_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x473, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Fish_Supply_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x0472, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Fish_Supply(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
