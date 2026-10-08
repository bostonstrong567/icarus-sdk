// /Game/BP/Quests/GreatHunts/Ape/E2/BPQ_GH_Ape_E2_Track_Trail1.BPQ_GH_Ape_E2_Track_Trail1_C
// Derives from: ABPQ_GH_Ape_E2_Track_Trail2_C > ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x500, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_E2_Track_Trail1_C : public ABPQ_GH_Ape_E2_Track_Trail2_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04F8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_E2_Track_Trail1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunSubQuests();
};
