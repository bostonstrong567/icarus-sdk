// /Game/BP/Quests/Elysium/Story/Story3/BPQ_ELY_Story_3.BPQ_ELY_Story_3_C
// Derives from: ABPQ_ELY_Setup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x47A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_3_C : public ABPQ_ELY_Setup_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0479, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
