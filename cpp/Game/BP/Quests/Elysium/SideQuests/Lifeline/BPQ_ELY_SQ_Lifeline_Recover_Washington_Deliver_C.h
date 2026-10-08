// /Game/BP/Quests/Elysium/SideQuests/Lifeline/BPQ_ELY_SQ_Lifeline_Recover_Washington_Deliver.BPQ_ELY_SQ_Lifeline_Recover_Washington_Deliver_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Lifeline_Recover_Washington_Deliver_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Lifeline_Recover_Washington_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDelivered();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
