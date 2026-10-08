// /Game/BP/Quests/Common/BPQ_Stockpile_Deposit_Item.BPQ_Stockpile_Deposit_Item_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Stockpile_Deposit_Item_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Easy_Count;  // 0x0470, size 0x4, named "Easy Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Normal_Count;  // 0x0474, size 0x4, named "Normal Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Hard_Count;  // 0x0478, size 0x4, named "Hard Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x047C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Required_Stats;  // 0x0498, size 0x10, named "Required Stats"

    UFUNCTION(BlueprintCallable) void AnalyseInventory(float& InventoryCount, bool& MeetsRequirements);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Stockpile_Deposit_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) AIcarusActor* GetContainerActor();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ManualRunOperation();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
