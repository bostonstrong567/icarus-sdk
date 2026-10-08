// /Game/BP/Quests/Olympus/Riverlands/Stockpile/BPQ_OLY_Riverlands_Stockpile_Deposit_Biofuel.BPQ_OLY_Riverlands_Stockpile_Deposit_Biofuel_C
// Derives from: ABPQ_Stockpile_Deposit_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Stockpile_Deposit_Biofuel_C : public ABPQ_Stockpile_Deposit_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Type;  // 0x04B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TempCount;  // 0x04C0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Stockpile_Deposit_Biofuel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
