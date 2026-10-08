// /Game/BP/Quests/Olympus/Riverlands/Delivery/BPQ_OLY_Riverlands_Delivery_Status.BPQ_OLY_Riverlands_Delivery_Status_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x474, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Delivery_Status_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0470, size 0x4

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Delivery_Status(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
