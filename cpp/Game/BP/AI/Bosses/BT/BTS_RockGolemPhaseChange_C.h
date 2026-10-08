// /Game/BP/AI/Bosses/BT/BTS_RockGolemPhaseChange.BTS_RockGolemPhaseChange_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xCC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_RockGolemPhaseChange_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentPhaseKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinPercentageBeforePhaseChange;  // 0x00C8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_RockGolemPhaseChange(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
