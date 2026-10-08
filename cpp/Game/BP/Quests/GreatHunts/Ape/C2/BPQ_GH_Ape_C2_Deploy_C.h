// /Game/BP/Quests/GreatHunts/Ape/C2/BPQ_GH_Ape_C2_Deploy.BPQ_GH_Ape_C2_Deploy_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C2_Deploy_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C2_Deploy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
