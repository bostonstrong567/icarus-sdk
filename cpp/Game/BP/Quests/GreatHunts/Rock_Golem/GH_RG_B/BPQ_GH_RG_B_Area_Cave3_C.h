// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_B/BPQ_GH_RG_B_Area_Cave3.BPQ_GH_RG_B_Area_Cave3_C
// Derives from: ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x49B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_B_Area_Cave3_C : public ABPQ_Common_MapIconOnArrival_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0499, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SharkCanTrigger;  // 0x049A, size 0x1

    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION(BlueprintCallable) void CustomEvent_1(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_B_Area_Cave3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
