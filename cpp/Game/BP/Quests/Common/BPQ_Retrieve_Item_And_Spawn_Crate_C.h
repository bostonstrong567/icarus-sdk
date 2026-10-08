// /Game/BP/Quests/Common/BPQ_Retrieve_Item_And_Spawn_Crate.BPQ_Retrieve_Item_And_Spawn_Crate_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4BA, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Retrieve_Item_And_Spawn_Crate_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Equipment_Item;  // 0x0470, size 0x18, named "Equipment Item"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemTemplateRowHandle> EquipmentItemArray;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0498, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CrateName;  // 0x04A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> Class;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Replenish;  // 0x04B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CompleteOnPartialCollection;  // 0x04B9, size 0x1

    UFUNCTION(BlueprintCallable) void AddItem(AActor* Actor, FItemTemplateRowHandle Item, int32 Count);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Retrieve_Item_And_Spawn_Crate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReplenishItem();
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
