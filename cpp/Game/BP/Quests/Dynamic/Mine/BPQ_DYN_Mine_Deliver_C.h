// /Game/BP/Quests/Dynamic/Mine/BPQ_DYN_Mine_Deliver.BPQ_DYN_Mine_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Mine_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Initialised;  // 0x04C0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Mine_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
