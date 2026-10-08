// /Game/BP/Quests/Prometheus/D/Transport/BPQ_PRO_D_Transport_Fiber.BPQ_PRO_D_Transport_Fiber_C
// Derives from: ABPQ_Stockpile_Deposit_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Transport_Fiber_C : public ABPQ_Stockpile_Deposit_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Transport_Fiber(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ManualRunOperation();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
