// /Game/BP/Quests/Prometheus/E/Research/BPQ_PRO_E_Research_Collect_Sulfur.BPQ_PRO_E_Research_Collect_Sulfur_C
// Derives from: ABPQ_Stockpile_Deposit_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_E_Research_Collect_Sulfur_C : public ABPQ_Stockpile_Deposit_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentCount;  // 0x04B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> RequiredStatArray;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04C8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_E_Research_Collect_Sulfur(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ManualRunOperation();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
