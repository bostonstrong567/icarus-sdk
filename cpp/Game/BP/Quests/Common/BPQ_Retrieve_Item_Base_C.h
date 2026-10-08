// /Game/BP/Quests/Common/BPQ_Retrieve_Item_Base.BPQ_Retrieve_Item_Base_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4D3, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Retrieve_Item_Base_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemTemplateRowHandle, int32> ItemArray;  // 0x0470, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CrateName;  // 0x04C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Replenish;  // 0x04D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QuestTag;  // 0x04D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CompleteOnPartialCollection;  // 0x04D2, size 0x1

    UFUNCTION(BlueprintCallable) void AddItem(AActor* Actor, FItemTemplateRowHandle Item, int32 Count);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void AddItemSpecificInventory(AActor* Actor, FItemTemplateRowHandle Item, int32 Count, FInventoryIDEnum InventoryID);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool CheckItems();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Retrieve_Item_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool HasItem(FItemTemplateRowHandle RequiredItem, int32 RequiredCount);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void ItemsCollected();
    UFUNCTION(BlueprintCallable) void ReplenishItem();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
