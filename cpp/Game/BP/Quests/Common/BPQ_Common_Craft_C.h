// /Game/BP/Quests/Common/BPQ_Common_Craft.BPQ_Common_Craft_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Craft_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0488, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void DeviceCheck(AActor* Device, bool& Success);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Craft(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnCraftItem(AActor* Player, AActor* Device, FItemData Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void PreCheck(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
