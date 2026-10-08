// /Game/BP/Quests/Common/BPQ_Common_Deliver_Tag.BPQ_Common_Deliver_Tag_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Deliver_Tag_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTagQueriesRowHandle ItemQuery;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Required_Number;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Container_Name;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x04A0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Deliver_Tag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ItemCheck();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
