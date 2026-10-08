// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C2/BPQ_GH_RG_C2_Observe.BPQ_GH_RG_C2_Observe_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4BC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C2_Observe_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _1;  // 0x0470, size 0x1, named "1"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _2;  // 0x0471, size 0x1, named "2"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _3;  // 0x0472, size 0x1, named "3"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool _4;  // 0x0473, size 0x1, named "4"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FoundDialogue;  // 0x0474, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Update1;  // 0x048C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Update2;  // 0x04A4, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C2_Observe(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
