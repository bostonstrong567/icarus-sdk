// /Game/BP/Quests/Prometheus/C/Construction/BPQ_PRO_C_Construction.BPQ_PRO_C_Construction_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x479, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_C_Construction_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 Complete;  // 0x0478, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_C_Construction(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
