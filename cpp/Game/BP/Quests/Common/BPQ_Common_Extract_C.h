// /Game/BP/Quests/Common/BPQ_Common_Extract.BPQ_Common_Extract_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Extract_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0474, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Extract(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnExtractedItem(AActor* Device, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
