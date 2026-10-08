// /Game/BP/Quests/Common/BPQ_Retrieve_Item_Pickup.BPQ_Retrieve_Item_Pickup_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Retrieve_Item_Pickup_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool CheckItems();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Retrieve_Item_Pickup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRequiredEquipment(TArray<FItemTemplateRowHandle>& EquipmentItemArray, FItemTemplateRowHandle& Equipment_Item, int32& Count);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) bool HasItem(FItemTemplateRowHandle Item, int32 Count);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void ManualRunOperations();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
