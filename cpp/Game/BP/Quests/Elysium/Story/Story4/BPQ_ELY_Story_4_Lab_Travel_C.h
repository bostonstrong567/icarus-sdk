// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Lab_Travel.BPQ_ELY_Story_4_Lab_Travel_C
// Derives from: ABPQ_Common_Travel_MapIcon_ClearedOnComplete_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Lab_Travel_C : public ABPQ_Common_Travel_MapIcon_ClearedOnComplete_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0498, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Lab_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnReady(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
