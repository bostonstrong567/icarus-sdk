// /Game/BP/Quests/Styx/D/Recovery/BPQ_STYX_D_Recovery_Retrieval.BPQ_STYX_D_Recovery_Retrieval_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x472, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Recovery_Retrieval_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsHungry;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsThirsty;  // 0x0471, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Recovery_Retrieval(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
