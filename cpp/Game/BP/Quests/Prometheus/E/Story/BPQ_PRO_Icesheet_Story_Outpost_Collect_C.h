// /Game/BP/Quests/Prometheus/E/Story/BPQ_PRO_Icesheet_Story_Outpost_Collect.BPQ_PRO_Icesheet_Story_Outpost_Collect_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Icesheet_Story_Outpost_Collect_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DialogueTimer;  // 0x04C0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DialogueTrigger();
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Icesheet_Story_Outpost_Collect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
