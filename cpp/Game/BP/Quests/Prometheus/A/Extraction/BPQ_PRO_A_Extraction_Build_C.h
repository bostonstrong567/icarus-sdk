// /Game/BP/Quests/Prometheus/A/Extraction/BPQ_PRO_A_Extraction_Build.BPQ_PRO_A_Extraction_Build_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_A_Extraction_Build_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _1;  // 0x0478, size 0x1, named "1"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _2;  // 0x0479, size 0x1, named "2"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _3;  // 0x047A, size 0x1, named "3"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_A_Extraction_Build(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
