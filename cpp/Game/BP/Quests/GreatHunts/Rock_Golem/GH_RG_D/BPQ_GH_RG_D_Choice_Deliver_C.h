// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_D/BPQ_GH_RG_D_Choice_Deliver.BPQ_GH_RG_D_Choice_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_D_Choice_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_D_Choice_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
