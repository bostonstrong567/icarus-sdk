// /Game/BP/Quests/Elysium/Story/Story2/BPQ_ELY_Story_2_Blow_Deploy.BPQ_ELY_Story_2_Blow_Deploy_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_2_Blow_Deploy_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_2_Blow_Deploy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ItemMatch(AIcarusActor* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
