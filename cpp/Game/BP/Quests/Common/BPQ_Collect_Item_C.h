// /Game/BP/Quests/Common/BPQ_Collect_Item.BPQ_Collect_Item_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Collect_Item_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Max_Count;  // 0x0488, size 0x4, named "Max Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManualCheck;  // 0x048C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RequiredStat;  // 0x0490, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Collect_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void GetRequiredEquipment(TArray<FItemTemplateRowHandle>& EquipmentItemArray, FItemTemplateRowHandle& Equipment_Item, int32& Count);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void ItemCheck();
    UFUNCTION(BlueprintCallable) void ManualRunOperations();
    UFUNCTION(BlueprintCallable) void PlayerHasItem(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
