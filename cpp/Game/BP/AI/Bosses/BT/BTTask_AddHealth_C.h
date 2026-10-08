// /Game/BP/AI/Bosses/BT/BTTask_AddHealth.BTTask_AddHealth_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_AddHealth_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector AffectedActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HealthToAdd;  // 0x00D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_AddHealth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
