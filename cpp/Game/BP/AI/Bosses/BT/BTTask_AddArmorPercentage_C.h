// /Game/BP/AI/Bosses/BT/BTTask_AddArmorPercentage.BTTask_AddArmorPercentage_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_AddArmorPercentage_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PercentageToAdd;  // 0x00B0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_AddArmorPercentage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
