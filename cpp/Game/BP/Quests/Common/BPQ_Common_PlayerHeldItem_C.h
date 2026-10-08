// /Game/BP/Quests/Common/BPQ_Common_PlayerHeldItem.BPQ_Common_PlayerHeldItem_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x49C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_PlayerHeldItem_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Required_Stats;  // 0x0470, size 0x10, named "Required Stats"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Items_Static_Row_Handle;  // 0x0480, size 0x18, named "Items Static Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0498, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_PlayerHeldItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
