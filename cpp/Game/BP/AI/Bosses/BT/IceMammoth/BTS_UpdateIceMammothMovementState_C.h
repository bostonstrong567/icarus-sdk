// /Game/BP/AI/Bosses/BT/IceMammoth/BTS_UpdateIceMammothMovementState.BTS_UpdateIceMammothMovementState_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateIceMammothMovementState_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector HasArmor;  // 0x00A0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateIceMammothMovementState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
